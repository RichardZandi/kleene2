-- Kleen2.lean
-- Gödel-generic second Kleene recursion theorem.

--Built against mathlib-4 commit e8a0c7b (31-May-2025).

import Mathlib.Computability.Partrec
import Mathlib.Computability.PartrecCode
import Mathlib.Logic.Encodable.Basic
import Kleene2.KleeneFix            -- kleene_fix
import Godelnumbering.Godel
import Godelnumbering.Instances
import Godelnumbering.Transport

open Classical
open Nat.Partrec
open Godel

section KleeneContext

variable {α σ : Type}
variable [Numbering α] [Primcodable α] [Primcodable σ]

variable (hEncode : Computable (fun a : α => Numbering.encode (α := α) a))
variable (hDecode : Computable (fun n : ℕ => (Numbering.decode (α := α) n : α)))

set_option linter.dupNamespace false

--
-- kleene_recursion₂_one ▸ fixed-parameter version
--
private lemma kleene_recursion₂_one
    {f : α × σ → α}
    (hf      : Computable f)
    (p       : σ)
    (hEncode : Computable (fun a : α => Numbering.encode (α := α) a))
    (hDecode : Computable (fun n : ℕ => (Numbering.decode (α := α) n : α))) :
    ∃ e : ℕ,
      transportEval (α := α) e (Numbering.decode (α := α) e) =
      transportEval (α := α)
        (Numbering.encode (α := α) (f (Numbering.decode (α := α) e, p)))
        (Numbering.decode (α := α) e) :=
by
  -- 1 ▸ Code transformer that mirrors `numToCode`.
  let fCode : Code → Code := fun c =>
    numToCode (Numbering.encode (α := α)
                (f (Numbering.decode (α := α) (Encodable.encode c), p)))

  -- 1a ▸ computability of the numeric map `c ↦ encode (f …)`
  have hEncCode : Computable (fun c : Code => Encodable.encode c) :=
    (Computable.encode : _)
  have hDecCode : Computable (fun c : Code =>
      Numbering.decode (α := α) (Encodable.encode c)) :=
    hDecode.comp hEncCode
  have hPair : Computable (fun c : Code =>
      (Numbering.decode (α := α) (Encodable.encode c), p)) :=
    (Computable.pair hDecCode (Computable.const p))
  have hNat : Computable (fun c : Code =>
      Numbering.encode (α := α)
        (f (Numbering.decode (α := α) (Encodable.encode c), p))) :=
    hEncode.comp (hf.comp hPair)

  -- 1b ▸ `numToCode` is computable ⇒ so is `fCode`.
  have hNum : Computable numToCode := by
    simpa [numToCode] using
      (Computable.option_getD
          (Computable.decode : Computable (fun n : ℕ => Encodable.decode (α := Code) n))
          computable_const)
  have hfCode : Computable fCode := by
    simpa [fCode] using hNum.comp hNat

  -- 2 ▸ Kleene fixed point on `fCode`.
  rcases Kleene.kleene_fix hfCode with ⟨c, hc⟩
  let e : ℕ := Encodable.encode c

  -- 3 ▸ Specialise fixed-point equality at the self-input. -
  have hNatEq :
      Code.eval c
        (Numbering.encode (α := α) (Numbering.decode (α := α) e)) =
      Code.eval (fCode c)
        (Numbering.encode (α := α) (Numbering.decode (α := α) e)) := by
    simpa [e] using
      congrArg (fun g : ℕ → Part ℕ =>
        g (Numbering.encode (α := α) (Numbering.decode (α := α) e))) hc

  -- 4 ▸ Transport through (encode ∘ decode) and finish.
  refine ⟨e, ?_⟩
  simpa [transportEval, numToCode_encode, e, fCode, numToCode] using
    congrArg (Part.map (Numbering.decode (α := α))) hNatEq

-- Gödel-generic **second Kleene recursion theorem**.
theorem kleene_recursion₂
    {f : α × σ → α}
    (hf      : Computable f)
    (hEncode : Computable (fun a : α => Numbering.encode (α := α) a))
    (hDecode : Computable (fun n : ℕ => (Numbering.decode (α := α) n : α))) :
    ∀ p : σ, ∃ e : ℕ,
      transportEval (α := α) e (Numbering.decode (α := α) e) =
      transportEval (α := α)
        (Numbering.encode (α := α) (f (Numbering.decode (α := α) e, p)))
        (Numbering.decode (α := α) e) :=
by
  intro p
  exact kleene_recursion₂_one (α := α) (σ := σ)
        hf p hEncode hDecode

end KleeneContext


--  NOTES:

--    • `transportEval`, `numToCode`, and the two helper lemmas
--      can be moved to a shared utilities module if you plan to
--      reuse them elsewhere.

--    • `eval_const` is handy in other developments, so you might
--      consider contributing it (and `computable_const`) upstream
--      to mathlib.

#lint
