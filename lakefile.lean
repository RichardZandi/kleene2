import Lake
open Lake DSL

package Kleene2 where
  moreLeanArgs := #["-DautoImplicit=false"]

-- 𝗲𝘅𝗮𝗰𝘁 𝗳𝗼𝗿𝗺𝗮𝘁 (   require  + newline + git URL   )
require mathlib from
  git "https://github.com/leanprover-community/mathlib4.git" @ "v4.20.0"

require godelnumbering from
  git "https://github.com/RichardZandi/godelnumbering" @ "main"

@[default_target]
lean_lib Kleene2 where
  roots := #[`Kleene2.KleeneFix, `Kleene2.Kleene2, `Kleene2.RobustFlipper]  --
