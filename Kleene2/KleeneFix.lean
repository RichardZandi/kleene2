/-
This file proves the **first and second Kleene fixed-point (recursion) theorems
at the `Code` level** using mathlib4’s `Nat.Partrec.Code.fixed_point`.

* `kleene_fix`   — returns a code that is a fixed point of an arbitrary
                   computable transformer `f : Code → Code`.
* `kleene_fixed` — existential version of the same.
* `kleene_fix₂`  — parameter-indexed fixed point (`Code × σ → Code`).
* `kleene_fixed₂`— existential statement of the second recursion theorem.
-/

import Mathlib.Computability.PartrecCode

open Nat.Partrec Code
open Classical     -- brings `choose` and `choose_spec` into scope

namespace Kleene

/-- `code0` is the *constant* code that always evaluates to `0`. -/
def code0 : Code := Code.const 0

/-- **`kleene_fix`.**
For any *computable* transformer `f : Code → Code` it produces a code `c`
such that `eval c = eval (f c)`.  (Kleene–Rogers fixed-point.) -/
noncomputable def kleene_fix
    {f : Code → Code} (hf : Computable f) :
    {c : Code // eval c = eval (f c)} :=
by
  classical
  -- 1. Existence of a fixed point in the “reversed” orientation.
  have h : ∃ c : Code, eval (f c) = eval c :=
    Nat.Partrec.Code.fixed_point (f := f) hf
  -- 2. Pick a witness with classical choice.
  refine ⟨Classical.choose h, ?_⟩
  -- 3. Flip sides to match our desired equality.
  simpa using (Classical.choose_spec h).symm

/-- **Kleene fixed-point theorem** (existential, code form). -/
theorem kleene_fixed
    {f : Code → Code} (hf : Computable f) :
    ∃ c : Code, eval c = eval (f c) :=
by
  rcases kleene_fix hf with ⟨c, hc⟩
  exact ⟨c, hc⟩

/-- **`kleene_fix₂`.**
Parameterised fixed point: for any computable `f : Code × σ → Code`
and any value `p : σ`, returns a code `c` with
`eval c = eval (f (c, p))`. -/
noncomputable def kleene_fix₂
    {σ : Type} [Primcodable σ]
    {f : Code × σ → Code} (hf : Computable f) (p : σ) :
    {c : Code // eval c = eval (f (c, p))} :=
by
  classical
  -- Freeze `p` to create a unary transformer.
  let g : Code → Code := fun c ↦ f (c, p)

  -- `g` is computable: compose `f` with the pairing map `c ↦ (c, p)`.
  have hg : Computable g := by
    have hPair : Computable (fun c : Code ↦ (c, p)) :=
      (Computable.pair Computable.id (Computable.const p))
    simpa [g] using hf.comp hPair

  -- Apply the unary fixed-point wrapper.
  rcases kleene_fix (f := g) hg with ⟨c, hc⟩
  exact ⟨c, by simpa [g] using hc⟩

/-- **Second Kleene recursion theorem** (existential, code form). -/
theorem kleene_fixed₂
    {σ : Type} [Primcodable σ]
    {f : Code × σ → Code} (hf : Computable f) (p : σ) :
    ∃ c : Code, eval c = eval (f (c, p)) :=
by
  rcases kleene_fix₂ hf p with ⟨c, hc⟩
  exact ⟨c, hc⟩

end Kleene

#lint
