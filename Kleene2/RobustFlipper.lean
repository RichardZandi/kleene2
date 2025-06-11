/-

# RobustFlipper ― A **general‑purpose diagonal flipper** for impossibility proofs

This module implements a *robust* diagonal‑flipping gadget that is handy when
one needs to turn any would‑be predictor `π` against itself.  It works with
**arbitrary** state‑transition systems `F : ℕ → ℕ → ℕ` (think of `F s x` as “the
next state if you feed the machine `x` while it is in state `s`”).

The file supplies

* `agrees`  — a Boolean guard that checks whether `π` really nailed the next
  move of `F` at a given state `s`;
* `flip`    — the *diagonal flipper*: keep using `F` except when `π` would have
  been correct, in which case call the *disturber* `δ` instead;
* `flip_primrec` — a *closure lemma* showing that `flip` is primitive‑recursive
  as soon as its ingredients are;
* `flip_ne_of_correct` — the key contradiction lemma: if `π` happened to guess
  the next move, `flip` **forces a disagreement** provided `δ` has no fixed
  points;
* `Flipper` — a convenience *bundle* packaging the flipped predictor together
  with the above properties.

## Usage sketch

Given a computable system `F`, a candidate predictor `π`, and a computable
function `δ` *without* fixed points (e.g. `δ n := n+1`), the structure

```lean
open RobustFlipper

def myFlipper : Flipper F π δ ... := {}
```

gives you a brand‑new primitive‑recursive map `ψ := flip F π δ` that
**disagrees** with `π` *exactly* at those states where `π` would have been
correct.  This is the standard diagonalisation step used in many
incomputability arguments (e.g. the *Cat‑and‑Tail* and *Universal
Classification Impossibility* theorems developed elsewhere in the project).

Feel free to copy‑and‑paste the gadget: the only thing you need to provide is a
non‑trivial `δ` ("*bump*"), typically something as simple as `δ n := n+1` or
`δ n := n + 2` to guarantee the *no fixed‑point* property.


-/

import Mathlib.Computability.Partrec
import Mathlib.Computability.Primrec

open Classical Primrec

namespace RobustFlipper

/-- `agrees F π s` is `true` *iff* the predictor `π` **exactly** predicts the
    next state of the system `F` at state `s`.  Formally:

    ```lean
    agrees F π s = Bool.true  ↔  F s (π s) = π s.
    ```

    We implement it as a Boolean equality test to stay inside the primitive
    recursive universe. -/
@[simp]
def agrees (F : ℕ → ℕ → ℕ) (π : ℕ → ℕ) (s : ℕ) : Bool :=
  (F s (π s)) == π s

/-- **Robust diagonal flipper.**

    *Idea*: Take the original dynamic `F`.  Whenever the predictor `π` would
    *actually* get the next move right, *flip* the outcome by applying a
    bump‑function `δ` to the predicted result.  Otherwise keep the honest
    `F` output.  Formally,

    ```lean
    flip F π δ s = if agrees F π s then δ (π s) else F s (π s).
    ```

    The bump `δ` must have **no fixed points** for the usual diagonalisation
    argument to go through, but `flip` itself does *not* require that
    assumption. -/
@[simp]
def flip (F : ℕ → ℕ → ℕ) (π δ : ℕ → ℕ) : ℕ → ℕ :=
  fun s =>
    bif agrees F π s
      then δ (π s)
      else F s (π s)

/-- `flip` preserves *primitive‑recursiveness*:

    If the transition map `F`, the predictor `π`, and the bump `δ` are all
    primitive‑recursive, then so is the flipped map `flip F π δ`.  The proof is
    a gentle exercise in the `Primrec` combinator API. -/
lemma flip_primrec
    {F : ℕ → ℕ → ℕ} {π δ : ℕ → ℕ}
    (hF  : Primrec₂ F) (hπ : Primrec π) (hδ : Primrec δ) :
    Primrec (flip F π δ) := by
  -- First, build the shared sub‑expression `F s (π s)`.
  have hPair₁ : Primrec (fun s : ℕ => (s, π s)) :=
    Primrec.pair Primrec.id hπ
  have hY : Primrec (fun s => F s (π s)) :=
    Primrec.comp hF hPair₁
  -- Boolean guard: `(F s (π s)) == π s`.
  have hEqBool : Primrec (fun p : ℕ × ℕ => p.fst == p.snd) :=
    Primrec₂.comp Primrec.beq Primrec.fst Primrec.snd
  have hPair₂ : Primrec (fun s : ℕ => (F s (π s), π s)) :=
    Primrec.pair hY hπ
  have hGuard : Primrec (fun s => (F s (π s)) == π s) :=
    Primrec.comp hEqBool hPair₂
  -- Bump branch: `δ (π s)`.
  have hBump : Primrec (fun s => δ (π s)) :=
    hδ.comp hπ
  -- Finally assemble the conditional.
  simpa [flip, agrees] using
    Primrec.cond hGuard hBump hY

/-- **Key contradiction lemma.**

    Suppose `δ` has *no fixed points* and `π` actually predicted the next state
    of `F` at some `s`.  Then the flipped predictor **necessarily disagrees**
    with `π` at that same state.  Precisely:

    ```lean
    F s (π s) = π s → flip F π δ s ≠ π s.
    ``` -/
lemma flip_ne_of_correct
    {F : ℕ → ℕ → ℕ} {π δ : ℕ → ℕ}
    (hδne : ∀ n, δ n ≠ n)
    {s : ℕ} (hgood : F s (π s) = π s) :
    flip F π δ s ≠ π s := by
  simp [flip, agrees, hgood, hδne (π s)]

/-- ### `Flipper` — everything you need in one place.

    The structure packages:

    * `ψ    := flip F π δ`                   — the flipped predictor;
    * `primrec : Primrec ψ`                  — its computability fact;
    * `ne_of_correct`                        — the core contradiction lemma.

    To build a `Flipper` you must supply proofs that

    * `δ` has **no fixed points**;
    * `F`, `π`, and `δ` are all primitive‑recursive.

    Nothing else is required. -/
structure Flipper
    (F : ℕ → ℕ → ℕ) (π δ : ℕ → ℕ)
    (hδne : ∀ n, δ n ≠ n)
    (hF  : Primrec₂ F) (hπ : Primrec π) (hδ : Primrec δ)
where
  /-- The flipped predictor. -/
  ψ        : ℕ → ℕ := flip F π δ
  /-- `ψ` inherits primitive‑recursiveness from its ingredients. -/
  primrec  : Primrec ψ := by
    -- `ψ` *is definitionally* `flip F π δ`, so just rewrite:
    simpa [ψ] using flip_primrec (F:=F) (π:=π) (δ:=δ) hF hπ hδ
  /-- When `π` is correct, `ψ` disagrees. -/
  ne_of_correct :
      ∀ {s}, F s (π s) = π s → ψ s ≠ π s := by
    intro s h
    -- same rewrite trick
    simpa [ψ] using
      flip_ne_of_correct (F:=F) (π:=π) (δ:=δ) hδne (s:=s) h

end RobustFlipper

#lint
