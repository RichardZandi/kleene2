# Kleene2

*A lightweight Lean 4 library that formalizes the generalized Kleene Second Recursion Theorem and provides a reusable diagonal‑flipper gadget for computability‑theoretic impossibility proofs.*

[![Lean 4](https://img.shields.io/badge/Lean-4.5+-blue?logo=leanpub)](https://lean-lang.org)

---

## 1  Overview

This repository collects a **minimal, self‑contained proof skeleton** for the
classical fixed‑point theorems that underpin many impossibility results in
computability theory.  Everything compiles against **mathlib‑4 commit
`e8a0c7b` (31 May 2025)** and requires **Lean ≥ 4.5**.

```
Kleene2/
├─ KleeneFix.lean   -- 1st & 2nd Kleene fixed‑point theorems at `Code` level
├─ Kleene2.lean     -- Gödel‑generic 2nd recursion theorem (transport version)
└─ RobustFlipper.lean -- General‑purpose diagonal flipper for predictors
```

### 1.1  What you get

| Module              | Purpose                                                                                                                                                  | One‑liner                                  |
| ------------------- | -------------------------------------------------------------------------------------------------------------------------------------------------------- | ------------------------------------------ |
| **`RobustFlipper`** | Turns any would‑be predictor `π` into a *self‑defeating* variant `ψ = flip F π δ`.                                                                       | `open RobustFlipper` → `Flipper F π δ …`             |
| **`KleeneFix`**     | Code‑level proofs of **Kleene’s 1st & 2nd recursion theorems** using `Nat.Partrec.Code.fixed_point`.                                                     | `Kleene.kleene_fix` / `Kleene.kleene_fix₂` |
| **`Kleene2`**       | A *Gödel‑numbering‑agnostic* statement of the 2nd theorem: for any computable `f : α×σ → α` you get an index `e` with the usual self‑reference property. | `kleene_recursion₂`                        |

The files are fully documented and can be read as a *literate* introduction to
primitive‑recursive programming in Lean.

---

## 2  Installation

```bash
lake init Kleene2 git https://github.com/<you>/Kleene2.git
cd Kleene2
lake update     # pulls mathlib‑4 commit e8a0c7b
lake build      # ~10 s on a modern laptop
```

> **Prerequisites**
>
> * Lean 4.5 or later (see [https://lean-lang.org](https://lean-lang.org))
> * A recent `elan` toolchain (`elan default leanprover/lean4:latest`)

---

## 3  Quick start

Open `./Kleene2.lean` in VS Code with the Lean extension and hover—every lemma
comes with inline documentation.  Or try it from the REPL:

```lean
import Kleene2.RobustFlipper

open RobustFlipper

-- Dummy components
def F  (s x : ℕ) := x               -- identity transition
def π  (s : ℕ)   := s               -- naïve predictor
def δ  (n : ℕ)   := n + 1           -- bump: no fixed points

-- Package everything
#eval (Flipper F π δ (by simp) (by
  show Primrec₂ F; simpa using Primrec₂.snd)
  (by simpa using Primrec.id) (by simpa using Primrec.add_const)).ψ 3
-- ↪ yields `4`, disagreeing with the original `π 3 = 3` when π was correct.
```

---

## 4  Project goals

* Provide a **didactic reference** for working with `Nat.Partrec.Code`.
* Offer a *ready‑to‑paste* diagonal‑flipper gadget for impossibility proofs.
* Serve as a **lean, dependency‑light base** for larger formalisations (e.g.
  the *Cat‑and‑Tail* or *Universal Classification Impossibility* projects).

Pull requests are welcome—especially simplifications, better comments, or
alternative proofs.

---

## 5  License

Released under an MIT‑style license.  See `LICENSE` for details.

---


Enjoy formalising!  😊
