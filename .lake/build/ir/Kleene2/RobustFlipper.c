// Lean compiler output
// Module: Kleene2.RobustFlipper
// Imports: Init Mathlib.Computability.Partrec Mathlib.Computability.Primrec
#include <lean/lean.h>
#if defined(__clang__)
#pragma clang diagnostic ignored "-Wunused-parameter"
#pragma clang diagnostic ignored "-Wunused-label"
#elif defined(__GNUC__) && !defined(__CLANG__)
#pragma GCC diagnostic ignored "-Wunused-parameter"
#pragma GCC diagnostic ignored "-Wunused-label"
#pragma GCC diagnostic ignored "-Wunused-but-set-variable"
#endif
#ifdef __cplusplus
extern "C" {
#endif
static lean_object* l_RobustFlipper_Flipper_primrec___autoParam___closed__86;
static lean_object* l_RobustFlipper_Flipper_primrec___autoParam___closed__116;
static lean_object* l_RobustFlipper_Flipper_ne__of__correct___autoParam___closed__35;
static lean_object* l_RobustFlipper_Flipper_primrec___autoParam___closed__12;
static lean_object* l_RobustFlipper_Flipper_primrec___autoParam___closed__40;
static lean_object* l_RobustFlipper_Flipper_ne__of__correct___autoParam___closed__53;
static lean_object* l_RobustFlipper_Flipper_primrec___autoParam___closed__41;
static lean_object* l_RobustFlipper_Flipper_primrec___autoParam___closed__102;
static lean_object* l_RobustFlipper_Flipper_ne__of__correct___autoParam___closed__34;
static lean_object* l_RobustFlipper_Flipper_ne__of__correct___autoParam___closed__55;
static lean_object* l_RobustFlipper_Flipper_primrec___autoParam___closed__7;
static lean_object* l_RobustFlipper_Flipper_primrec___autoParam___closed__110;
static lean_object* l_RobustFlipper_Flipper_primrec___autoParam___closed__3;
static lean_object* l_RobustFlipper_Flipper_primrec___autoParam___closed__138;
static lean_object* l_RobustFlipper_Flipper_ne__of__correct___autoParam___closed__28;
static lean_object* l_RobustFlipper_Flipper_primrec___autoParam___closed__33;
LEAN_EXPORT lean_object* l_RobustFlipper_agrees___boxed(lean_object*, lean_object*, lean_object*);
static lean_object* l_RobustFlipper_Flipper_ne__of__correct___autoParam___closed__43;
static lean_object* l_RobustFlipper_Flipper_primrec___autoParam___closed__103;
static lean_object* l_RobustFlipper_Flipper_primrec___autoParam___closed__99;
static lean_object* l_RobustFlipper_Flipper_primrec___autoParam___closed__127;
static lean_object* l_RobustFlipper_Flipper_primrec___autoParam___closed__79;
static lean_object* l_RobustFlipper_Flipper_ne__of__correct___autoParam___closed__13;
static lean_object* l_RobustFlipper_Flipper_primrec___autoParam___closed__94;
static lean_object* l_RobustFlipper_Flipper_primrec___autoParam___closed__62;
static lean_object* l_RobustFlipper_Flipper_primrec___autoParam___closed__118;
static lean_object* l_RobustFlipper_Flipper_ne__of__correct___autoParam___closed__31;
static lean_object* l_RobustFlipper_Flipper_primrec___autoParam___closed__44;
static lean_object* l_RobustFlipper_Flipper_ne__of__correct___autoParam___closed__21;
static lean_object* l_RobustFlipper_Flipper_primrec___autoParam___closed__76;
static lean_object* l_RobustFlipper_Flipper_primrec___autoParam___closed__82;
lean_object* lean_array_push(lean_object*, lean_object*);
static lean_object* l_RobustFlipper_Flipper_ne__of__correct___autoParam___closed__23;
static lean_object* l_RobustFlipper_Flipper_ne__of__correct___autoParam___closed__41;
static lean_object* l_RobustFlipper_Flipper_primrec___autoParam___closed__73;
static lean_object* l_RobustFlipper_Flipper_primrec___autoParam___closed__65;
static lean_object* l_RobustFlipper_Flipper_primrec___autoParam___closed__25;
static lean_object* l_RobustFlipper_Flipper_primrec___autoParam___closed__92;
static lean_object* l_RobustFlipper_Flipper_primrec___autoParam___closed__53;
static lean_object* l_RobustFlipper_Flipper_ne__of__correct___autoParam___closed__45;
static lean_object* l_RobustFlipper_Flipper_primrec___autoParam___closed__19;
static lean_object* l_RobustFlipper_Flipper_primrec___autoParam___closed__57;
static lean_object* l_RobustFlipper_Flipper_primrec___autoParam___closed__24;
static lean_object* l_RobustFlipper_Flipper_primrec___autoParam___closed__54;
static lean_object* l_RobustFlipper_Flipper_ne__of__correct___autoParam___closed__14;
static lean_object* l_RobustFlipper_Flipper_primrec___autoParam___closed__135;
static lean_object* l_RobustFlipper_Flipper_primrec___autoParam___closed__96;
static lean_object* l_RobustFlipper_Flipper_primrec___autoParam___closed__42;
static lean_object* l_RobustFlipper_Flipper_primrec___autoParam___closed__22;
static lean_object* l_RobustFlipper_Flipper_primrec___autoParam___closed__89;
static lean_object* l_RobustFlipper_Flipper_primrec___autoParam___closed__108;
static lean_object* l_RobustFlipper_Flipper_ne__of__correct___autoParam___closed__60;
static lean_object* l_RobustFlipper_Flipper_ne__of__correct___autoParam___closed__15;
static lean_object* l_RobustFlipper_Flipper_primrec___autoParam___closed__43;
static lean_object* l_RobustFlipper_Flipper_primrec___autoParam___closed__128;
static lean_object* l_RobustFlipper_Flipper_primrec___autoParam___closed__137;
static lean_object* l_RobustFlipper_Flipper_primrec___autoParam___closed__125;
static lean_object* l_RobustFlipper_Flipper_primrec___autoParam___closed__120;
static lean_object* l_RobustFlipper_Flipper_primrec___autoParam___closed__107;
static lean_object* l_RobustFlipper_Flipper_primrec___autoParam___closed__71;
static lean_object* l_RobustFlipper_Flipper_ne__of__correct___autoParam___closed__52;
static lean_object* l_RobustFlipper_Flipper_ne__of__correct___autoParam___closed__54;
static lean_object* l_RobustFlipper_Flipper_primrec___autoParam___closed__16;
static lean_object* l_RobustFlipper_Flipper_primrec___autoParam___closed__87;
static lean_object* l_RobustFlipper_Flipper_primrec___autoParam___closed__36;
static lean_object* l_RobustFlipper_Flipper_ne__of__correct___autoParam___closed__5;
static lean_object* l_RobustFlipper_Flipper_primrec___autoParam___closed__77;
lean_object* lean_string_utf8_byte_size(lean_object*);
static lean_object* l_RobustFlipper_Flipper_primrec___autoParam___closed__129;
static lean_object* l_RobustFlipper_Flipper_ne__of__correct___autoParam___closed__9;
static lean_object* l_RobustFlipper_Flipper_primrec___autoParam___closed__45;
static lean_object* l_RobustFlipper_Flipper_ne__of__correct___autoParam___closed__37;
static lean_object* l_RobustFlipper_Flipper_primrec___autoParam___closed__64;
static lean_object* l_RobustFlipper_Flipper_primrec___autoParam___closed__21;
static lean_object* l_RobustFlipper_Flipper_primrec___autoParam___closed__70;
static lean_object* l_RobustFlipper_Flipper_ne__of__correct___autoParam___closed__11;
static lean_object* l_RobustFlipper_Flipper_primrec___autoParam___closed__13;
static lean_object* l_RobustFlipper_Flipper_ne__of__correct___autoParam___closed__3;
static lean_object* l_RobustFlipper_Flipper_primrec___autoParam___closed__83;
static lean_object* l_RobustFlipper_Flipper_ne__of__correct___autoParam___closed__68;
static lean_object* l_RobustFlipper_Flipper_primrec___autoParam___closed__95;
static lean_object* l_RobustFlipper_Flipper_ne__of__correct___autoParam___closed__40;
static lean_object* l_RobustFlipper_Flipper_ne__of__correct___autoParam___closed__56;
LEAN_EXPORT lean_object* l_RobustFlipper_flip(lean_object*, lean_object*, lean_object*, lean_object*);
static lean_object* l_RobustFlipper_Flipper_ne__of__correct___autoParam___closed__8;
static lean_object* l_RobustFlipper_Flipper_primrec___autoParam___closed__133;
static lean_object* l_RobustFlipper_Flipper_primrec___autoParam___closed__69;
static lean_object* l_RobustFlipper_Flipper_ne__of__correct___autoParam___closed__48;
static lean_object* l_RobustFlipper_Flipper_ne__of__correct___autoParam___closed__47;
static lean_object* l_RobustFlipper_Flipper_ne__of__correct___autoParam___closed__51;
static lean_object* l_RobustFlipper_Flipper_primrec___autoParam___closed__91;
static lean_object* l_RobustFlipper_Flipper_primrec___autoParam___closed__28;
static lean_object* l_RobustFlipper_Flipper_ne__of__correct___autoParam___closed__24;
static lean_object* l_RobustFlipper_Flipper_primrec___autoParam___closed__88;
static lean_object* l_RobustFlipper_Flipper_ne__of__correct___autoParam___closed__39;
static lean_object* l_RobustFlipper_Flipper_primrec___autoParam___closed__2;
static lean_object* l_RobustFlipper_Flipper_primrec___autoParam___closed__58;
static lean_object* l_RobustFlipper_Flipper_ne__of__correct___autoParam___closed__46;
static lean_object* l_RobustFlipper_Flipper_primrec___autoParam___closed__37;
static lean_object* l_RobustFlipper_Flipper_primrec___autoParam___closed__38;
static lean_object* l_RobustFlipper_Flipper_primrec___autoParam___closed__11;
static lean_object* l_RobustFlipper_Flipper_primrec___autoParam___closed__35;
static lean_object* l_RobustFlipper_Flipper_ne__of__correct___autoParam___closed__12;
static lean_object* l_RobustFlipper_Flipper_ne__of__correct___autoParam___closed__7;
static lean_object* l_RobustFlipper_Flipper_primrec___autoParam___closed__126;
static lean_object* l_RobustFlipper_Flipper_ne__of__correct___autoParam___closed__2;
static lean_object* l_RobustFlipper_Flipper_primrec___autoParam___closed__68;
static lean_object* l_RobustFlipper_Flipper_primrec___autoParam___closed__17;
static lean_object* l_RobustFlipper_Flipper_primrec___autoParam___closed__49;
static lean_object* l_RobustFlipper_Flipper_primrec___autoParam___closed__56;
LEAN_EXPORT uint8_t l_RobustFlipper_agrees(lean_object*, lean_object*, lean_object*);
static lean_object* l_RobustFlipper_Flipper_primrec___autoParam___closed__75;
static lean_object* l_RobustFlipper_Flipper_primrec___autoParam___closed__81;
static lean_object* l_RobustFlipper_Flipper_primrec___autoParam___closed__100;
static lean_object* l_RobustFlipper_Flipper_primrec___autoParam___closed__5;
static lean_object* l_RobustFlipper_Flipper_ne__of__correct___autoParam___closed__67;
static lean_object* l_RobustFlipper_Flipper_ne__of__correct___autoParam___closed__63;
static lean_object* l_RobustFlipper_Flipper_primrec___autoParam___closed__39;
static lean_object* l_RobustFlipper_Flipper_ne__of__correct___autoParam___closed__10;
static lean_object* l_RobustFlipper_Flipper_primrec___autoParam___closed__61;
static lean_object* l_RobustFlipper_Flipper_primrec___autoParam___closed__124;
static lean_object* l_RobustFlipper_Flipper_ne__of__correct___autoParam___closed__33;
static lean_object* l_RobustFlipper_Flipper_primrec___autoParam___closed__136;
lean_object* l_Lean_Name_str___override(lean_object*, lean_object*);
static lean_object* l_RobustFlipper_Flipper_primrec___autoParam___closed__48;
static lean_object* l_RobustFlipper_Flipper_ne__of__correct___autoParam___closed__38;
static lean_object* l_RobustFlipper_Flipper_ne__of__correct___autoParam___closed__30;
static lean_object* l_RobustFlipper_Flipper_primrec___autoParam___closed__121;
static lean_object* l_RobustFlipper_Flipper_primrec___autoParam___closed__46;
static lean_object* l_RobustFlipper_Flipper_primrec___autoParam___closed__32;
static lean_object* l_RobustFlipper_Flipper_primrec___autoParam___closed__132;
static lean_object* l_RobustFlipper_Flipper_ne__of__correct___autoParam___closed__26;
static lean_object* l_RobustFlipper_Flipper_primrec___autoParam___closed__23;
LEAN_EXPORT lean_object* l_RobustFlipper_Flipper_primrec___autoParam;
static lean_object* l_RobustFlipper_Flipper_primrec___autoParam___closed__20;
static lean_object* l_RobustFlipper_Flipper_primrec___autoParam___closed__131;
static lean_object* l_RobustFlipper_Flipper_ne__of__correct___autoParam___closed__1;
static lean_object* l_RobustFlipper_Flipper_primrec___autoParam___closed__106;
static lean_object* l_RobustFlipper_Flipper_primrec___autoParam___closed__80;
static lean_object* l_RobustFlipper_Flipper_ne__of__correct___autoParam___closed__65;
static lean_object* l_RobustFlipper_Flipper_ne__of__correct___autoParam___closed__59;
static lean_object* l_RobustFlipper_Flipper_ne__of__correct___autoParam___closed__32;
static lean_object* l_RobustFlipper_Flipper_ne__of__correct___autoParam___closed__18;
static lean_object* l_RobustFlipper_Flipper_primrec___autoParam___closed__63;
static lean_object* l_RobustFlipper_Flipper_ne__of__correct___autoParam___closed__64;
static lean_object* l_RobustFlipper_Flipper_primrec___autoParam___closed__111;
static lean_object* l_RobustFlipper_Flipper_primrec___autoParam___closed__50;
static lean_object* l_RobustFlipper_Flipper_ne__of__correct___autoParam___closed__62;
static lean_object* l_RobustFlipper_Flipper_ne__of__correct___autoParam___closed__58;
static lean_object* l_RobustFlipper_Flipper_primrec___autoParam___closed__117;
static lean_object* l_RobustFlipper_Flipper_ne__of__correct___autoParam___closed__19;
static lean_object* l_RobustFlipper_Flipper_ne__of__correct___autoParam___closed__61;
static lean_object* l_RobustFlipper_Flipper_primrec___autoParam___closed__26;
static lean_object* l_RobustFlipper_Flipper_ne__of__correct___autoParam___closed__44;
static lean_object* l_RobustFlipper_Flipper_ne__of__correct___autoParam___closed__25;
static lean_object* l_RobustFlipper_Flipper_primrec___autoParam___closed__109;
static lean_object* l_RobustFlipper_Flipper_ne__of__correct___autoParam___closed__4;
static lean_object* l_RobustFlipper_Flipper_primrec___autoParam___closed__60;
static lean_object* l_RobustFlipper_Flipper_primrec___autoParam___closed__105;
static lean_object* l_RobustFlipper_Flipper_primrec___autoParam___closed__115;
static lean_object* l_RobustFlipper_Flipper_primrec___autoParam___closed__84;
static lean_object* l_RobustFlipper_Flipper_ne__of__correct___autoParam___closed__20;
uint8_t lean_nat_dec_eq(lean_object*, lean_object*);
static lean_object* l_RobustFlipper_Flipper_ne__of__correct___autoParam___closed__50;
static lean_object* l_RobustFlipper_Flipper_ne__of__correct___autoParam___closed__36;
static lean_object* l_RobustFlipper_Flipper_primrec___autoParam___closed__9;
static lean_object* l_RobustFlipper_Flipper_primrec___autoParam___closed__51;
static lean_object* l_RobustFlipper_Flipper_ne__of__correct___autoParam___closed__6;
static lean_object* l_RobustFlipper_Flipper_primrec___autoParam___closed__134;
static lean_object* l_RobustFlipper_Flipper_primrec___autoParam___closed__29;
static lean_object* l_RobustFlipper_Flipper_primrec___autoParam___closed__55;
static lean_object* l_RobustFlipper_Flipper_primrec___autoParam___closed__112;
static lean_object* l_RobustFlipper_Flipper_ne__of__correct___autoParam___closed__16;
static lean_object* l_RobustFlipper_Flipper_ne__of__correct___autoParam___closed__66;
static lean_object* l_RobustFlipper_Flipper_primrec___autoParam___closed__104;
static lean_object* l_RobustFlipper_Flipper_primrec___autoParam___closed__130;
static lean_object* l_RobustFlipper_Flipper_primrec___autoParam___closed__98;
static lean_object* l_RobustFlipper_Flipper_primrec___autoParam___closed__34;
static lean_object* l_RobustFlipper_Flipper_primrec___autoParam___closed__30;
static lean_object* l_RobustFlipper_Flipper_primrec___autoParam___closed__47;
static lean_object* l_RobustFlipper_Flipper_ne__of__correct___autoParam___closed__57;
static lean_object* l_RobustFlipper_Flipper_primrec___autoParam___closed__27;
static lean_object* l_RobustFlipper_Flipper_primrec___autoParam___closed__10;
static lean_object* l_RobustFlipper_Flipper_primrec___autoParam___closed__113;
static lean_object* l_RobustFlipper_Flipper_primrec___autoParam___closed__14;
static lean_object* l_RobustFlipper_Flipper_primrec___autoParam___closed__67;
static lean_object* l_RobustFlipper_Flipper_primrec___autoParam___closed__31;
static lean_object* l_RobustFlipper_Flipper_primrec___autoParam___closed__72;
lean_object* l_Lean_Name_mkStr4(lean_object*, lean_object*, lean_object*, lean_object*);
static lean_object* l_RobustFlipper_Flipper_primrec___autoParam___closed__122;
static lean_object* l_RobustFlipper_Flipper_primrec___autoParam___closed__123;
static lean_object* l_RobustFlipper_Flipper_primrec___autoParam___closed__1;
static lean_object* l_RobustFlipper_Flipper_primrec___autoParam___closed__119;
static lean_object* l_RobustFlipper_Flipper_primrec___autoParam___closed__90;
static lean_object* l_RobustFlipper_Flipper_ne__of__correct___autoParam___closed__27;
static lean_object* l_RobustFlipper_Flipper_primrec___autoParam___closed__15;
static lean_object* l_RobustFlipper_Flipper_primrec___autoParam___closed__101;
static lean_object* l_RobustFlipper_Flipper_primrec___autoParam___closed__59;
static lean_object* l_RobustFlipper_Flipper_primrec___autoParam___closed__74;
static lean_object* l_RobustFlipper_Flipper_primrec___autoParam___closed__8;
static lean_object* l_RobustFlipper_Flipper_primrec___autoParam___closed__52;
static lean_object* l_RobustFlipper_Flipper_primrec___autoParam___closed__66;
static lean_object* l_RobustFlipper_Flipper_primrec___autoParam___closed__85;
static lean_object* l_RobustFlipper_Flipper_ne__of__correct___autoParam___closed__17;
static lean_object* l_RobustFlipper_Flipper_ne__of__correct___autoParam___closed__22;
static lean_object* l_RobustFlipper_Flipper_primrec___autoParam___closed__114;
static lean_object* l_RobustFlipper_Flipper_ne__of__correct___autoParam___closed__42;
static lean_object* l_RobustFlipper_Flipper_primrec___autoParam___closed__78;
static lean_object* l_RobustFlipper_Flipper_primrec___autoParam___closed__4;
static lean_object* l_RobustFlipper_Flipper_primrec___autoParam___closed__18;
static lean_object* l_RobustFlipper_Flipper_ne__of__correct___autoParam___closed__49;
lean_object* lean_mk_empty_array_with_capacity(lean_object*);
LEAN_EXPORT lean_object* l_RobustFlipper_Flipper_ne__of__correct___autoParam;
static lean_object* l_RobustFlipper_Flipper_primrec___autoParam___closed__6;
static lean_object* l_RobustFlipper_Flipper_primrec___autoParam___closed__93;
static lean_object* l_RobustFlipper_Flipper_ne__of__correct___autoParam___closed__29;
static lean_object* l_RobustFlipper_Flipper_primrec___autoParam___closed__97;
LEAN_EXPORT uint8_t l_RobustFlipper_agrees(lean_object* x_1, lean_object* x_2, lean_object* x_3) {
_start:
{
lean_object* x_4; lean_object* x_5; uint8_t x_6; 
lean_inc(x_3);
x_4 = lean_apply_1(x_2, x_3);
lean_inc(x_4);
x_5 = lean_apply_2(x_1, x_3, x_4);
x_6 = lean_nat_dec_eq(x_5, x_4);
lean_dec(x_4);
lean_dec(x_5);
return x_6;
}
}
LEAN_EXPORT lean_object* l_RobustFlipper_agrees___boxed(lean_object* x_1, lean_object* x_2, lean_object* x_3) {
_start:
{
uint8_t x_4; lean_object* x_5; 
x_4 = l_RobustFlipper_agrees(x_1, x_2, x_3);
x_5 = lean_box(x_4);
return x_5;
}
}
LEAN_EXPORT lean_object* l_RobustFlipper_flip(lean_object* x_1, lean_object* x_2, lean_object* x_3, lean_object* x_4) {
_start:
{
uint8_t x_5; 
lean_inc(x_4);
lean_inc(x_2);
lean_inc(x_1);
x_5 = l_RobustFlipper_agrees(x_1, x_2, x_4);
if (x_5 == 0)
{
lean_object* x_6; lean_object* x_7; 
lean_dec(x_3);
lean_inc(x_4);
x_6 = lean_apply_1(x_2, x_4);
x_7 = lean_apply_2(x_1, x_4, x_6);
return x_7;
}
else
{
lean_object* x_8; lean_object* x_9; 
lean_dec(x_1);
x_8 = lean_apply_1(x_2, x_4);
x_9 = lean_apply_1(x_3, x_8);
return x_9;
}
}
}
static lean_object* _init_l_RobustFlipper_Flipper_primrec___autoParam___closed__1() {
_start:
{
lean_object* x_1; 
x_1 = lean_mk_string_unchecked("Lean", 4, 4);
return x_1;
}
}
static lean_object* _init_l_RobustFlipper_Flipper_primrec___autoParam___closed__2() {
_start:
{
lean_object* x_1; 
x_1 = lean_mk_string_unchecked("Parser", 6, 6);
return x_1;
}
}
static lean_object* _init_l_RobustFlipper_Flipper_primrec___autoParam___closed__3() {
_start:
{
lean_object* x_1; 
x_1 = lean_mk_string_unchecked("Tactic", 6, 6);
return x_1;
}
}
static lean_object* _init_l_RobustFlipper_Flipper_primrec___autoParam___closed__4() {
_start:
{
lean_object* x_1; 
x_1 = lean_mk_string_unchecked("tacticSeq", 9, 9);
return x_1;
}
}
static lean_object* _init_l_RobustFlipper_Flipper_primrec___autoParam___closed__5() {
_start:
{
lean_object* x_1; lean_object* x_2; lean_object* x_3; lean_object* x_4; lean_object* x_5; 
x_1 = l_RobustFlipper_Flipper_primrec___autoParam___closed__1;
x_2 = l_RobustFlipper_Flipper_primrec___autoParam___closed__2;
x_3 = l_RobustFlipper_Flipper_primrec___autoParam___closed__3;
x_4 = l_RobustFlipper_Flipper_primrec___autoParam___closed__4;
x_5 = l_Lean_Name_mkStr4(x_1, x_2, x_3, x_4);
return x_5;
}
}
static lean_object* _init_l_RobustFlipper_Flipper_primrec___autoParam___closed__6() {
_start:
{
lean_object* x_1; lean_object* x_2; 
x_1 = lean_unsigned_to_nat(0u);
x_2 = lean_mk_empty_array_with_capacity(x_1);
return x_2;
}
}
static lean_object* _init_l_RobustFlipper_Flipper_primrec___autoParam___closed__7() {
_start:
{
lean_object* x_1; 
x_1 = lean_mk_string_unchecked("tacticSeq1Indented", 18, 18);
return x_1;
}
}
static lean_object* _init_l_RobustFlipper_Flipper_primrec___autoParam___closed__8() {
_start:
{
lean_object* x_1; lean_object* x_2; lean_object* x_3; lean_object* x_4; lean_object* x_5; 
x_1 = l_RobustFlipper_Flipper_primrec___autoParam___closed__1;
x_2 = l_RobustFlipper_Flipper_primrec___autoParam___closed__2;
x_3 = l_RobustFlipper_Flipper_primrec___autoParam___closed__3;
x_4 = l_RobustFlipper_Flipper_primrec___autoParam___closed__7;
x_5 = l_Lean_Name_mkStr4(x_1, x_2, x_3, x_4);
return x_5;
}
}
static lean_object* _init_l_RobustFlipper_Flipper_primrec___autoParam___closed__9() {
_start:
{
lean_object* x_1; 
x_1 = lean_mk_string_unchecked("null", 4, 4);
return x_1;
}
}
static lean_object* _init_l_RobustFlipper_Flipper_primrec___autoParam___closed__10() {
_start:
{
lean_object* x_1; lean_object* x_2; lean_object* x_3; 
x_1 = lean_box(0);
x_2 = l_RobustFlipper_Flipper_primrec___autoParam___closed__9;
x_3 = l_Lean_Name_str___override(x_1, x_2);
return x_3;
}
}
static lean_object* _init_l_RobustFlipper_Flipper_primrec___autoParam___closed__11() {
_start:
{
lean_object* x_1; 
x_1 = lean_mk_string_unchecked("simpa", 5, 5);
return x_1;
}
}
static lean_object* _init_l_RobustFlipper_Flipper_primrec___autoParam___closed__12() {
_start:
{
lean_object* x_1; lean_object* x_2; lean_object* x_3; lean_object* x_4; lean_object* x_5; 
x_1 = l_RobustFlipper_Flipper_primrec___autoParam___closed__1;
x_2 = l_RobustFlipper_Flipper_primrec___autoParam___closed__2;
x_3 = l_RobustFlipper_Flipper_primrec___autoParam___closed__3;
x_4 = l_RobustFlipper_Flipper_primrec___autoParam___closed__11;
x_5 = l_Lean_Name_mkStr4(x_1, x_2, x_3, x_4);
return x_5;
}
}
static lean_object* _init_l_RobustFlipper_Flipper_primrec___autoParam___closed__13() {
_start:
{
lean_object* x_1; lean_object* x_2; lean_object* x_3; 
x_1 = lean_box(2);
x_2 = l_RobustFlipper_Flipper_primrec___autoParam___closed__11;
x_3 = lean_alloc_ctor(2, 2, 0);
lean_ctor_set(x_3, 0, x_1);
lean_ctor_set(x_3, 1, x_2);
return x_3;
}
}
static lean_object* _init_l_RobustFlipper_Flipper_primrec___autoParam___closed__14() {
_start:
{
lean_object* x_1; lean_object* x_2; lean_object* x_3; 
x_1 = l_RobustFlipper_Flipper_primrec___autoParam___closed__6;
x_2 = l_RobustFlipper_Flipper_primrec___autoParam___closed__13;
x_3 = lean_array_push(x_1, x_2);
return x_3;
}
}
static lean_object* _init_l_RobustFlipper_Flipper_primrec___autoParam___closed__15() {
_start:
{
lean_object* x_1; lean_object* x_2; lean_object* x_3; lean_object* x_4; 
x_1 = lean_box(2);
x_2 = l_RobustFlipper_Flipper_primrec___autoParam___closed__10;
x_3 = l_RobustFlipper_Flipper_primrec___autoParam___closed__6;
x_4 = lean_alloc_ctor(1, 3, 0);
lean_ctor_set(x_4, 0, x_1);
lean_ctor_set(x_4, 1, x_2);
lean_ctor_set(x_4, 2, x_3);
return x_4;
}
}
static lean_object* _init_l_RobustFlipper_Flipper_primrec___autoParam___closed__16() {
_start:
{
lean_object* x_1; lean_object* x_2; lean_object* x_3; 
x_1 = l_RobustFlipper_Flipper_primrec___autoParam___closed__14;
x_2 = l_RobustFlipper_Flipper_primrec___autoParam___closed__15;
x_3 = lean_array_push(x_1, x_2);
return x_3;
}
}
static lean_object* _init_l_RobustFlipper_Flipper_primrec___autoParam___closed__17() {
_start:
{
lean_object* x_1; lean_object* x_2; lean_object* x_3; 
x_1 = l_RobustFlipper_Flipper_primrec___autoParam___closed__16;
x_2 = l_RobustFlipper_Flipper_primrec___autoParam___closed__15;
x_3 = lean_array_push(x_1, x_2);
return x_3;
}
}
static lean_object* _init_l_RobustFlipper_Flipper_primrec___autoParam___closed__18() {
_start:
{
lean_object* x_1; 
x_1 = lean_mk_string_unchecked("simpaArgsRest", 13, 13);
return x_1;
}
}
static lean_object* _init_l_RobustFlipper_Flipper_primrec___autoParam___closed__19() {
_start:
{
lean_object* x_1; lean_object* x_2; lean_object* x_3; lean_object* x_4; lean_object* x_5; 
x_1 = l_RobustFlipper_Flipper_primrec___autoParam___closed__1;
x_2 = l_RobustFlipper_Flipper_primrec___autoParam___closed__2;
x_3 = l_RobustFlipper_Flipper_primrec___autoParam___closed__3;
x_4 = l_RobustFlipper_Flipper_primrec___autoParam___closed__18;
x_5 = l_Lean_Name_mkStr4(x_1, x_2, x_3, x_4);
return x_5;
}
}
static lean_object* _init_l_RobustFlipper_Flipper_primrec___autoParam___closed__20() {
_start:
{
lean_object* x_1; 
x_1 = lean_mk_string_unchecked("optConfig", 9, 9);
return x_1;
}
}
static lean_object* _init_l_RobustFlipper_Flipper_primrec___autoParam___closed__21() {
_start:
{
lean_object* x_1; lean_object* x_2; lean_object* x_3; lean_object* x_4; lean_object* x_5; 
x_1 = l_RobustFlipper_Flipper_primrec___autoParam___closed__1;
x_2 = l_RobustFlipper_Flipper_primrec___autoParam___closed__2;
x_3 = l_RobustFlipper_Flipper_primrec___autoParam___closed__3;
x_4 = l_RobustFlipper_Flipper_primrec___autoParam___closed__20;
x_5 = l_Lean_Name_mkStr4(x_1, x_2, x_3, x_4);
return x_5;
}
}
static lean_object* _init_l_RobustFlipper_Flipper_primrec___autoParam___closed__22() {
_start:
{
lean_object* x_1; lean_object* x_2; lean_object* x_3; 
x_1 = l_RobustFlipper_Flipper_primrec___autoParam___closed__6;
x_2 = l_RobustFlipper_Flipper_primrec___autoParam___closed__15;
x_3 = lean_array_push(x_1, x_2);
return x_3;
}
}
static lean_object* _init_l_RobustFlipper_Flipper_primrec___autoParam___closed__23() {
_start:
{
lean_object* x_1; lean_object* x_2; lean_object* x_3; lean_object* x_4; 
x_1 = lean_box(2);
x_2 = l_RobustFlipper_Flipper_primrec___autoParam___closed__21;
x_3 = l_RobustFlipper_Flipper_primrec___autoParam___closed__22;
x_4 = lean_alloc_ctor(1, 3, 0);
lean_ctor_set(x_4, 0, x_1);
lean_ctor_set(x_4, 1, x_2);
lean_ctor_set(x_4, 2, x_3);
return x_4;
}
}
static lean_object* _init_l_RobustFlipper_Flipper_primrec___autoParam___closed__24() {
_start:
{
lean_object* x_1; lean_object* x_2; lean_object* x_3; 
x_1 = l_RobustFlipper_Flipper_primrec___autoParam___closed__6;
x_2 = l_RobustFlipper_Flipper_primrec___autoParam___closed__23;
x_3 = lean_array_push(x_1, x_2);
return x_3;
}
}
static lean_object* _init_l_RobustFlipper_Flipper_primrec___autoParam___closed__25() {
_start:
{
lean_object* x_1; lean_object* x_2; lean_object* x_3; 
x_1 = l_RobustFlipper_Flipper_primrec___autoParam___closed__24;
x_2 = l_RobustFlipper_Flipper_primrec___autoParam___closed__15;
x_3 = lean_array_push(x_1, x_2);
return x_3;
}
}
static lean_object* _init_l_RobustFlipper_Flipper_primrec___autoParam___closed__26() {
_start:
{
lean_object* x_1; lean_object* x_2; lean_object* x_3; 
x_1 = l_RobustFlipper_Flipper_primrec___autoParam___closed__25;
x_2 = l_RobustFlipper_Flipper_primrec___autoParam___closed__15;
x_3 = lean_array_push(x_1, x_2);
return x_3;
}
}
static lean_object* _init_l_RobustFlipper_Flipper_primrec___autoParam___closed__27() {
_start:
{
lean_object* x_1; 
x_1 = lean_mk_string_unchecked("simpArgs", 8, 8);
return x_1;
}
}
static lean_object* _init_l_RobustFlipper_Flipper_primrec___autoParam___closed__28() {
_start:
{
lean_object* x_1; lean_object* x_2; lean_object* x_3; lean_object* x_4; lean_object* x_5; 
x_1 = l_RobustFlipper_Flipper_primrec___autoParam___closed__1;
x_2 = l_RobustFlipper_Flipper_primrec___autoParam___closed__2;
x_3 = l_RobustFlipper_Flipper_primrec___autoParam___closed__3;
x_4 = l_RobustFlipper_Flipper_primrec___autoParam___closed__27;
x_5 = l_Lean_Name_mkStr4(x_1, x_2, x_3, x_4);
return x_5;
}
}
static lean_object* _init_l_RobustFlipper_Flipper_primrec___autoParam___closed__29() {
_start:
{
lean_object* x_1; 
x_1 = lean_mk_string_unchecked("[", 1, 1);
return x_1;
}
}
static lean_object* _init_l_RobustFlipper_Flipper_primrec___autoParam___closed__30() {
_start:
{
lean_object* x_1; lean_object* x_2; lean_object* x_3; 
x_1 = lean_box(2);
x_2 = l_RobustFlipper_Flipper_primrec___autoParam___closed__29;
x_3 = lean_alloc_ctor(2, 2, 0);
lean_ctor_set(x_3, 0, x_1);
lean_ctor_set(x_3, 1, x_2);
return x_3;
}
}
static lean_object* _init_l_RobustFlipper_Flipper_primrec___autoParam___closed__31() {
_start:
{
lean_object* x_1; lean_object* x_2; lean_object* x_3; 
x_1 = l_RobustFlipper_Flipper_primrec___autoParam___closed__6;
x_2 = l_RobustFlipper_Flipper_primrec___autoParam___closed__30;
x_3 = lean_array_push(x_1, x_2);
return x_3;
}
}
static lean_object* _init_l_RobustFlipper_Flipper_primrec___autoParam___closed__32() {
_start:
{
lean_object* x_1; 
x_1 = lean_mk_string_unchecked("simpLemma", 9, 9);
return x_1;
}
}
static lean_object* _init_l_RobustFlipper_Flipper_primrec___autoParam___closed__33() {
_start:
{
lean_object* x_1; lean_object* x_2; lean_object* x_3; lean_object* x_4; lean_object* x_5; 
x_1 = l_RobustFlipper_Flipper_primrec___autoParam___closed__1;
x_2 = l_RobustFlipper_Flipper_primrec___autoParam___closed__2;
x_3 = l_RobustFlipper_Flipper_primrec___autoParam___closed__3;
x_4 = l_RobustFlipper_Flipper_primrec___autoParam___closed__32;
x_5 = l_Lean_Name_mkStr4(x_1, x_2, x_3, x_4);
return x_5;
}
}
static lean_object* _init_l_RobustFlipper_Flipper_primrec___autoParam___closed__34() {
_start:
{
lean_object* x_1; lean_object* x_2; lean_object* x_3; 
x_1 = l_RobustFlipper_Flipper_primrec___autoParam___closed__22;
x_2 = l_RobustFlipper_Flipper_primrec___autoParam___closed__15;
x_3 = lean_array_push(x_1, x_2);
return x_3;
}
}
static lean_object* _init_l_RobustFlipper_Flipper_primrec___autoParam___closed__35() {
_start:
{
lean_object* x_1; 
x_1 = lean_mk_string_unchecked("ψ", 2, 1);
return x_1;
}
}
static lean_object* _init_l_RobustFlipper_Flipper_primrec___autoParam___closed__36() {
_start:
{
lean_object* x_1; lean_object* x_2; 
x_1 = l_RobustFlipper_Flipper_primrec___autoParam___closed__35;
x_2 = lean_string_utf8_byte_size(x_1);
return x_2;
}
}
static lean_object* _init_l_RobustFlipper_Flipper_primrec___autoParam___closed__37() {
_start:
{
lean_object* x_1; lean_object* x_2; lean_object* x_3; lean_object* x_4; 
x_1 = l_RobustFlipper_Flipper_primrec___autoParam___closed__35;
x_2 = lean_unsigned_to_nat(0u);
x_3 = l_RobustFlipper_Flipper_primrec___autoParam___closed__36;
x_4 = lean_alloc_ctor(0, 3, 0);
lean_ctor_set(x_4, 0, x_1);
lean_ctor_set(x_4, 1, x_2);
lean_ctor_set(x_4, 2, x_3);
return x_4;
}
}
static lean_object* _init_l_RobustFlipper_Flipper_primrec___autoParam___closed__38() {
_start:
{
lean_object* x_1; lean_object* x_2; lean_object* x_3; 
x_1 = lean_box(0);
x_2 = l_RobustFlipper_Flipper_primrec___autoParam___closed__35;
x_3 = l_Lean_Name_str___override(x_1, x_2);
return x_3;
}
}
static lean_object* _init_l_RobustFlipper_Flipper_primrec___autoParam___closed__39() {
_start:
{
lean_object* x_1; lean_object* x_2; lean_object* x_3; lean_object* x_4; lean_object* x_5; 
x_1 = lean_box(0);
x_2 = lean_box(2);
x_3 = l_RobustFlipper_Flipper_primrec___autoParam___closed__37;
x_4 = l_RobustFlipper_Flipper_primrec___autoParam___closed__38;
x_5 = lean_alloc_ctor(3, 4, 0);
lean_ctor_set(x_5, 0, x_2);
lean_ctor_set(x_5, 1, x_3);
lean_ctor_set(x_5, 2, x_4);
lean_ctor_set(x_5, 3, x_1);
return x_5;
}
}
static lean_object* _init_l_RobustFlipper_Flipper_primrec___autoParam___closed__40() {
_start:
{
lean_object* x_1; lean_object* x_2; lean_object* x_3; 
x_1 = l_RobustFlipper_Flipper_primrec___autoParam___closed__34;
x_2 = l_RobustFlipper_Flipper_primrec___autoParam___closed__39;
x_3 = lean_array_push(x_1, x_2);
return x_3;
}
}
static lean_object* _init_l_RobustFlipper_Flipper_primrec___autoParam___closed__41() {
_start:
{
lean_object* x_1; lean_object* x_2; lean_object* x_3; lean_object* x_4; 
x_1 = lean_box(2);
x_2 = l_RobustFlipper_Flipper_primrec___autoParam___closed__33;
x_3 = l_RobustFlipper_Flipper_primrec___autoParam___closed__40;
x_4 = lean_alloc_ctor(1, 3, 0);
lean_ctor_set(x_4, 0, x_1);
lean_ctor_set(x_4, 1, x_2);
lean_ctor_set(x_4, 2, x_3);
return x_4;
}
}
static lean_object* _init_l_RobustFlipper_Flipper_primrec___autoParam___closed__42() {
_start:
{
lean_object* x_1; lean_object* x_2; lean_object* x_3; 
x_1 = l_RobustFlipper_Flipper_primrec___autoParam___closed__6;
x_2 = l_RobustFlipper_Flipper_primrec___autoParam___closed__41;
x_3 = lean_array_push(x_1, x_2);
return x_3;
}
}
static lean_object* _init_l_RobustFlipper_Flipper_primrec___autoParam___closed__43() {
_start:
{
lean_object* x_1; lean_object* x_2; lean_object* x_3; lean_object* x_4; 
x_1 = lean_box(2);
x_2 = l_RobustFlipper_Flipper_primrec___autoParam___closed__10;
x_3 = l_RobustFlipper_Flipper_primrec___autoParam___closed__42;
x_4 = lean_alloc_ctor(1, 3, 0);
lean_ctor_set(x_4, 0, x_1);
lean_ctor_set(x_4, 1, x_2);
lean_ctor_set(x_4, 2, x_3);
return x_4;
}
}
static lean_object* _init_l_RobustFlipper_Flipper_primrec___autoParam___closed__44() {
_start:
{
lean_object* x_1; lean_object* x_2; lean_object* x_3; 
x_1 = l_RobustFlipper_Flipper_primrec___autoParam___closed__31;
x_2 = l_RobustFlipper_Flipper_primrec___autoParam___closed__43;
x_3 = lean_array_push(x_1, x_2);
return x_3;
}
}
static lean_object* _init_l_RobustFlipper_Flipper_primrec___autoParam___closed__45() {
_start:
{
lean_object* x_1; 
x_1 = lean_mk_string_unchecked("]", 1, 1);
return x_1;
}
}
static lean_object* _init_l_RobustFlipper_Flipper_primrec___autoParam___closed__46() {
_start:
{
lean_object* x_1; lean_object* x_2; lean_object* x_3; 
x_1 = lean_box(2);
x_2 = l_RobustFlipper_Flipper_primrec___autoParam___closed__45;
x_3 = lean_alloc_ctor(2, 2, 0);
lean_ctor_set(x_3, 0, x_1);
lean_ctor_set(x_3, 1, x_2);
return x_3;
}
}
static lean_object* _init_l_RobustFlipper_Flipper_primrec___autoParam___closed__47() {
_start:
{
lean_object* x_1; lean_object* x_2; lean_object* x_3; 
x_1 = l_RobustFlipper_Flipper_primrec___autoParam___closed__44;
x_2 = l_RobustFlipper_Flipper_primrec___autoParam___closed__46;
x_3 = lean_array_push(x_1, x_2);
return x_3;
}
}
static lean_object* _init_l_RobustFlipper_Flipper_primrec___autoParam___closed__48() {
_start:
{
lean_object* x_1; lean_object* x_2; lean_object* x_3; lean_object* x_4; 
x_1 = lean_box(2);
x_2 = l_RobustFlipper_Flipper_primrec___autoParam___closed__28;
x_3 = l_RobustFlipper_Flipper_primrec___autoParam___closed__47;
x_4 = lean_alloc_ctor(1, 3, 0);
lean_ctor_set(x_4, 0, x_1);
lean_ctor_set(x_4, 1, x_2);
lean_ctor_set(x_4, 2, x_3);
return x_4;
}
}
static lean_object* _init_l_RobustFlipper_Flipper_primrec___autoParam___closed__49() {
_start:
{
lean_object* x_1; lean_object* x_2; lean_object* x_3; 
x_1 = l_RobustFlipper_Flipper_primrec___autoParam___closed__6;
x_2 = l_RobustFlipper_Flipper_primrec___autoParam___closed__48;
x_3 = lean_array_push(x_1, x_2);
return x_3;
}
}
static lean_object* _init_l_RobustFlipper_Flipper_primrec___autoParam___closed__50() {
_start:
{
lean_object* x_1; lean_object* x_2; lean_object* x_3; lean_object* x_4; 
x_1 = lean_box(2);
x_2 = l_RobustFlipper_Flipper_primrec___autoParam___closed__10;
x_3 = l_RobustFlipper_Flipper_primrec___autoParam___closed__49;
x_4 = lean_alloc_ctor(1, 3, 0);
lean_ctor_set(x_4, 0, x_1);
lean_ctor_set(x_4, 1, x_2);
lean_ctor_set(x_4, 2, x_3);
return x_4;
}
}
static lean_object* _init_l_RobustFlipper_Flipper_primrec___autoParam___closed__51() {
_start:
{
lean_object* x_1; lean_object* x_2; lean_object* x_3; 
x_1 = l_RobustFlipper_Flipper_primrec___autoParam___closed__26;
x_2 = l_RobustFlipper_Flipper_primrec___autoParam___closed__50;
x_3 = lean_array_push(x_1, x_2);
return x_3;
}
}
static lean_object* _init_l_RobustFlipper_Flipper_primrec___autoParam___closed__52() {
_start:
{
lean_object* x_1; 
x_1 = lean_mk_string_unchecked("using", 5, 5);
return x_1;
}
}
static lean_object* _init_l_RobustFlipper_Flipper_primrec___autoParam___closed__53() {
_start:
{
lean_object* x_1; lean_object* x_2; lean_object* x_3; 
x_1 = lean_box(2);
x_2 = l_RobustFlipper_Flipper_primrec___autoParam___closed__52;
x_3 = lean_alloc_ctor(2, 2, 0);
lean_ctor_set(x_3, 0, x_1);
lean_ctor_set(x_3, 1, x_2);
return x_3;
}
}
static lean_object* _init_l_RobustFlipper_Flipper_primrec___autoParam___closed__54() {
_start:
{
lean_object* x_1; lean_object* x_2; lean_object* x_3; 
x_1 = l_RobustFlipper_Flipper_primrec___autoParam___closed__6;
x_2 = l_RobustFlipper_Flipper_primrec___autoParam___closed__53;
x_3 = lean_array_push(x_1, x_2);
return x_3;
}
}
static lean_object* _init_l_RobustFlipper_Flipper_primrec___autoParam___closed__55() {
_start:
{
lean_object* x_1; 
x_1 = lean_mk_string_unchecked("Term", 4, 4);
return x_1;
}
}
static lean_object* _init_l_RobustFlipper_Flipper_primrec___autoParam___closed__56() {
_start:
{
lean_object* x_1; 
x_1 = lean_mk_string_unchecked("app", 3, 3);
return x_1;
}
}
static lean_object* _init_l_RobustFlipper_Flipper_primrec___autoParam___closed__57() {
_start:
{
lean_object* x_1; lean_object* x_2; lean_object* x_3; lean_object* x_4; lean_object* x_5; 
x_1 = l_RobustFlipper_Flipper_primrec___autoParam___closed__1;
x_2 = l_RobustFlipper_Flipper_primrec___autoParam___closed__2;
x_3 = l_RobustFlipper_Flipper_primrec___autoParam___closed__55;
x_4 = l_RobustFlipper_Flipper_primrec___autoParam___closed__56;
x_5 = l_Lean_Name_mkStr4(x_1, x_2, x_3, x_4);
return x_5;
}
}
static lean_object* _init_l_RobustFlipper_Flipper_primrec___autoParam___closed__58() {
_start:
{
lean_object* x_1; 
x_1 = lean_mk_string_unchecked("flip_primrec", 12, 12);
return x_1;
}
}
static lean_object* _init_l_RobustFlipper_Flipper_primrec___autoParam___closed__59() {
_start:
{
lean_object* x_1; lean_object* x_2; 
x_1 = l_RobustFlipper_Flipper_primrec___autoParam___closed__58;
x_2 = lean_string_utf8_byte_size(x_1);
return x_2;
}
}
static lean_object* _init_l_RobustFlipper_Flipper_primrec___autoParam___closed__60() {
_start:
{
lean_object* x_1; lean_object* x_2; lean_object* x_3; lean_object* x_4; 
x_1 = l_RobustFlipper_Flipper_primrec___autoParam___closed__58;
x_2 = lean_unsigned_to_nat(0u);
x_3 = l_RobustFlipper_Flipper_primrec___autoParam___closed__59;
x_4 = lean_alloc_ctor(0, 3, 0);
lean_ctor_set(x_4, 0, x_1);
lean_ctor_set(x_4, 1, x_2);
lean_ctor_set(x_4, 2, x_3);
return x_4;
}
}
static lean_object* _init_l_RobustFlipper_Flipper_primrec___autoParam___closed__61() {
_start:
{
lean_object* x_1; lean_object* x_2; lean_object* x_3; 
x_1 = lean_box(0);
x_2 = l_RobustFlipper_Flipper_primrec___autoParam___closed__58;
x_3 = l_Lean_Name_str___override(x_1, x_2);
return x_3;
}
}
static lean_object* _init_l_RobustFlipper_Flipper_primrec___autoParam___closed__62() {
_start:
{
lean_object* x_1; lean_object* x_2; lean_object* x_3; lean_object* x_4; lean_object* x_5; 
x_1 = lean_box(0);
x_2 = lean_box(2);
x_3 = l_RobustFlipper_Flipper_primrec___autoParam___closed__60;
x_4 = l_RobustFlipper_Flipper_primrec___autoParam___closed__61;
x_5 = lean_alloc_ctor(3, 4, 0);
lean_ctor_set(x_5, 0, x_2);
lean_ctor_set(x_5, 1, x_3);
lean_ctor_set(x_5, 2, x_4);
lean_ctor_set(x_5, 3, x_1);
return x_5;
}
}
static lean_object* _init_l_RobustFlipper_Flipper_primrec___autoParam___closed__63() {
_start:
{
lean_object* x_1; lean_object* x_2; lean_object* x_3; 
x_1 = l_RobustFlipper_Flipper_primrec___autoParam___closed__6;
x_2 = l_RobustFlipper_Flipper_primrec___autoParam___closed__62;
x_3 = lean_array_push(x_1, x_2);
return x_3;
}
}
static lean_object* _init_l_RobustFlipper_Flipper_primrec___autoParam___closed__64() {
_start:
{
lean_object* x_1; 
x_1 = lean_mk_string_unchecked("namedArgument", 13, 13);
return x_1;
}
}
static lean_object* _init_l_RobustFlipper_Flipper_primrec___autoParam___closed__65() {
_start:
{
lean_object* x_1; lean_object* x_2; lean_object* x_3; lean_object* x_4; lean_object* x_5; 
x_1 = l_RobustFlipper_Flipper_primrec___autoParam___closed__1;
x_2 = l_RobustFlipper_Flipper_primrec___autoParam___closed__2;
x_3 = l_RobustFlipper_Flipper_primrec___autoParam___closed__55;
x_4 = l_RobustFlipper_Flipper_primrec___autoParam___closed__64;
x_5 = l_Lean_Name_mkStr4(x_1, x_2, x_3, x_4);
return x_5;
}
}
static lean_object* _init_l_RobustFlipper_Flipper_primrec___autoParam___closed__66() {
_start:
{
lean_object* x_1; 
x_1 = lean_mk_string_unchecked("(", 1, 1);
return x_1;
}
}
static lean_object* _init_l_RobustFlipper_Flipper_primrec___autoParam___closed__67() {
_start:
{
lean_object* x_1; lean_object* x_2; lean_object* x_3; 
x_1 = lean_box(2);
x_2 = l_RobustFlipper_Flipper_primrec___autoParam___closed__66;
x_3 = lean_alloc_ctor(2, 2, 0);
lean_ctor_set(x_3, 0, x_1);
lean_ctor_set(x_3, 1, x_2);
return x_3;
}
}
static lean_object* _init_l_RobustFlipper_Flipper_primrec___autoParam___closed__68() {
_start:
{
lean_object* x_1; lean_object* x_2; lean_object* x_3; 
x_1 = l_RobustFlipper_Flipper_primrec___autoParam___closed__6;
x_2 = l_RobustFlipper_Flipper_primrec___autoParam___closed__67;
x_3 = lean_array_push(x_1, x_2);
return x_3;
}
}
static lean_object* _init_l_RobustFlipper_Flipper_primrec___autoParam___closed__69() {
_start:
{
lean_object* x_1; 
x_1 = lean_mk_string_unchecked("F", 1, 1);
return x_1;
}
}
static lean_object* _init_l_RobustFlipper_Flipper_primrec___autoParam___closed__70() {
_start:
{
lean_object* x_1; lean_object* x_2; 
x_1 = l_RobustFlipper_Flipper_primrec___autoParam___closed__69;
x_2 = lean_string_utf8_byte_size(x_1);
return x_2;
}
}
static lean_object* _init_l_RobustFlipper_Flipper_primrec___autoParam___closed__71() {
_start:
{
lean_object* x_1; lean_object* x_2; lean_object* x_3; lean_object* x_4; 
x_1 = l_RobustFlipper_Flipper_primrec___autoParam___closed__69;
x_2 = lean_unsigned_to_nat(0u);
x_3 = l_RobustFlipper_Flipper_primrec___autoParam___closed__70;
x_4 = lean_alloc_ctor(0, 3, 0);
lean_ctor_set(x_4, 0, x_1);
lean_ctor_set(x_4, 1, x_2);
lean_ctor_set(x_4, 2, x_3);
return x_4;
}
}
static lean_object* _init_l_RobustFlipper_Flipper_primrec___autoParam___closed__72() {
_start:
{
lean_object* x_1; lean_object* x_2; lean_object* x_3; 
x_1 = lean_box(0);
x_2 = l_RobustFlipper_Flipper_primrec___autoParam___closed__69;
x_3 = l_Lean_Name_str___override(x_1, x_2);
return x_3;
}
}
static lean_object* _init_l_RobustFlipper_Flipper_primrec___autoParam___closed__73() {
_start:
{
lean_object* x_1; lean_object* x_2; lean_object* x_3; lean_object* x_4; lean_object* x_5; 
x_1 = lean_box(0);
x_2 = lean_box(2);
x_3 = l_RobustFlipper_Flipper_primrec___autoParam___closed__71;
x_4 = l_RobustFlipper_Flipper_primrec___autoParam___closed__72;
x_5 = lean_alloc_ctor(3, 4, 0);
lean_ctor_set(x_5, 0, x_2);
lean_ctor_set(x_5, 1, x_3);
lean_ctor_set(x_5, 2, x_4);
lean_ctor_set(x_5, 3, x_1);
return x_5;
}
}
static lean_object* _init_l_RobustFlipper_Flipper_primrec___autoParam___closed__74() {
_start:
{
lean_object* x_1; lean_object* x_2; lean_object* x_3; 
x_1 = l_RobustFlipper_Flipper_primrec___autoParam___closed__68;
x_2 = l_RobustFlipper_Flipper_primrec___autoParam___closed__73;
x_3 = lean_array_push(x_1, x_2);
return x_3;
}
}
static lean_object* _init_l_RobustFlipper_Flipper_primrec___autoParam___closed__75() {
_start:
{
lean_object* x_1; 
x_1 = lean_mk_string_unchecked(":=", 2, 2);
return x_1;
}
}
static lean_object* _init_l_RobustFlipper_Flipper_primrec___autoParam___closed__76() {
_start:
{
lean_object* x_1; lean_object* x_2; lean_object* x_3; 
x_1 = lean_box(2);
x_2 = l_RobustFlipper_Flipper_primrec___autoParam___closed__75;
x_3 = lean_alloc_ctor(2, 2, 0);
lean_ctor_set(x_3, 0, x_1);
lean_ctor_set(x_3, 1, x_2);
return x_3;
}
}
static lean_object* _init_l_RobustFlipper_Flipper_primrec___autoParam___closed__77() {
_start:
{
lean_object* x_1; lean_object* x_2; lean_object* x_3; 
x_1 = l_RobustFlipper_Flipper_primrec___autoParam___closed__74;
x_2 = l_RobustFlipper_Flipper_primrec___autoParam___closed__76;
x_3 = lean_array_push(x_1, x_2);
return x_3;
}
}
static lean_object* _init_l_RobustFlipper_Flipper_primrec___autoParam___closed__78() {
_start:
{
lean_object* x_1; lean_object* x_2; lean_object* x_3; 
x_1 = l_RobustFlipper_Flipper_primrec___autoParam___closed__77;
x_2 = l_RobustFlipper_Flipper_primrec___autoParam___closed__73;
x_3 = lean_array_push(x_1, x_2);
return x_3;
}
}
static lean_object* _init_l_RobustFlipper_Flipper_primrec___autoParam___closed__79() {
_start:
{
lean_object* x_1; 
x_1 = lean_mk_string_unchecked(")", 1, 1);
return x_1;
}
}
static lean_object* _init_l_RobustFlipper_Flipper_primrec___autoParam___closed__80() {
_start:
{
lean_object* x_1; lean_object* x_2; lean_object* x_3; 
x_1 = lean_box(2);
x_2 = l_RobustFlipper_Flipper_primrec___autoParam___closed__79;
x_3 = lean_alloc_ctor(2, 2, 0);
lean_ctor_set(x_3, 0, x_1);
lean_ctor_set(x_3, 1, x_2);
return x_3;
}
}
static lean_object* _init_l_RobustFlipper_Flipper_primrec___autoParam___closed__81() {
_start:
{
lean_object* x_1; lean_object* x_2; lean_object* x_3; 
x_1 = l_RobustFlipper_Flipper_primrec___autoParam___closed__78;
x_2 = l_RobustFlipper_Flipper_primrec___autoParam___closed__80;
x_3 = lean_array_push(x_1, x_2);
return x_3;
}
}
static lean_object* _init_l_RobustFlipper_Flipper_primrec___autoParam___closed__82() {
_start:
{
lean_object* x_1; lean_object* x_2; lean_object* x_3; lean_object* x_4; 
x_1 = lean_box(2);
x_2 = l_RobustFlipper_Flipper_primrec___autoParam___closed__65;
x_3 = l_RobustFlipper_Flipper_primrec___autoParam___closed__81;
x_4 = lean_alloc_ctor(1, 3, 0);
lean_ctor_set(x_4, 0, x_1);
lean_ctor_set(x_4, 1, x_2);
lean_ctor_set(x_4, 2, x_3);
return x_4;
}
}
static lean_object* _init_l_RobustFlipper_Flipper_primrec___autoParam___closed__83() {
_start:
{
lean_object* x_1; lean_object* x_2; lean_object* x_3; 
x_1 = l_RobustFlipper_Flipper_primrec___autoParam___closed__6;
x_2 = l_RobustFlipper_Flipper_primrec___autoParam___closed__82;
x_3 = lean_array_push(x_1, x_2);
return x_3;
}
}
static lean_object* _init_l_RobustFlipper_Flipper_primrec___autoParam___closed__84() {
_start:
{
lean_object* x_1; 
x_1 = lean_mk_string_unchecked("π", 2, 1);
return x_1;
}
}
static lean_object* _init_l_RobustFlipper_Flipper_primrec___autoParam___closed__85() {
_start:
{
lean_object* x_1; lean_object* x_2; 
x_1 = l_RobustFlipper_Flipper_primrec___autoParam___closed__84;
x_2 = lean_string_utf8_byte_size(x_1);
return x_2;
}
}
static lean_object* _init_l_RobustFlipper_Flipper_primrec___autoParam___closed__86() {
_start:
{
lean_object* x_1; lean_object* x_2; lean_object* x_3; lean_object* x_4; 
x_1 = l_RobustFlipper_Flipper_primrec___autoParam___closed__84;
x_2 = lean_unsigned_to_nat(0u);
x_3 = l_RobustFlipper_Flipper_primrec___autoParam___closed__85;
x_4 = lean_alloc_ctor(0, 3, 0);
lean_ctor_set(x_4, 0, x_1);
lean_ctor_set(x_4, 1, x_2);
lean_ctor_set(x_4, 2, x_3);
return x_4;
}
}
static lean_object* _init_l_RobustFlipper_Flipper_primrec___autoParam___closed__87() {
_start:
{
lean_object* x_1; lean_object* x_2; lean_object* x_3; 
x_1 = lean_box(0);
x_2 = l_RobustFlipper_Flipper_primrec___autoParam___closed__84;
x_3 = l_Lean_Name_str___override(x_1, x_2);
return x_3;
}
}
static lean_object* _init_l_RobustFlipper_Flipper_primrec___autoParam___closed__88() {
_start:
{
lean_object* x_1; lean_object* x_2; lean_object* x_3; lean_object* x_4; lean_object* x_5; 
x_1 = lean_box(0);
x_2 = lean_box(2);
x_3 = l_RobustFlipper_Flipper_primrec___autoParam___closed__86;
x_4 = l_RobustFlipper_Flipper_primrec___autoParam___closed__87;
x_5 = lean_alloc_ctor(3, 4, 0);
lean_ctor_set(x_5, 0, x_2);
lean_ctor_set(x_5, 1, x_3);
lean_ctor_set(x_5, 2, x_4);
lean_ctor_set(x_5, 3, x_1);
return x_5;
}
}
static lean_object* _init_l_RobustFlipper_Flipper_primrec___autoParam___closed__89() {
_start:
{
lean_object* x_1; lean_object* x_2; lean_object* x_3; 
x_1 = l_RobustFlipper_Flipper_primrec___autoParam___closed__68;
x_2 = l_RobustFlipper_Flipper_primrec___autoParam___closed__88;
x_3 = lean_array_push(x_1, x_2);
return x_3;
}
}
static lean_object* _init_l_RobustFlipper_Flipper_primrec___autoParam___closed__90() {
_start:
{
lean_object* x_1; lean_object* x_2; lean_object* x_3; 
x_1 = l_RobustFlipper_Flipper_primrec___autoParam___closed__89;
x_2 = l_RobustFlipper_Flipper_primrec___autoParam___closed__76;
x_3 = lean_array_push(x_1, x_2);
return x_3;
}
}
static lean_object* _init_l_RobustFlipper_Flipper_primrec___autoParam___closed__91() {
_start:
{
lean_object* x_1; lean_object* x_2; lean_object* x_3; 
x_1 = l_RobustFlipper_Flipper_primrec___autoParam___closed__90;
x_2 = l_RobustFlipper_Flipper_primrec___autoParam___closed__88;
x_3 = lean_array_push(x_1, x_2);
return x_3;
}
}
static lean_object* _init_l_RobustFlipper_Flipper_primrec___autoParam___closed__92() {
_start:
{
lean_object* x_1; lean_object* x_2; lean_object* x_3; 
x_1 = l_RobustFlipper_Flipper_primrec___autoParam___closed__91;
x_2 = l_RobustFlipper_Flipper_primrec___autoParam___closed__80;
x_3 = lean_array_push(x_1, x_2);
return x_3;
}
}
static lean_object* _init_l_RobustFlipper_Flipper_primrec___autoParam___closed__93() {
_start:
{
lean_object* x_1; lean_object* x_2; lean_object* x_3; lean_object* x_4; 
x_1 = lean_box(2);
x_2 = l_RobustFlipper_Flipper_primrec___autoParam___closed__65;
x_3 = l_RobustFlipper_Flipper_primrec___autoParam___closed__92;
x_4 = lean_alloc_ctor(1, 3, 0);
lean_ctor_set(x_4, 0, x_1);
lean_ctor_set(x_4, 1, x_2);
lean_ctor_set(x_4, 2, x_3);
return x_4;
}
}
static lean_object* _init_l_RobustFlipper_Flipper_primrec___autoParam___closed__94() {
_start:
{
lean_object* x_1; lean_object* x_2; lean_object* x_3; 
x_1 = l_RobustFlipper_Flipper_primrec___autoParam___closed__83;
x_2 = l_RobustFlipper_Flipper_primrec___autoParam___closed__93;
x_3 = lean_array_push(x_1, x_2);
return x_3;
}
}
static lean_object* _init_l_RobustFlipper_Flipper_primrec___autoParam___closed__95() {
_start:
{
lean_object* x_1; 
x_1 = lean_mk_string_unchecked("δ", 2, 1);
return x_1;
}
}
static lean_object* _init_l_RobustFlipper_Flipper_primrec___autoParam___closed__96() {
_start:
{
lean_object* x_1; lean_object* x_2; 
x_1 = l_RobustFlipper_Flipper_primrec___autoParam___closed__95;
x_2 = lean_string_utf8_byte_size(x_1);
return x_2;
}
}
static lean_object* _init_l_RobustFlipper_Flipper_primrec___autoParam___closed__97() {
_start:
{
lean_object* x_1; lean_object* x_2; lean_object* x_3; lean_object* x_4; 
x_1 = l_RobustFlipper_Flipper_primrec___autoParam___closed__95;
x_2 = lean_unsigned_to_nat(0u);
x_3 = l_RobustFlipper_Flipper_primrec___autoParam___closed__96;
x_4 = lean_alloc_ctor(0, 3, 0);
lean_ctor_set(x_4, 0, x_1);
lean_ctor_set(x_4, 1, x_2);
lean_ctor_set(x_4, 2, x_3);
return x_4;
}
}
static lean_object* _init_l_RobustFlipper_Flipper_primrec___autoParam___closed__98() {
_start:
{
lean_object* x_1; lean_object* x_2; lean_object* x_3; 
x_1 = lean_box(0);
x_2 = l_RobustFlipper_Flipper_primrec___autoParam___closed__95;
x_3 = l_Lean_Name_str___override(x_1, x_2);
return x_3;
}
}
static lean_object* _init_l_RobustFlipper_Flipper_primrec___autoParam___closed__99() {
_start:
{
lean_object* x_1; lean_object* x_2; lean_object* x_3; lean_object* x_4; lean_object* x_5; 
x_1 = lean_box(0);
x_2 = lean_box(2);
x_3 = l_RobustFlipper_Flipper_primrec___autoParam___closed__97;
x_4 = l_RobustFlipper_Flipper_primrec___autoParam___closed__98;
x_5 = lean_alloc_ctor(3, 4, 0);
lean_ctor_set(x_5, 0, x_2);
lean_ctor_set(x_5, 1, x_3);
lean_ctor_set(x_5, 2, x_4);
lean_ctor_set(x_5, 3, x_1);
return x_5;
}
}
static lean_object* _init_l_RobustFlipper_Flipper_primrec___autoParam___closed__100() {
_start:
{
lean_object* x_1; lean_object* x_2; lean_object* x_3; 
x_1 = l_RobustFlipper_Flipper_primrec___autoParam___closed__68;
x_2 = l_RobustFlipper_Flipper_primrec___autoParam___closed__99;
x_3 = lean_array_push(x_1, x_2);
return x_3;
}
}
static lean_object* _init_l_RobustFlipper_Flipper_primrec___autoParam___closed__101() {
_start:
{
lean_object* x_1; lean_object* x_2; lean_object* x_3; 
x_1 = l_RobustFlipper_Flipper_primrec___autoParam___closed__100;
x_2 = l_RobustFlipper_Flipper_primrec___autoParam___closed__76;
x_3 = lean_array_push(x_1, x_2);
return x_3;
}
}
static lean_object* _init_l_RobustFlipper_Flipper_primrec___autoParam___closed__102() {
_start:
{
lean_object* x_1; lean_object* x_2; lean_object* x_3; 
x_1 = l_RobustFlipper_Flipper_primrec___autoParam___closed__101;
x_2 = l_RobustFlipper_Flipper_primrec___autoParam___closed__99;
x_3 = lean_array_push(x_1, x_2);
return x_3;
}
}
static lean_object* _init_l_RobustFlipper_Flipper_primrec___autoParam___closed__103() {
_start:
{
lean_object* x_1; lean_object* x_2; lean_object* x_3; 
x_1 = l_RobustFlipper_Flipper_primrec___autoParam___closed__102;
x_2 = l_RobustFlipper_Flipper_primrec___autoParam___closed__80;
x_3 = lean_array_push(x_1, x_2);
return x_3;
}
}
static lean_object* _init_l_RobustFlipper_Flipper_primrec___autoParam___closed__104() {
_start:
{
lean_object* x_1; lean_object* x_2; lean_object* x_3; lean_object* x_4; 
x_1 = lean_box(2);
x_2 = l_RobustFlipper_Flipper_primrec___autoParam___closed__65;
x_3 = l_RobustFlipper_Flipper_primrec___autoParam___closed__103;
x_4 = lean_alloc_ctor(1, 3, 0);
lean_ctor_set(x_4, 0, x_1);
lean_ctor_set(x_4, 1, x_2);
lean_ctor_set(x_4, 2, x_3);
return x_4;
}
}
static lean_object* _init_l_RobustFlipper_Flipper_primrec___autoParam___closed__105() {
_start:
{
lean_object* x_1; lean_object* x_2; lean_object* x_3; 
x_1 = l_RobustFlipper_Flipper_primrec___autoParam___closed__94;
x_2 = l_RobustFlipper_Flipper_primrec___autoParam___closed__104;
x_3 = lean_array_push(x_1, x_2);
return x_3;
}
}
static lean_object* _init_l_RobustFlipper_Flipper_primrec___autoParam___closed__106() {
_start:
{
lean_object* x_1; 
x_1 = lean_mk_string_unchecked("hF", 2, 2);
return x_1;
}
}
static lean_object* _init_l_RobustFlipper_Flipper_primrec___autoParam___closed__107() {
_start:
{
lean_object* x_1; lean_object* x_2; 
x_1 = l_RobustFlipper_Flipper_primrec___autoParam___closed__106;
x_2 = lean_string_utf8_byte_size(x_1);
return x_2;
}
}
static lean_object* _init_l_RobustFlipper_Flipper_primrec___autoParam___closed__108() {
_start:
{
lean_object* x_1; lean_object* x_2; lean_object* x_3; lean_object* x_4; 
x_1 = l_RobustFlipper_Flipper_primrec___autoParam___closed__106;
x_2 = lean_unsigned_to_nat(0u);
x_3 = l_RobustFlipper_Flipper_primrec___autoParam___closed__107;
x_4 = lean_alloc_ctor(0, 3, 0);
lean_ctor_set(x_4, 0, x_1);
lean_ctor_set(x_4, 1, x_2);
lean_ctor_set(x_4, 2, x_3);
return x_4;
}
}
static lean_object* _init_l_RobustFlipper_Flipper_primrec___autoParam___closed__109() {
_start:
{
lean_object* x_1; lean_object* x_2; lean_object* x_3; 
x_1 = lean_box(0);
x_2 = l_RobustFlipper_Flipper_primrec___autoParam___closed__106;
x_3 = l_Lean_Name_str___override(x_1, x_2);
return x_3;
}
}
static lean_object* _init_l_RobustFlipper_Flipper_primrec___autoParam___closed__110() {
_start:
{
lean_object* x_1; lean_object* x_2; lean_object* x_3; lean_object* x_4; lean_object* x_5; 
x_1 = lean_box(0);
x_2 = lean_box(2);
x_3 = l_RobustFlipper_Flipper_primrec___autoParam___closed__108;
x_4 = l_RobustFlipper_Flipper_primrec___autoParam___closed__109;
x_5 = lean_alloc_ctor(3, 4, 0);
lean_ctor_set(x_5, 0, x_2);
lean_ctor_set(x_5, 1, x_3);
lean_ctor_set(x_5, 2, x_4);
lean_ctor_set(x_5, 3, x_1);
return x_5;
}
}
static lean_object* _init_l_RobustFlipper_Flipper_primrec___autoParam___closed__111() {
_start:
{
lean_object* x_1; lean_object* x_2; lean_object* x_3; 
x_1 = l_RobustFlipper_Flipper_primrec___autoParam___closed__105;
x_2 = l_RobustFlipper_Flipper_primrec___autoParam___closed__110;
x_3 = lean_array_push(x_1, x_2);
return x_3;
}
}
static lean_object* _init_l_RobustFlipper_Flipper_primrec___autoParam___closed__112() {
_start:
{
lean_object* x_1; 
x_1 = lean_mk_string_unchecked("hπ", 3, 2);
return x_1;
}
}
static lean_object* _init_l_RobustFlipper_Flipper_primrec___autoParam___closed__113() {
_start:
{
lean_object* x_1; lean_object* x_2; 
x_1 = l_RobustFlipper_Flipper_primrec___autoParam___closed__112;
x_2 = lean_string_utf8_byte_size(x_1);
return x_2;
}
}
static lean_object* _init_l_RobustFlipper_Flipper_primrec___autoParam___closed__114() {
_start:
{
lean_object* x_1; lean_object* x_2; lean_object* x_3; lean_object* x_4; 
x_1 = l_RobustFlipper_Flipper_primrec___autoParam___closed__112;
x_2 = lean_unsigned_to_nat(0u);
x_3 = l_RobustFlipper_Flipper_primrec___autoParam___closed__113;
x_4 = lean_alloc_ctor(0, 3, 0);
lean_ctor_set(x_4, 0, x_1);
lean_ctor_set(x_4, 1, x_2);
lean_ctor_set(x_4, 2, x_3);
return x_4;
}
}
static lean_object* _init_l_RobustFlipper_Flipper_primrec___autoParam___closed__115() {
_start:
{
lean_object* x_1; lean_object* x_2; lean_object* x_3; 
x_1 = lean_box(0);
x_2 = l_RobustFlipper_Flipper_primrec___autoParam___closed__112;
x_3 = l_Lean_Name_str___override(x_1, x_2);
return x_3;
}
}
static lean_object* _init_l_RobustFlipper_Flipper_primrec___autoParam___closed__116() {
_start:
{
lean_object* x_1; lean_object* x_2; lean_object* x_3; lean_object* x_4; lean_object* x_5; 
x_1 = lean_box(0);
x_2 = lean_box(2);
x_3 = l_RobustFlipper_Flipper_primrec___autoParam___closed__114;
x_4 = l_RobustFlipper_Flipper_primrec___autoParam___closed__115;
x_5 = lean_alloc_ctor(3, 4, 0);
lean_ctor_set(x_5, 0, x_2);
lean_ctor_set(x_5, 1, x_3);
lean_ctor_set(x_5, 2, x_4);
lean_ctor_set(x_5, 3, x_1);
return x_5;
}
}
static lean_object* _init_l_RobustFlipper_Flipper_primrec___autoParam___closed__117() {
_start:
{
lean_object* x_1; lean_object* x_2; lean_object* x_3; 
x_1 = l_RobustFlipper_Flipper_primrec___autoParam___closed__111;
x_2 = l_RobustFlipper_Flipper_primrec___autoParam___closed__116;
x_3 = lean_array_push(x_1, x_2);
return x_3;
}
}
static lean_object* _init_l_RobustFlipper_Flipper_primrec___autoParam___closed__118() {
_start:
{
lean_object* x_1; 
x_1 = lean_mk_string_unchecked("hδ", 3, 2);
return x_1;
}
}
static lean_object* _init_l_RobustFlipper_Flipper_primrec___autoParam___closed__119() {
_start:
{
lean_object* x_1; lean_object* x_2; 
x_1 = l_RobustFlipper_Flipper_primrec___autoParam___closed__118;
x_2 = lean_string_utf8_byte_size(x_1);
return x_2;
}
}
static lean_object* _init_l_RobustFlipper_Flipper_primrec___autoParam___closed__120() {
_start:
{
lean_object* x_1; lean_object* x_2; lean_object* x_3; lean_object* x_4; 
x_1 = l_RobustFlipper_Flipper_primrec___autoParam___closed__118;
x_2 = lean_unsigned_to_nat(0u);
x_3 = l_RobustFlipper_Flipper_primrec___autoParam___closed__119;
x_4 = lean_alloc_ctor(0, 3, 0);
lean_ctor_set(x_4, 0, x_1);
lean_ctor_set(x_4, 1, x_2);
lean_ctor_set(x_4, 2, x_3);
return x_4;
}
}
static lean_object* _init_l_RobustFlipper_Flipper_primrec___autoParam___closed__121() {
_start:
{
lean_object* x_1; lean_object* x_2; lean_object* x_3; 
x_1 = lean_box(0);
x_2 = l_RobustFlipper_Flipper_primrec___autoParam___closed__118;
x_3 = l_Lean_Name_str___override(x_1, x_2);
return x_3;
}
}
static lean_object* _init_l_RobustFlipper_Flipper_primrec___autoParam___closed__122() {
_start:
{
lean_object* x_1; lean_object* x_2; lean_object* x_3; lean_object* x_4; lean_object* x_5; 
x_1 = lean_box(0);
x_2 = lean_box(2);
x_3 = l_RobustFlipper_Flipper_primrec___autoParam___closed__120;
x_4 = l_RobustFlipper_Flipper_primrec___autoParam___closed__121;
x_5 = lean_alloc_ctor(3, 4, 0);
lean_ctor_set(x_5, 0, x_2);
lean_ctor_set(x_5, 1, x_3);
lean_ctor_set(x_5, 2, x_4);
lean_ctor_set(x_5, 3, x_1);
return x_5;
}
}
static lean_object* _init_l_RobustFlipper_Flipper_primrec___autoParam___closed__123() {
_start:
{
lean_object* x_1; lean_object* x_2; lean_object* x_3; 
x_1 = l_RobustFlipper_Flipper_primrec___autoParam___closed__117;
x_2 = l_RobustFlipper_Flipper_primrec___autoParam___closed__122;
x_3 = lean_array_push(x_1, x_2);
return x_3;
}
}
static lean_object* _init_l_RobustFlipper_Flipper_primrec___autoParam___closed__124() {
_start:
{
lean_object* x_1; lean_object* x_2; lean_object* x_3; lean_object* x_4; 
x_1 = lean_box(2);
x_2 = l_RobustFlipper_Flipper_primrec___autoParam___closed__10;
x_3 = l_RobustFlipper_Flipper_primrec___autoParam___closed__123;
x_4 = lean_alloc_ctor(1, 3, 0);
lean_ctor_set(x_4, 0, x_1);
lean_ctor_set(x_4, 1, x_2);
lean_ctor_set(x_4, 2, x_3);
return x_4;
}
}
static lean_object* _init_l_RobustFlipper_Flipper_primrec___autoParam___closed__125() {
_start:
{
lean_object* x_1; lean_object* x_2; lean_object* x_3; 
x_1 = l_RobustFlipper_Flipper_primrec___autoParam___closed__63;
x_2 = l_RobustFlipper_Flipper_primrec___autoParam___closed__124;
x_3 = lean_array_push(x_1, x_2);
return x_3;
}
}
static lean_object* _init_l_RobustFlipper_Flipper_primrec___autoParam___closed__126() {
_start:
{
lean_object* x_1; lean_object* x_2; lean_object* x_3; lean_object* x_4; 
x_1 = lean_box(2);
x_2 = l_RobustFlipper_Flipper_primrec___autoParam___closed__57;
x_3 = l_RobustFlipper_Flipper_primrec___autoParam___closed__125;
x_4 = lean_alloc_ctor(1, 3, 0);
lean_ctor_set(x_4, 0, x_1);
lean_ctor_set(x_4, 1, x_2);
lean_ctor_set(x_4, 2, x_3);
return x_4;
}
}
static lean_object* _init_l_RobustFlipper_Flipper_primrec___autoParam___closed__127() {
_start:
{
lean_object* x_1; lean_object* x_2; lean_object* x_3; 
x_1 = l_RobustFlipper_Flipper_primrec___autoParam___closed__54;
x_2 = l_RobustFlipper_Flipper_primrec___autoParam___closed__126;
x_3 = lean_array_push(x_1, x_2);
return x_3;
}
}
static lean_object* _init_l_RobustFlipper_Flipper_primrec___autoParam___closed__128() {
_start:
{
lean_object* x_1; lean_object* x_2; lean_object* x_3; lean_object* x_4; 
x_1 = lean_box(2);
x_2 = l_RobustFlipper_Flipper_primrec___autoParam___closed__10;
x_3 = l_RobustFlipper_Flipper_primrec___autoParam___closed__127;
x_4 = lean_alloc_ctor(1, 3, 0);
lean_ctor_set(x_4, 0, x_1);
lean_ctor_set(x_4, 1, x_2);
lean_ctor_set(x_4, 2, x_3);
return x_4;
}
}
static lean_object* _init_l_RobustFlipper_Flipper_primrec___autoParam___closed__129() {
_start:
{
lean_object* x_1; lean_object* x_2; lean_object* x_3; 
x_1 = l_RobustFlipper_Flipper_primrec___autoParam___closed__51;
x_2 = l_RobustFlipper_Flipper_primrec___autoParam___closed__128;
x_3 = lean_array_push(x_1, x_2);
return x_3;
}
}
static lean_object* _init_l_RobustFlipper_Flipper_primrec___autoParam___closed__130() {
_start:
{
lean_object* x_1; lean_object* x_2; lean_object* x_3; lean_object* x_4; 
x_1 = lean_box(2);
x_2 = l_RobustFlipper_Flipper_primrec___autoParam___closed__19;
x_3 = l_RobustFlipper_Flipper_primrec___autoParam___closed__129;
x_4 = lean_alloc_ctor(1, 3, 0);
lean_ctor_set(x_4, 0, x_1);
lean_ctor_set(x_4, 1, x_2);
lean_ctor_set(x_4, 2, x_3);
return x_4;
}
}
static lean_object* _init_l_RobustFlipper_Flipper_primrec___autoParam___closed__131() {
_start:
{
lean_object* x_1; lean_object* x_2; lean_object* x_3; 
x_1 = l_RobustFlipper_Flipper_primrec___autoParam___closed__17;
x_2 = l_RobustFlipper_Flipper_primrec___autoParam___closed__130;
x_3 = lean_array_push(x_1, x_2);
return x_3;
}
}
static lean_object* _init_l_RobustFlipper_Flipper_primrec___autoParam___closed__132() {
_start:
{
lean_object* x_1; lean_object* x_2; lean_object* x_3; lean_object* x_4; 
x_1 = lean_box(2);
x_2 = l_RobustFlipper_Flipper_primrec___autoParam___closed__12;
x_3 = l_RobustFlipper_Flipper_primrec___autoParam___closed__131;
x_4 = lean_alloc_ctor(1, 3, 0);
lean_ctor_set(x_4, 0, x_1);
lean_ctor_set(x_4, 1, x_2);
lean_ctor_set(x_4, 2, x_3);
return x_4;
}
}
static lean_object* _init_l_RobustFlipper_Flipper_primrec___autoParam___closed__133() {
_start:
{
lean_object* x_1; lean_object* x_2; lean_object* x_3; 
x_1 = l_RobustFlipper_Flipper_primrec___autoParam___closed__6;
x_2 = l_RobustFlipper_Flipper_primrec___autoParam___closed__132;
x_3 = lean_array_push(x_1, x_2);
return x_3;
}
}
static lean_object* _init_l_RobustFlipper_Flipper_primrec___autoParam___closed__134() {
_start:
{
lean_object* x_1; lean_object* x_2; lean_object* x_3; lean_object* x_4; 
x_1 = lean_box(2);
x_2 = l_RobustFlipper_Flipper_primrec___autoParam___closed__10;
x_3 = l_RobustFlipper_Flipper_primrec___autoParam___closed__133;
x_4 = lean_alloc_ctor(1, 3, 0);
lean_ctor_set(x_4, 0, x_1);
lean_ctor_set(x_4, 1, x_2);
lean_ctor_set(x_4, 2, x_3);
return x_4;
}
}
static lean_object* _init_l_RobustFlipper_Flipper_primrec___autoParam___closed__135() {
_start:
{
lean_object* x_1; lean_object* x_2; lean_object* x_3; 
x_1 = l_RobustFlipper_Flipper_primrec___autoParam___closed__6;
x_2 = l_RobustFlipper_Flipper_primrec___autoParam___closed__134;
x_3 = lean_array_push(x_1, x_2);
return x_3;
}
}
static lean_object* _init_l_RobustFlipper_Flipper_primrec___autoParam___closed__136() {
_start:
{
lean_object* x_1; lean_object* x_2; lean_object* x_3; lean_object* x_4; 
x_1 = lean_box(2);
x_2 = l_RobustFlipper_Flipper_primrec___autoParam___closed__8;
x_3 = l_RobustFlipper_Flipper_primrec___autoParam___closed__135;
x_4 = lean_alloc_ctor(1, 3, 0);
lean_ctor_set(x_4, 0, x_1);
lean_ctor_set(x_4, 1, x_2);
lean_ctor_set(x_4, 2, x_3);
return x_4;
}
}
static lean_object* _init_l_RobustFlipper_Flipper_primrec___autoParam___closed__137() {
_start:
{
lean_object* x_1; lean_object* x_2; lean_object* x_3; 
x_1 = l_RobustFlipper_Flipper_primrec___autoParam___closed__6;
x_2 = l_RobustFlipper_Flipper_primrec___autoParam___closed__136;
x_3 = lean_array_push(x_1, x_2);
return x_3;
}
}
static lean_object* _init_l_RobustFlipper_Flipper_primrec___autoParam___closed__138() {
_start:
{
lean_object* x_1; lean_object* x_2; lean_object* x_3; lean_object* x_4; 
x_1 = lean_box(2);
x_2 = l_RobustFlipper_Flipper_primrec___autoParam___closed__5;
x_3 = l_RobustFlipper_Flipper_primrec___autoParam___closed__137;
x_4 = lean_alloc_ctor(1, 3, 0);
lean_ctor_set(x_4, 0, x_1);
lean_ctor_set(x_4, 1, x_2);
lean_ctor_set(x_4, 2, x_3);
return x_4;
}
}
static lean_object* _init_l_RobustFlipper_Flipper_primrec___autoParam() {
_start:
{
lean_object* x_1; 
x_1 = l_RobustFlipper_Flipper_primrec___autoParam___closed__138;
return x_1;
}
}
static lean_object* _init_l_RobustFlipper_Flipper_ne__of__correct___autoParam___closed__1() {
_start:
{
lean_object* x_1; 
x_1 = lean_mk_string_unchecked("intro", 5, 5);
return x_1;
}
}
static lean_object* _init_l_RobustFlipper_Flipper_ne__of__correct___autoParam___closed__2() {
_start:
{
lean_object* x_1; lean_object* x_2; lean_object* x_3; lean_object* x_4; lean_object* x_5; 
x_1 = l_RobustFlipper_Flipper_primrec___autoParam___closed__1;
x_2 = l_RobustFlipper_Flipper_primrec___autoParam___closed__2;
x_3 = l_RobustFlipper_Flipper_primrec___autoParam___closed__3;
x_4 = l_RobustFlipper_Flipper_ne__of__correct___autoParam___closed__1;
x_5 = l_Lean_Name_mkStr4(x_1, x_2, x_3, x_4);
return x_5;
}
}
static lean_object* _init_l_RobustFlipper_Flipper_ne__of__correct___autoParam___closed__3() {
_start:
{
lean_object* x_1; lean_object* x_2; lean_object* x_3; 
x_1 = lean_box(2);
x_2 = l_RobustFlipper_Flipper_ne__of__correct___autoParam___closed__1;
x_3 = lean_alloc_ctor(2, 2, 0);
lean_ctor_set(x_3, 0, x_1);
lean_ctor_set(x_3, 1, x_2);
return x_3;
}
}
static lean_object* _init_l_RobustFlipper_Flipper_ne__of__correct___autoParam___closed__4() {
_start:
{
lean_object* x_1; lean_object* x_2; lean_object* x_3; 
x_1 = l_RobustFlipper_Flipper_primrec___autoParam___closed__6;
x_2 = l_RobustFlipper_Flipper_ne__of__correct___autoParam___closed__3;
x_3 = lean_array_push(x_1, x_2);
return x_3;
}
}
static lean_object* _init_l_RobustFlipper_Flipper_ne__of__correct___autoParam___closed__5() {
_start:
{
lean_object* x_1; 
x_1 = lean_mk_string_unchecked("s", 1, 1);
return x_1;
}
}
static lean_object* _init_l_RobustFlipper_Flipper_ne__of__correct___autoParam___closed__6() {
_start:
{
lean_object* x_1; lean_object* x_2; 
x_1 = l_RobustFlipper_Flipper_ne__of__correct___autoParam___closed__5;
x_2 = lean_string_utf8_byte_size(x_1);
return x_2;
}
}
static lean_object* _init_l_RobustFlipper_Flipper_ne__of__correct___autoParam___closed__7() {
_start:
{
lean_object* x_1; lean_object* x_2; lean_object* x_3; lean_object* x_4; 
x_1 = l_RobustFlipper_Flipper_ne__of__correct___autoParam___closed__5;
x_2 = lean_unsigned_to_nat(0u);
x_3 = l_RobustFlipper_Flipper_ne__of__correct___autoParam___closed__6;
x_4 = lean_alloc_ctor(0, 3, 0);
lean_ctor_set(x_4, 0, x_1);
lean_ctor_set(x_4, 1, x_2);
lean_ctor_set(x_4, 2, x_3);
return x_4;
}
}
static lean_object* _init_l_RobustFlipper_Flipper_ne__of__correct___autoParam___closed__8() {
_start:
{
lean_object* x_1; lean_object* x_2; lean_object* x_3; 
x_1 = lean_box(0);
x_2 = l_RobustFlipper_Flipper_ne__of__correct___autoParam___closed__5;
x_3 = l_Lean_Name_str___override(x_1, x_2);
return x_3;
}
}
static lean_object* _init_l_RobustFlipper_Flipper_ne__of__correct___autoParam___closed__9() {
_start:
{
lean_object* x_1; lean_object* x_2; lean_object* x_3; lean_object* x_4; lean_object* x_5; 
x_1 = lean_box(0);
x_2 = lean_box(2);
x_3 = l_RobustFlipper_Flipper_ne__of__correct___autoParam___closed__7;
x_4 = l_RobustFlipper_Flipper_ne__of__correct___autoParam___closed__8;
x_5 = lean_alloc_ctor(3, 4, 0);
lean_ctor_set(x_5, 0, x_2);
lean_ctor_set(x_5, 1, x_3);
lean_ctor_set(x_5, 2, x_4);
lean_ctor_set(x_5, 3, x_1);
return x_5;
}
}
static lean_object* _init_l_RobustFlipper_Flipper_ne__of__correct___autoParam___closed__10() {
_start:
{
lean_object* x_1; lean_object* x_2; lean_object* x_3; 
x_1 = l_RobustFlipper_Flipper_primrec___autoParam___closed__6;
x_2 = l_RobustFlipper_Flipper_ne__of__correct___autoParam___closed__9;
x_3 = lean_array_push(x_1, x_2);
return x_3;
}
}
static lean_object* _init_l_RobustFlipper_Flipper_ne__of__correct___autoParam___closed__11() {
_start:
{
lean_object* x_1; 
x_1 = lean_mk_string_unchecked("h", 1, 1);
return x_1;
}
}
static lean_object* _init_l_RobustFlipper_Flipper_ne__of__correct___autoParam___closed__12() {
_start:
{
lean_object* x_1; lean_object* x_2; 
x_1 = l_RobustFlipper_Flipper_ne__of__correct___autoParam___closed__11;
x_2 = lean_string_utf8_byte_size(x_1);
return x_2;
}
}
static lean_object* _init_l_RobustFlipper_Flipper_ne__of__correct___autoParam___closed__13() {
_start:
{
lean_object* x_1; lean_object* x_2; lean_object* x_3; lean_object* x_4; 
x_1 = l_RobustFlipper_Flipper_ne__of__correct___autoParam___closed__11;
x_2 = lean_unsigned_to_nat(0u);
x_3 = l_RobustFlipper_Flipper_ne__of__correct___autoParam___closed__12;
x_4 = lean_alloc_ctor(0, 3, 0);
lean_ctor_set(x_4, 0, x_1);
lean_ctor_set(x_4, 1, x_2);
lean_ctor_set(x_4, 2, x_3);
return x_4;
}
}
static lean_object* _init_l_RobustFlipper_Flipper_ne__of__correct___autoParam___closed__14() {
_start:
{
lean_object* x_1; lean_object* x_2; lean_object* x_3; 
x_1 = lean_box(0);
x_2 = l_RobustFlipper_Flipper_ne__of__correct___autoParam___closed__11;
x_3 = l_Lean_Name_str___override(x_1, x_2);
return x_3;
}
}
static lean_object* _init_l_RobustFlipper_Flipper_ne__of__correct___autoParam___closed__15() {
_start:
{
lean_object* x_1; lean_object* x_2; lean_object* x_3; lean_object* x_4; lean_object* x_5; 
x_1 = lean_box(0);
x_2 = lean_box(2);
x_3 = l_RobustFlipper_Flipper_ne__of__correct___autoParam___closed__13;
x_4 = l_RobustFlipper_Flipper_ne__of__correct___autoParam___closed__14;
x_5 = lean_alloc_ctor(3, 4, 0);
lean_ctor_set(x_5, 0, x_2);
lean_ctor_set(x_5, 1, x_3);
lean_ctor_set(x_5, 2, x_4);
lean_ctor_set(x_5, 3, x_1);
return x_5;
}
}
static lean_object* _init_l_RobustFlipper_Flipper_ne__of__correct___autoParam___closed__16() {
_start:
{
lean_object* x_1; lean_object* x_2; lean_object* x_3; 
x_1 = l_RobustFlipper_Flipper_ne__of__correct___autoParam___closed__10;
x_2 = l_RobustFlipper_Flipper_ne__of__correct___autoParam___closed__15;
x_3 = lean_array_push(x_1, x_2);
return x_3;
}
}
static lean_object* _init_l_RobustFlipper_Flipper_ne__of__correct___autoParam___closed__17() {
_start:
{
lean_object* x_1; lean_object* x_2; lean_object* x_3; lean_object* x_4; 
x_1 = lean_box(2);
x_2 = l_RobustFlipper_Flipper_primrec___autoParam___closed__10;
x_3 = l_RobustFlipper_Flipper_ne__of__correct___autoParam___closed__16;
x_4 = lean_alloc_ctor(1, 3, 0);
lean_ctor_set(x_4, 0, x_1);
lean_ctor_set(x_4, 1, x_2);
lean_ctor_set(x_4, 2, x_3);
return x_4;
}
}
static lean_object* _init_l_RobustFlipper_Flipper_ne__of__correct___autoParam___closed__18() {
_start:
{
lean_object* x_1; lean_object* x_2; lean_object* x_3; 
x_1 = l_RobustFlipper_Flipper_ne__of__correct___autoParam___closed__4;
x_2 = l_RobustFlipper_Flipper_ne__of__correct___autoParam___closed__17;
x_3 = lean_array_push(x_1, x_2);
return x_3;
}
}
static lean_object* _init_l_RobustFlipper_Flipper_ne__of__correct___autoParam___closed__19() {
_start:
{
lean_object* x_1; lean_object* x_2; lean_object* x_3; lean_object* x_4; 
x_1 = lean_box(2);
x_2 = l_RobustFlipper_Flipper_ne__of__correct___autoParam___closed__2;
x_3 = l_RobustFlipper_Flipper_ne__of__correct___autoParam___closed__18;
x_4 = lean_alloc_ctor(1, 3, 0);
lean_ctor_set(x_4, 0, x_1);
lean_ctor_set(x_4, 1, x_2);
lean_ctor_set(x_4, 2, x_3);
return x_4;
}
}
static lean_object* _init_l_RobustFlipper_Flipper_ne__of__correct___autoParam___closed__20() {
_start:
{
lean_object* x_1; lean_object* x_2; lean_object* x_3; 
x_1 = l_RobustFlipper_Flipper_primrec___autoParam___closed__6;
x_2 = l_RobustFlipper_Flipper_ne__of__correct___autoParam___closed__19;
x_3 = lean_array_push(x_1, x_2);
return x_3;
}
}
static lean_object* _init_l_RobustFlipper_Flipper_ne__of__correct___autoParam___closed__21() {
_start:
{
lean_object* x_1; lean_object* x_2; lean_object* x_3; 
x_1 = l_RobustFlipper_Flipper_ne__of__correct___autoParam___closed__20;
x_2 = l_RobustFlipper_Flipper_primrec___autoParam___closed__15;
x_3 = lean_array_push(x_1, x_2);
return x_3;
}
}
static lean_object* _init_l_RobustFlipper_Flipper_ne__of__correct___autoParam___closed__22() {
_start:
{
lean_object* x_1; lean_object* x_2; lean_object* x_3; 
x_1 = l_RobustFlipper_Flipper_primrec___autoParam___closed__14;
x_2 = l_RobustFlipper_Flipper_primrec___autoParam___closed__15;
x_3 = lean_array_push(x_1, x_2);
return x_3;
}
}
static lean_object* _init_l_RobustFlipper_Flipper_ne__of__correct___autoParam___closed__23() {
_start:
{
lean_object* x_1; lean_object* x_2; lean_object* x_3; 
x_1 = l_RobustFlipper_Flipper_ne__of__correct___autoParam___closed__22;
x_2 = l_RobustFlipper_Flipper_primrec___autoParam___closed__15;
x_3 = lean_array_push(x_1, x_2);
return x_3;
}
}
static lean_object* _init_l_RobustFlipper_Flipper_ne__of__correct___autoParam___closed__24() {
_start:
{
lean_object* x_1; lean_object* x_2; lean_object* x_3; lean_object* x_4; lean_object* x_5; 
x_1 = lean_box(0);
x_2 = lean_box(2);
x_3 = l_RobustFlipper_Flipper_primrec___autoParam___closed__37;
x_4 = l_RobustFlipper_Flipper_primrec___autoParam___closed__38;
x_5 = lean_alloc_ctor(3, 4, 0);
lean_ctor_set(x_5, 0, x_2);
lean_ctor_set(x_5, 1, x_3);
lean_ctor_set(x_5, 2, x_4);
lean_ctor_set(x_5, 3, x_1);
return x_5;
}
}
static lean_object* _init_l_RobustFlipper_Flipper_ne__of__correct___autoParam___closed__25() {
_start:
{
lean_object* x_1; lean_object* x_2; lean_object* x_3; 
x_1 = l_RobustFlipper_Flipper_primrec___autoParam___closed__34;
x_2 = l_RobustFlipper_Flipper_ne__of__correct___autoParam___closed__24;
x_3 = lean_array_push(x_1, x_2);
return x_3;
}
}
static lean_object* _init_l_RobustFlipper_Flipper_ne__of__correct___autoParam___closed__26() {
_start:
{
lean_object* x_1; lean_object* x_2; lean_object* x_3; lean_object* x_4; 
x_1 = lean_box(2);
x_2 = l_RobustFlipper_Flipper_primrec___autoParam___closed__33;
x_3 = l_RobustFlipper_Flipper_ne__of__correct___autoParam___closed__25;
x_4 = lean_alloc_ctor(1, 3, 0);
lean_ctor_set(x_4, 0, x_1);
lean_ctor_set(x_4, 1, x_2);
lean_ctor_set(x_4, 2, x_3);
return x_4;
}
}
static lean_object* _init_l_RobustFlipper_Flipper_ne__of__correct___autoParam___closed__27() {
_start:
{
lean_object* x_1; lean_object* x_2; lean_object* x_3; 
x_1 = l_RobustFlipper_Flipper_primrec___autoParam___closed__6;
x_2 = l_RobustFlipper_Flipper_ne__of__correct___autoParam___closed__26;
x_3 = lean_array_push(x_1, x_2);
return x_3;
}
}
static lean_object* _init_l_RobustFlipper_Flipper_ne__of__correct___autoParam___closed__28() {
_start:
{
lean_object* x_1; lean_object* x_2; lean_object* x_3; lean_object* x_4; 
x_1 = lean_box(2);
x_2 = l_RobustFlipper_Flipper_primrec___autoParam___closed__10;
x_3 = l_RobustFlipper_Flipper_ne__of__correct___autoParam___closed__27;
x_4 = lean_alloc_ctor(1, 3, 0);
lean_ctor_set(x_4, 0, x_1);
lean_ctor_set(x_4, 1, x_2);
lean_ctor_set(x_4, 2, x_3);
return x_4;
}
}
static lean_object* _init_l_RobustFlipper_Flipper_ne__of__correct___autoParam___closed__29() {
_start:
{
lean_object* x_1; lean_object* x_2; lean_object* x_3; 
x_1 = l_RobustFlipper_Flipper_primrec___autoParam___closed__31;
x_2 = l_RobustFlipper_Flipper_ne__of__correct___autoParam___closed__28;
x_3 = lean_array_push(x_1, x_2);
return x_3;
}
}
static lean_object* _init_l_RobustFlipper_Flipper_ne__of__correct___autoParam___closed__30() {
_start:
{
lean_object* x_1; lean_object* x_2; lean_object* x_3; 
x_1 = l_RobustFlipper_Flipper_ne__of__correct___autoParam___closed__29;
x_2 = l_RobustFlipper_Flipper_primrec___autoParam___closed__46;
x_3 = lean_array_push(x_1, x_2);
return x_3;
}
}
static lean_object* _init_l_RobustFlipper_Flipper_ne__of__correct___autoParam___closed__31() {
_start:
{
lean_object* x_1; lean_object* x_2; lean_object* x_3; lean_object* x_4; 
x_1 = lean_box(2);
x_2 = l_RobustFlipper_Flipper_primrec___autoParam___closed__28;
x_3 = l_RobustFlipper_Flipper_ne__of__correct___autoParam___closed__30;
x_4 = lean_alloc_ctor(1, 3, 0);
lean_ctor_set(x_4, 0, x_1);
lean_ctor_set(x_4, 1, x_2);
lean_ctor_set(x_4, 2, x_3);
return x_4;
}
}
static lean_object* _init_l_RobustFlipper_Flipper_ne__of__correct___autoParam___closed__32() {
_start:
{
lean_object* x_1; lean_object* x_2; lean_object* x_3; 
x_1 = l_RobustFlipper_Flipper_primrec___autoParam___closed__6;
x_2 = l_RobustFlipper_Flipper_ne__of__correct___autoParam___closed__31;
x_3 = lean_array_push(x_1, x_2);
return x_3;
}
}
static lean_object* _init_l_RobustFlipper_Flipper_ne__of__correct___autoParam___closed__33() {
_start:
{
lean_object* x_1; lean_object* x_2; lean_object* x_3; lean_object* x_4; 
x_1 = lean_box(2);
x_2 = l_RobustFlipper_Flipper_primrec___autoParam___closed__10;
x_3 = l_RobustFlipper_Flipper_ne__of__correct___autoParam___closed__32;
x_4 = lean_alloc_ctor(1, 3, 0);
lean_ctor_set(x_4, 0, x_1);
lean_ctor_set(x_4, 1, x_2);
lean_ctor_set(x_4, 2, x_3);
return x_4;
}
}
static lean_object* _init_l_RobustFlipper_Flipper_ne__of__correct___autoParam___closed__34() {
_start:
{
lean_object* x_1; lean_object* x_2; lean_object* x_3; 
x_1 = l_RobustFlipper_Flipper_primrec___autoParam___closed__26;
x_2 = l_RobustFlipper_Flipper_ne__of__correct___autoParam___closed__33;
x_3 = lean_array_push(x_1, x_2);
return x_3;
}
}
static lean_object* _init_l_RobustFlipper_Flipper_ne__of__correct___autoParam___closed__35() {
_start:
{
lean_object* x_1; 
x_1 = lean_mk_string_unchecked("flip_ne_of_correct", 18, 18);
return x_1;
}
}
static lean_object* _init_l_RobustFlipper_Flipper_ne__of__correct___autoParam___closed__36() {
_start:
{
lean_object* x_1; lean_object* x_2; 
x_1 = l_RobustFlipper_Flipper_ne__of__correct___autoParam___closed__35;
x_2 = lean_string_utf8_byte_size(x_1);
return x_2;
}
}
static lean_object* _init_l_RobustFlipper_Flipper_ne__of__correct___autoParam___closed__37() {
_start:
{
lean_object* x_1; lean_object* x_2; lean_object* x_3; lean_object* x_4; 
x_1 = l_RobustFlipper_Flipper_ne__of__correct___autoParam___closed__35;
x_2 = lean_unsigned_to_nat(0u);
x_3 = l_RobustFlipper_Flipper_ne__of__correct___autoParam___closed__36;
x_4 = lean_alloc_ctor(0, 3, 0);
lean_ctor_set(x_4, 0, x_1);
lean_ctor_set(x_4, 1, x_2);
lean_ctor_set(x_4, 2, x_3);
return x_4;
}
}
static lean_object* _init_l_RobustFlipper_Flipper_ne__of__correct___autoParam___closed__38() {
_start:
{
lean_object* x_1; lean_object* x_2; lean_object* x_3; 
x_1 = lean_box(0);
x_2 = l_RobustFlipper_Flipper_ne__of__correct___autoParam___closed__35;
x_3 = l_Lean_Name_str___override(x_1, x_2);
return x_3;
}
}
static lean_object* _init_l_RobustFlipper_Flipper_ne__of__correct___autoParam___closed__39() {
_start:
{
lean_object* x_1; lean_object* x_2; lean_object* x_3; lean_object* x_4; lean_object* x_5; 
x_1 = lean_box(0);
x_2 = lean_box(2);
x_3 = l_RobustFlipper_Flipper_ne__of__correct___autoParam___closed__37;
x_4 = l_RobustFlipper_Flipper_ne__of__correct___autoParam___closed__38;
x_5 = lean_alloc_ctor(3, 4, 0);
lean_ctor_set(x_5, 0, x_2);
lean_ctor_set(x_5, 1, x_3);
lean_ctor_set(x_5, 2, x_4);
lean_ctor_set(x_5, 3, x_1);
return x_5;
}
}
static lean_object* _init_l_RobustFlipper_Flipper_ne__of__correct___autoParam___closed__40() {
_start:
{
lean_object* x_1; lean_object* x_2; lean_object* x_3; 
x_1 = l_RobustFlipper_Flipper_primrec___autoParam___closed__6;
x_2 = l_RobustFlipper_Flipper_ne__of__correct___autoParam___closed__39;
x_3 = lean_array_push(x_1, x_2);
return x_3;
}
}
static lean_object* _init_l_RobustFlipper_Flipper_ne__of__correct___autoParam___closed__41() {
_start:
{
lean_object* x_1; 
x_1 = lean_mk_string_unchecked("hδne", 5, 4);
return x_1;
}
}
static lean_object* _init_l_RobustFlipper_Flipper_ne__of__correct___autoParam___closed__42() {
_start:
{
lean_object* x_1; lean_object* x_2; 
x_1 = l_RobustFlipper_Flipper_ne__of__correct___autoParam___closed__41;
x_2 = lean_string_utf8_byte_size(x_1);
return x_2;
}
}
static lean_object* _init_l_RobustFlipper_Flipper_ne__of__correct___autoParam___closed__43() {
_start:
{
lean_object* x_1; lean_object* x_2; lean_object* x_3; lean_object* x_4; 
x_1 = l_RobustFlipper_Flipper_ne__of__correct___autoParam___closed__41;
x_2 = lean_unsigned_to_nat(0u);
x_3 = l_RobustFlipper_Flipper_ne__of__correct___autoParam___closed__42;
x_4 = lean_alloc_ctor(0, 3, 0);
lean_ctor_set(x_4, 0, x_1);
lean_ctor_set(x_4, 1, x_2);
lean_ctor_set(x_4, 2, x_3);
return x_4;
}
}
static lean_object* _init_l_RobustFlipper_Flipper_ne__of__correct___autoParam___closed__44() {
_start:
{
lean_object* x_1; lean_object* x_2; lean_object* x_3; 
x_1 = lean_box(0);
x_2 = l_RobustFlipper_Flipper_ne__of__correct___autoParam___closed__41;
x_3 = l_Lean_Name_str___override(x_1, x_2);
return x_3;
}
}
static lean_object* _init_l_RobustFlipper_Flipper_ne__of__correct___autoParam___closed__45() {
_start:
{
lean_object* x_1; lean_object* x_2; lean_object* x_3; lean_object* x_4; lean_object* x_5; 
x_1 = lean_box(0);
x_2 = lean_box(2);
x_3 = l_RobustFlipper_Flipper_ne__of__correct___autoParam___closed__43;
x_4 = l_RobustFlipper_Flipper_ne__of__correct___autoParam___closed__44;
x_5 = lean_alloc_ctor(3, 4, 0);
lean_ctor_set(x_5, 0, x_2);
lean_ctor_set(x_5, 1, x_3);
lean_ctor_set(x_5, 2, x_4);
lean_ctor_set(x_5, 3, x_1);
return x_5;
}
}
static lean_object* _init_l_RobustFlipper_Flipper_ne__of__correct___autoParam___closed__46() {
_start:
{
lean_object* x_1; lean_object* x_2; lean_object* x_3; 
x_1 = l_RobustFlipper_Flipper_primrec___autoParam___closed__105;
x_2 = l_RobustFlipper_Flipper_ne__of__correct___autoParam___closed__45;
x_3 = lean_array_push(x_1, x_2);
return x_3;
}
}
static lean_object* _init_l_RobustFlipper_Flipper_ne__of__correct___autoParam___closed__47() {
_start:
{
lean_object* x_1; lean_object* x_2; lean_object* x_3; 
x_1 = l_RobustFlipper_Flipper_primrec___autoParam___closed__68;
x_2 = l_RobustFlipper_Flipper_ne__of__correct___autoParam___closed__9;
x_3 = lean_array_push(x_1, x_2);
return x_3;
}
}
static lean_object* _init_l_RobustFlipper_Flipper_ne__of__correct___autoParam___closed__48() {
_start:
{
lean_object* x_1; lean_object* x_2; lean_object* x_3; 
x_1 = l_RobustFlipper_Flipper_ne__of__correct___autoParam___closed__47;
x_2 = l_RobustFlipper_Flipper_primrec___autoParam___closed__76;
x_3 = lean_array_push(x_1, x_2);
return x_3;
}
}
static lean_object* _init_l_RobustFlipper_Flipper_ne__of__correct___autoParam___closed__49() {
_start:
{
lean_object* x_1; lean_object* x_2; lean_object* x_3; 
x_1 = l_RobustFlipper_Flipper_ne__of__correct___autoParam___closed__48;
x_2 = l_RobustFlipper_Flipper_ne__of__correct___autoParam___closed__9;
x_3 = lean_array_push(x_1, x_2);
return x_3;
}
}
static lean_object* _init_l_RobustFlipper_Flipper_ne__of__correct___autoParam___closed__50() {
_start:
{
lean_object* x_1; lean_object* x_2; lean_object* x_3; 
x_1 = l_RobustFlipper_Flipper_ne__of__correct___autoParam___closed__49;
x_2 = l_RobustFlipper_Flipper_primrec___autoParam___closed__80;
x_3 = lean_array_push(x_1, x_2);
return x_3;
}
}
static lean_object* _init_l_RobustFlipper_Flipper_ne__of__correct___autoParam___closed__51() {
_start:
{
lean_object* x_1; lean_object* x_2; lean_object* x_3; lean_object* x_4; 
x_1 = lean_box(2);
x_2 = l_RobustFlipper_Flipper_primrec___autoParam___closed__65;
x_3 = l_RobustFlipper_Flipper_ne__of__correct___autoParam___closed__50;
x_4 = lean_alloc_ctor(1, 3, 0);
lean_ctor_set(x_4, 0, x_1);
lean_ctor_set(x_4, 1, x_2);
lean_ctor_set(x_4, 2, x_3);
return x_4;
}
}
static lean_object* _init_l_RobustFlipper_Flipper_ne__of__correct___autoParam___closed__52() {
_start:
{
lean_object* x_1; lean_object* x_2; lean_object* x_3; 
x_1 = l_RobustFlipper_Flipper_ne__of__correct___autoParam___closed__46;
x_2 = l_RobustFlipper_Flipper_ne__of__correct___autoParam___closed__51;
x_3 = lean_array_push(x_1, x_2);
return x_3;
}
}
static lean_object* _init_l_RobustFlipper_Flipper_ne__of__correct___autoParam___closed__53() {
_start:
{
lean_object* x_1; lean_object* x_2; lean_object* x_3; 
x_1 = l_RobustFlipper_Flipper_ne__of__correct___autoParam___closed__52;
x_2 = l_RobustFlipper_Flipper_ne__of__correct___autoParam___closed__15;
x_3 = lean_array_push(x_1, x_2);
return x_3;
}
}
static lean_object* _init_l_RobustFlipper_Flipper_ne__of__correct___autoParam___closed__54() {
_start:
{
lean_object* x_1; lean_object* x_2; lean_object* x_3; lean_object* x_4; 
x_1 = lean_box(2);
x_2 = l_RobustFlipper_Flipper_primrec___autoParam___closed__10;
x_3 = l_RobustFlipper_Flipper_ne__of__correct___autoParam___closed__53;
x_4 = lean_alloc_ctor(1, 3, 0);
lean_ctor_set(x_4, 0, x_1);
lean_ctor_set(x_4, 1, x_2);
lean_ctor_set(x_4, 2, x_3);
return x_4;
}
}
static lean_object* _init_l_RobustFlipper_Flipper_ne__of__correct___autoParam___closed__55() {
_start:
{
lean_object* x_1; lean_object* x_2; lean_object* x_3; 
x_1 = l_RobustFlipper_Flipper_ne__of__correct___autoParam___closed__40;
x_2 = l_RobustFlipper_Flipper_ne__of__correct___autoParam___closed__54;
x_3 = lean_array_push(x_1, x_2);
return x_3;
}
}
static lean_object* _init_l_RobustFlipper_Flipper_ne__of__correct___autoParam___closed__56() {
_start:
{
lean_object* x_1; lean_object* x_2; lean_object* x_3; lean_object* x_4; 
x_1 = lean_box(2);
x_2 = l_RobustFlipper_Flipper_primrec___autoParam___closed__57;
x_3 = l_RobustFlipper_Flipper_ne__of__correct___autoParam___closed__55;
x_4 = lean_alloc_ctor(1, 3, 0);
lean_ctor_set(x_4, 0, x_1);
lean_ctor_set(x_4, 1, x_2);
lean_ctor_set(x_4, 2, x_3);
return x_4;
}
}
static lean_object* _init_l_RobustFlipper_Flipper_ne__of__correct___autoParam___closed__57() {
_start:
{
lean_object* x_1; lean_object* x_2; lean_object* x_3; 
x_1 = l_RobustFlipper_Flipper_primrec___autoParam___closed__54;
x_2 = l_RobustFlipper_Flipper_ne__of__correct___autoParam___closed__56;
x_3 = lean_array_push(x_1, x_2);
return x_3;
}
}
static lean_object* _init_l_RobustFlipper_Flipper_ne__of__correct___autoParam___closed__58() {
_start:
{
lean_object* x_1; lean_object* x_2; lean_object* x_3; lean_object* x_4; 
x_1 = lean_box(2);
x_2 = l_RobustFlipper_Flipper_primrec___autoParam___closed__10;
x_3 = l_RobustFlipper_Flipper_ne__of__correct___autoParam___closed__57;
x_4 = lean_alloc_ctor(1, 3, 0);
lean_ctor_set(x_4, 0, x_1);
lean_ctor_set(x_4, 1, x_2);
lean_ctor_set(x_4, 2, x_3);
return x_4;
}
}
static lean_object* _init_l_RobustFlipper_Flipper_ne__of__correct___autoParam___closed__59() {
_start:
{
lean_object* x_1; lean_object* x_2; lean_object* x_3; 
x_1 = l_RobustFlipper_Flipper_ne__of__correct___autoParam___closed__34;
x_2 = l_RobustFlipper_Flipper_ne__of__correct___autoParam___closed__58;
x_3 = lean_array_push(x_1, x_2);
return x_3;
}
}
static lean_object* _init_l_RobustFlipper_Flipper_ne__of__correct___autoParam___closed__60() {
_start:
{
lean_object* x_1; lean_object* x_2; lean_object* x_3; lean_object* x_4; 
x_1 = lean_box(2);
x_2 = l_RobustFlipper_Flipper_primrec___autoParam___closed__19;
x_3 = l_RobustFlipper_Flipper_ne__of__correct___autoParam___closed__59;
x_4 = lean_alloc_ctor(1, 3, 0);
lean_ctor_set(x_4, 0, x_1);
lean_ctor_set(x_4, 1, x_2);
lean_ctor_set(x_4, 2, x_3);
return x_4;
}
}
static lean_object* _init_l_RobustFlipper_Flipper_ne__of__correct___autoParam___closed__61() {
_start:
{
lean_object* x_1; lean_object* x_2; lean_object* x_3; 
x_1 = l_RobustFlipper_Flipper_ne__of__correct___autoParam___closed__23;
x_2 = l_RobustFlipper_Flipper_ne__of__correct___autoParam___closed__60;
x_3 = lean_array_push(x_1, x_2);
return x_3;
}
}
static lean_object* _init_l_RobustFlipper_Flipper_ne__of__correct___autoParam___closed__62() {
_start:
{
lean_object* x_1; lean_object* x_2; lean_object* x_3; lean_object* x_4; 
x_1 = lean_box(2);
x_2 = l_RobustFlipper_Flipper_primrec___autoParam___closed__12;
x_3 = l_RobustFlipper_Flipper_ne__of__correct___autoParam___closed__61;
x_4 = lean_alloc_ctor(1, 3, 0);
lean_ctor_set(x_4, 0, x_1);
lean_ctor_set(x_4, 1, x_2);
lean_ctor_set(x_4, 2, x_3);
return x_4;
}
}
static lean_object* _init_l_RobustFlipper_Flipper_ne__of__correct___autoParam___closed__63() {
_start:
{
lean_object* x_1; lean_object* x_2; lean_object* x_3; 
x_1 = l_RobustFlipper_Flipper_ne__of__correct___autoParam___closed__21;
x_2 = l_RobustFlipper_Flipper_ne__of__correct___autoParam___closed__62;
x_3 = lean_array_push(x_1, x_2);
return x_3;
}
}
static lean_object* _init_l_RobustFlipper_Flipper_ne__of__correct___autoParam___closed__64() {
_start:
{
lean_object* x_1; lean_object* x_2; lean_object* x_3; lean_object* x_4; 
x_1 = lean_box(2);
x_2 = l_RobustFlipper_Flipper_primrec___autoParam___closed__10;
x_3 = l_RobustFlipper_Flipper_ne__of__correct___autoParam___closed__63;
x_4 = lean_alloc_ctor(1, 3, 0);
lean_ctor_set(x_4, 0, x_1);
lean_ctor_set(x_4, 1, x_2);
lean_ctor_set(x_4, 2, x_3);
return x_4;
}
}
static lean_object* _init_l_RobustFlipper_Flipper_ne__of__correct___autoParam___closed__65() {
_start:
{
lean_object* x_1; lean_object* x_2; lean_object* x_3; 
x_1 = l_RobustFlipper_Flipper_primrec___autoParam___closed__6;
x_2 = l_RobustFlipper_Flipper_ne__of__correct___autoParam___closed__64;
x_3 = lean_array_push(x_1, x_2);
return x_3;
}
}
static lean_object* _init_l_RobustFlipper_Flipper_ne__of__correct___autoParam___closed__66() {
_start:
{
lean_object* x_1; lean_object* x_2; lean_object* x_3; lean_object* x_4; 
x_1 = lean_box(2);
x_2 = l_RobustFlipper_Flipper_primrec___autoParam___closed__8;
x_3 = l_RobustFlipper_Flipper_ne__of__correct___autoParam___closed__65;
x_4 = lean_alloc_ctor(1, 3, 0);
lean_ctor_set(x_4, 0, x_1);
lean_ctor_set(x_4, 1, x_2);
lean_ctor_set(x_4, 2, x_3);
return x_4;
}
}
static lean_object* _init_l_RobustFlipper_Flipper_ne__of__correct___autoParam___closed__67() {
_start:
{
lean_object* x_1; lean_object* x_2; lean_object* x_3; 
x_1 = l_RobustFlipper_Flipper_primrec___autoParam___closed__6;
x_2 = l_RobustFlipper_Flipper_ne__of__correct___autoParam___closed__66;
x_3 = lean_array_push(x_1, x_2);
return x_3;
}
}
static lean_object* _init_l_RobustFlipper_Flipper_ne__of__correct___autoParam___closed__68() {
_start:
{
lean_object* x_1; lean_object* x_2; lean_object* x_3; lean_object* x_4; 
x_1 = lean_box(2);
x_2 = l_RobustFlipper_Flipper_primrec___autoParam___closed__5;
x_3 = l_RobustFlipper_Flipper_ne__of__correct___autoParam___closed__67;
x_4 = lean_alloc_ctor(1, 3, 0);
lean_ctor_set(x_4, 0, x_1);
lean_ctor_set(x_4, 1, x_2);
lean_ctor_set(x_4, 2, x_3);
return x_4;
}
}
static lean_object* _init_l_RobustFlipper_Flipper_ne__of__correct___autoParam() {
_start:
{
lean_object* x_1; 
x_1 = l_RobustFlipper_Flipper_ne__of__correct___autoParam___closed__68;
return x_1;
}
}
lean_object* initialize_Init(uint8_t builtin, lean_object*);
lean_object* initialize_Mathlib_Computability_Partrec(uint8_t builtin, lean_object*);
lean_object* initialize_Mathlib_Computability_Primrec(uint8_t builtin, lean_object*);
static bool _G_initialized = false;
LEAN_EXPORT lean_object* initialize_Kleene2_RobustFlipper(uint8_t builtin, lean_object* w) {
lean_object * res;
if (_G_initialized) return lean_io_result_mk_ok(lean_box(0));
_G_initialized = true;
res = initialize_Init(builtin, lean_io_mk_world());
if (lean_io_result_is_error(res)) return res;
lean_dec_ref(res);
res = initialize_Mathlib_Computability_Partrec(builtin, lean_io_mk_world());
if (lean_io_result_is_error(res)) return res;
lean_dec_ref(res);
res = initialize_Mathlib_Computability_Primrec(builtin, lean_io_mk_world());
if (lean_io_result_is_error(res)) return res;
lean_dec_ref(res);
l_RobustFlipper_Flipper_primrec___autoParam___closed__1 = _init_l_RobustFlipper_Flipper_primrec___autoParam___closed__1();
lean_mark_persistent(l_RobustFlipper_Flipper_primrec___autoParam___closed__1);
l_RobustFlipper_Flipper_primrec___autoParam___closed__2 = _init_l_RobustFlipper_Flipper_primrec___autoParam___closed__2();
lean_mark_persistent(l_RobustFlipper_Flipper_primrec___autoParam___closed__2);
l_RobustFlipper_Flipper_primrec___autoParam___closed__3 = _init_l_RobustFlipper_Flipper_primrec___autoParam___closed__3();
lean_mark_persistent(l_RobustFlipper_Flipper_primrec___autoParam___closed__3);
l_RobustFlipper_Flipper_primrec___autoParam___closed__4 = _init_l_RobustFlipper_Flipper_primrec___autoParam___closed__4();
lean_mark_persistent(l_RobustFlipper_Flipper_primrec___autoParam___closed__4);
l_RobustFlipper_Flipper_primrec___autoParam___closed__5 = _init_l_RobustFlipper_Flipper_primrec___autoParam___closed__5();
lean_mark_persistent(l_RobustFlipper_Flipper_primrec___autoParam___closed__5);
l_RobustFlipper_Flipper_primrec___autoParam___closed__6 = _init_l_RobustFlipper_Flipper_primrec___autoParam___closed__6();
lean_mark_persistent(l_RobustFlipper_Flipper_primrec___autoParam___closed__6);
l_RobustFlipper_Flipper_primrec___autoParam___closed__7 = _init_l_RobustFlipper_Flipper_primrec___autoParam___closed__7();
lean_mark_persistent(l_RobustFlipper_Flipper_primrec___autoParam___closed__7);
l_RobustFlipper_Flipper_primrec___autoParam___closed__8 = _init_l_RobustFlipper_Flipper_primrec___autoParam___closed__8();
lean_mark_persistent(l_RobustFlipper_Flipper_primrec___autoParam___closed__8);
l_RobustFlipper_Flipper_primrec___autoParam___closed__9 = _init_l_RobustFlipper_Flipper_primrec___autoParam___closed__9();
lean_mark_persistent(l_RobustFlipper_Flipper_primrec___autoParam___closed__9);
l_RobustFlipper_Flipper_primrec___autoParam___closed__10 = _init_l_RobustFlipper_Flipper_primrec___autoParam___closed__10();
lean_mark_persistent(l_RobustFlipper_Flipper_primrec___autoParam___closed__10);
l_RobustFlipper_Flipper_primrec___autoParam___closed__11 = _init_l_RobustFlipper_Flipper_primrec___autoParam___closed__11();
lean_mark_persistent(l_RobustFlipper_Flipper_primrec___autoParam___closed__11);
l_RobustFlipper_Flipper_primrec___autoParam___closed__12 = _init_l_RobustFlipper_Flipper_primrec___autoParam___closed__12();
lean_mark_persistent(l_RobustFlipper_Flipper_primrec___autoParam___closed__12);
l_RobustFlipper_Flipper_primrec___autoParam___closed__13 = _init_l_RobustFlipper_Flipper_primrec___autoParam___closed__13();
lean_mark_persistent(l_RobustFlipper_Flipper_primrec___autoParam___closed__13);
l_RobustFlipper_Flipper_primrec___autoParam___closed__14 = _init_l_RobustFlipper_Flipper_primrec___autoParam___closed__14();
lean_mark_persistent(l_RobustFlipper_Flipper_primrec___autoParam___closed__14);
l_RobustFlipper_Flipper_primrec___autoParam___closed__15 = _init_l_RobustFlipper_Flipper_primrec___autoParam___closed__15();
lean_mark_persistent(l_RobustFlipper_Flipper_primrec___autoParam___closed__15);
l_RobustFlipper_Flipper_primrec___autoParam___closed__16 = _init_l_RobustFlipper_Flipper_primrec___autoParam___closed__16();
lean_mark_persistent(l_RobustFlipper_Flipper_primrec___autoParam___closed__16);
l_RobustFlipper_Flipper_primrec___autoParam___closed__17 = _init_l_RobustFlipper_Flipper_primrec___autoParam___closed__17();
lean_mark_persistent(l_RobustFlipper_Flipper_primrec___autoParam___closed__17);
l_RobustFlipper_Flipper_primrec___autoParam___closed__18 = _init_l_RobustFlipper_Flipper_primrec___autoParam___closed__18();
lean_mark_persistent(l_RobustFlipper_Flipper_primrec___autoParam___closed__18);
l_RobustFlipper_Flipper_primrec___autoParam___closed__19 = _init_l_RobustFlipper_Flipper_primrec___autoParam___closed__19();
lean_mark_persistent(l_RobustFlipper_Flipper_primrec___autoParam___closed__19);
l_RobustFlipper_Flipper_primrec___autoParam___closed__20 = _init_l_RobustFlipper_Flipper_primrec___autoParam___closed__20();
lean_mark_persistent(l_RobustFlipper_Flipper_primrec___autoParam___closed__20);
l_RobustFlipper_Flipper_primrec___autoParam___closed__21 = _init_l_RobustFlipper_Flipper_primrec___autoParam___closed__21();
lean_mark_persistent(l_RobustFlipper_Flipper_primrec___autoParam___closed__21);
l_RobustFlipper_Flipper_primrec___autoParam___closed__22 = _init_l_RobustFlipper_Flipper_primrec___autoParam___closed__22();
lean_mark_persistent(l_RobustFlipper_Flipper_primrec___autoParam___closed__22);
l_RobustFlipper_Flipper_primrec___autoParam___closed__23 = _init_l_RobustFlipper_Flipper_primrec___autoParam___closed__23();
lean_mark_persistent(l_RobustFlipper_Flipper_primrec___autoParam___closed__23);
l_RobustFlipper_Flipper_primrec___autoParam___closed__24 = _init_l_RobustFlipper_Flipper_primrec___autoParam___closed__24();
lean_mark_persistent(l_RobustFlipper_Flipper_primrec___autoParam___closed__24);
l_RobustFlipper_Flipper_primrec___autoParam___closed__25 = _init_l_RobustFlipper_Flipper_primrec___autoParam___closed__25();
lean_mark_persistent(l_RobustFlipper_Flipper_primrec___autoParam___closed__25);
l_RobustFlipper_Flipper_primrec___autoParam___closed__26 = _init_l_RobustFlipper_Flipper_primrec___autoParam___closed__26();
lean_mark_persistent(l_RobustFlipper_Flipper_primrec___autoParam___closed__26);
l_RobustFlipper_Flipper_primrec___autoParam___closed__27 = _init_l_RobustFlipper_Flipper_primrec___autoParam___closed__27();
lean_mark_persistent(l_RobustFlipper_Flipper_primrec___autoParam___closed__27);
l_RobustFlipper_Flipper_primrec___autoParam___closed__28 = _init_l_RobustFlipper_Flipper_primrec___autoParam___closed__28();
lean_mark_persistent(l_RobustFlipper_Flipper_primrec___autoParam___closed__28);
l_RobustFlipper_Flipper_primrec___autoParam___closed__29 = _init_l_RobustFlipper_Flipper_primrec___autoParam___closed__29();
lean_mark_persistent(l_RobustFlipper_Flipper_primrec___autoParam___closed__29);
l_RobustFlipper_Flipper_primrec___autoParam___closed__30 = _init_l_RobustFlipper_Flipper_primrec___autoParam___closed__30();
lean_mark_persistent(l_RobustFlipper_Flipper_primrec___autoParam___closed__30);
l_RobustFlipper_Flipper_primrec___autoParam___closed__31 = _init_l_RobustFlipper_Flipper_primrec___autoParam___closed__31();
lean_mark_persistent(l_RobustFlipper_Flipper_primrec___autoParam___closed__31);
l_RobustFlipper_Flipper_primrec___autoParam___closed__32 = _init_l_RobustFlipper_Flipper_primrec___autoParam___closed__32();
lean_mark_persistent(l_RobustFlipper_Flipper_primrec___autoParam___closed__32);
l_RobustFlipper_Flipper_primrec___autoParam___closed__33 = _init_l_RobustFlipper_Flipper_primrec___autoParam___closed__33();
lean_mark_persistent(l_RobustFlipper_Flipper_primrec___autoParam___closed__33);
l_RobustFlipper_Flipper_primrec___autoParam___closed__34 = _init_l_RobustFlipper_Flipper_primrec___autoParam___closed__34();
lean_mark_persistent(l_RobustFlipper_Flipper_primrec___autoParam___closed__34);
l_RobustFlipper_Flipper_primrec___autoParam___closed__35 = _init_l_RobustFlipper_Flipper_primrec___autoParam___closed__35();
lean_mark_persistent(l_RobustFlipper_Flipper_primrec___autoParam___closed__35);
l_RobustFlipper_Flipper_primrec___autoParam___closed__36 = _init_l_RobustFlipper_Flipper_primrec___autoParam___closed__36();
lean_mark_persistent(l_RobustFlipper_Flipper_primrec___autoParam___closed__36);
l_RobustFlipper_Flipper_primrec___autoParam___closed__37 = _init_l_RobustFlipper_Flipper_primrec___autoParam___closed__37();
lean_mark_persistent(l_RobustFlipper_Flipper_primrec___autoParam___closed__37);
l_RobustFlipper_Flipper_primrec___autoParam___closed__38 = _init_l_RobustFlipper_Flipper_primrec___autoParam___closed__38();
lean_mark_persistent(l_RobustFlipper_Flipper_primrec___autoParam___closed__38);
l_RobustFlipper_Flipper_primrec___autoParam___closed__39 = _init_l_RobustFlipper_Flipper_primrec___autoParam___closed__39();
lean_mark_persistent(l_RobustFlipper_Flipper_primrec___autoParam___closed__39);
l_RobustFlipper_Flipper_primrec___autoParam___closed__40 = _init_l_RobustFlipper_Flipper_primrec___autoParam___closed__40();
lean_mark_persistent(l_RobustFlipper_Flipper_primrec___autoParam___closed__40);
l_RobustFlipper_Flipper_primrec___autoParam___closed__41 = _init_l_RobustFlipper_Flipper_primrec___autoParam___closed__41();
lean_mark_persistent(l_RobustFlipper_Flipper_primrec___autoParam___closed__41);
l_RobustFlipper_Flipper_primrec___autoParam___closed__42 = _init_l_RobustFlipper_Flipper_primrec___autoParam___closed__42();
lean_mark_persistent(l_RobustFlipper_Flipper_primrec___autoParam___closed__42);
l_RobustFlipper_Flipper_primrec___autoParam___closed__43 = _init_l_RobustFlipper_Flipper_primrec___autoParam___closed__43();
lean_mark_persistent(l_RobustFlipper_Flipper_primrec___autoParam___closed__43);
l_RobustFlipper_Flipper_primrec___autoParam___closed__44 = _init_l_RobustFlipper_Flipper_primrec___autoParam___closed__44();
lean_mark_persistent(l_RobustFlipper_Flipper_primrec___autoParam___closed__44);
l_RobustFlipper_Flipper_primrec___autoParam___closed__45 = _init_l_RobustFlipper_Flipper_primrec___autoParam___closed__45();
lean_mark_persistent(l_RobustFlipper_Flipper_primrec___autoParam___closed__45);
l_RobustFlipper_Flipper_primrec___autoParam___closed__46 = _init_l_RobustFlipper_Flipper_primrec___autoParam___closed__46();
lean_mark_persistent(l_RobustFlipper_Flipper_primrec___autoParam___closed__46);
l_RobustFlipper_Flipper_primrec___autoParam___closed__47 = _init_l_RobustFlipper_Flipper_primrec___autoParam___closed__47();
lean_mark_persistent(l_RobustFlipper_Flipper_primrec___autoParam___closed__47);
l_RobustFlipper_Flipper_primrec___autoParam___closed__48 = _init_l_RobustFlipper_Flipper_primrec___autoParam___closed__48();
lean_mark_persistent(l_RobustFlipper_Flipper_primrec___autoParam___closed__48);
l_RobustFlipper_Flipper_primrec___autoParam___closed__49 = _init_l_RobustFlipper_Flipper_primrec___autoParam___closed__49();
lean_mark_persistent(l_RobustFlipper_Flipper_primrec___autoParam___closed__49);
l_RobustFlipper_Flipper_primrec___autoParam___closed__50 = _init_l_RobustFlipper_Flipper_primrec___autoParam___closed__50();
lean_mark_persistent(l_RobustFlipper_Flipper_primrec___autoParam___closed__50);
l_RobustFlipper_Flipper_primrec___autoParam___closed__51 = _init_l_RobustFlipper_Flipper_primrec___autoParam___closed__51();
lean_mark_persistent(l_RobustFlipper_Flipper_primrec___autoParam___closed__51);
l_RobustFlipper_Flipper_primrec___autoParam___closed__52 = _init_l_RobustFlipper_Flipper_primrec___autoParam___closed__52();
lean_mark_persistent(l_RobustFlipper_Flipper_primrec___autoParam___closed__52);
l_RobustFlipper_Flipper_primrec___autoParam___closed__53 = _init_l_RobustFlipper_Flipper_primrec___autoParam___closed__53();
lean_mark_persistent(l_RobustFlipper_Flipper_primrec___autoParam___closed__53);
l_RobustFlipper_Flipper_primrec___autoParam___closed__54 = _init_l_RobustFlipper_Flipper_primrec___autoParam___closed__54();
lean_mark_persistent(l_RobustFlipper_Flipper_primrec___autoParam___closed__54);
l_RobustFlipper_Flipper_primrec___autoParam___closed__55 = _init_l_RobustFlipper_Flipper_primrec___autoParam___closed__55();
lean_mark_persistent(l_RobustFlipper_Flipper_primrec___autoParam___closed__55);
l_RobustFlipper_Flipper_primrec___autoParam___closed__56 = _init_l_RobustFlipper_Flipper_primrec___autoParam___closed__56();
lean_mark_persistent(l_RobustFlipper_Flipper_primrec___autoParam___closed__56);
l_RobustFlipper_Flipper_primrec___autoParam___closed__57 = _init_l_RobustFlipper_Flipper_primrec___autoParam___closed__57();
lean_mark_persistent(l_RobustFlipper_Flipper_primrec___autoParam___closed__57);
l_RobustFlipper_Flipper_primrec___autoParam___closed__58 = _init_l_RobustFlipper_Flipper_primrec___autoParam___closed__58();
lean_mark_persistent(l_RobustFlipper_Flipper_primrec___autoParam___closed__58);
l_RobustFlipper_Flipper_primrec___autoParam___closed__59 = _init_l_RobustFlipper_Flipper_primrec___autoParam___closed__59();
lean_mark_persistent(l_RobustFlipper_Flipper_primrec___autoParam___closed__59);
l_RobustFlipper_Flipper_primrec___autoParam___closed__60 = _init_l_RobustFlipper_Flipper_primrec___autoParam___closed__60();
lean_mark_persistent(l_RobustFlipper_Flipper_primrec___autoParam___closed__60);
l_RobustFlipper_Flipper_primrec___autoParam___closed__61 = _init_l_RobustFlipper_Flipper_primrec___autoParam___closed__61();
lean_mark_persistent(l_RobustFlipper_Flipper_primrec___autoParam___closed__61);
l_RobustFlipper_Flipper_primrec___autoParam___closed__62 = _init_l_RobustFlipper_Flipper_primrec___autoParam___closed__62();
lean_mark_persistent(l_RobustFlipper_Flipper_primrec___autoParam___closed__62);
l_RobustFlipper_Flipper_primrec___autoParam___closed__63 = _init_l_RobustFlipper_Flipper_primrec___autoParam___closed__63();
lean_mark_persistent(l_RobustFlipper_Flipper_primrec___autoParam___closed__63);
l_RobustFlipper_Flipper_primrec___autoParam___closed__64 = _init_l_RobustFlipper_Flipper_primrec___autoParam___closed__64();
lean_mark_persistent(l_RobustFlipper_Flipper_primrec___autoParam___closed__64);
l_RobustFlipper_Flipper_primrec___autoParam___closed__65 = _init_l_RobustFlipper_Flipper_primrec___autoParam___closed__65();
lean_mark_persistent(l_RobustFlipper_Flipper_primrec___autoParam___closed__65);
l_RobustFlipper_Flipper_primrec___autoParam___closed__66 = _init_l_RobustFlipper_Flipper_primrec___autoParam___closed__66();
lean_mark_persistent(l_RobustFlipper_Flipper_primrec___autoParam___closed__66);
l_RobustFlipper_Flipper_primrec___autoParam___closed__67 = _init_l_RobustFlipper_Flipper_primrec___autoParam___closed__67();
lean_mark_persistent(l_RobustFlipper_Flipper_primrec___autoParam___closed__67);
l_RobustFlipper_Flipper_primrec___autoParam___closed__68 = _init_l_RobustFlipper_Flipper_primrec___autoParam___closed__68();
lean_mark_persistent(l_RobustFlipper_Flipper_primrec___autoParam___closed__68);
l_RobustFlipper_Flipper_primrec___autoParam___closed__69 = _init_l_RobustFlipper_Flipper_primrec___autoParam___closed__69();
lean_mark_persistent(l_RobustFlipper_Flipper_primrec___autoParam___closed__69);
l_RobustFlipper_Flipper_primrec___autoParam___closed__70 = _init_l_RobustFlipper_Flipper_primrec___autoParam___closed__70();
lean_mark_persistent(l_RobustFlipper_Flipper_primrec___autoParam___closed__70);
l_RobustFlipper_Flipper_primrec___autoParam___closed__71 = _init_l_RobustFlipper_Flipper_primrec___autoParam___closed__71();
lean_mark_persistent(l_RobustFlipper_Flipper_primrec___autoParam___closed__71);
l_RobustFlipper_Flipper_primrec___autoParam___closed__72 = _init_l_RobustFlipper_Flipper_primrec___autoParam___closed__72();
lean_mark_persistent(l_RobustFlipper_Flipper_primrec___autoParam___closed__72);
l_RobustFlipper_Flipper_primrec___autoParam___closed__73 = _init_l_RobustFlipper_Flipper_primrec___autoParam___closed__73();
lean_mark_persistent(l_RobustFlipper_Flipper_primrec___autoParam___closed__73);
l_RobustFlipper_Flipper_primrec___autoParam___closed__74 = _init_l_RobustFlipper_Flipper_primrec___autoParam___closed__74();
lean_mark_persistent(l_RobustFlipper_Flipper_primrec___autoParam___closed__74);
l_RobustFlipper_Flipper_primrec___autoParam___closed__75 = _init_l_RobustFlipper_Flipper_primrec___autoParam___closed__75();
lean_mark_persistent(l_RobustFlipper_Flipper_primrec___autoParam___closed__75);
l_RobustFlipper_Flipper_primrec___autoParam___closed__76 = _init_l_RobustFlipper_Flipper_primrec___autoParam___closed__76();
lean_mark_persistent(l_RobustFlipper_Flipper_primrec___autoParam___closed__76);
l_RobustFlipper_Flipper_primrec___autoParam___closed__77 = _init_l_RobustFlipper_Flipper_primrec___autoParam___closed__77();
lean_mark_persistent(l_RobustFlipper_Flipper_primrec___autoParam___closed__77);
l_RobustFlipper_Flipper_primrec___autoParam___closed__78 = _init_l_RobustFlipper_Flipper_primrec___autoParam___closed__78();
lean_mark_persistent(l_RobustFlipper_Flipper_primrec___autoParam___closed__78);
l_RobustFlipper_Flipper_primrec___autoParam___closed__79 = _init_l_RobustFlipper_Flipper_primrec___autoParam___closed__79();
lean_mark_persistent(l_RobustFlipper_Flipper_primrec___autoParam___closed__79);
l_RobustFlipper_Flipper_primrec___autoParam___closed__80 = _init_l_RobustFlipper_Flipper_primrec___autoParam___closed__80();
lean_mark_persistent(l_RobustFlipper_Flipper_primrec___autoParam___closed__80);
l_RobustFlipper_Flipper_primrec___autoParam___closed__81 = _init_l_RobustFlipper_Flipper_primrec___autoParam___closed__81();
lean_mark_persistent(l_RobustFlipper_Flipper_primrec___autoParam___closed__81);
l_RobustFlipper_Flipper_primrec___autoParam___closed__82 = _init_l_RobustFlipper_Flipper_primrec___autoParam___closed__82();
lean_mark_persistent(l_RobustFlipper_Flipper_primrec___autoParam___closed__82);
l_RobustFlipper_Flipper_primrec___autoParam___closed__83 = _init_l_RobustFlipper_Flipper_primrec___autoParam___closed__83();
lean_mark_persistent(l_RobustFlipper_Flipper_primrec___autoParam___closed__83);
l_RobustFlipper_Flipper_primrec___autoParam___closed__84 = _init_l_RobustFlipper_Flipper_primrec___autoParam___closed__84();
lean_mark_persistent(l_RobustFlipper_Flipper_primrec___autoParam___closed__84);
l_RobustFlipper_Flipper_primrec___autoParam___closed__85 = _init_l_RobustFlipper_Flipper_primrec___autoParam___closed__85();
lean_mark_persistent(l_RobustFlipper_Flipper_primrec___autoParam___closed__85);
l_RobustFlipper_Flipper_primrec___autoParam___closed__86 = _init_l_RobustFlipper_Flipper_primrec___autoParam___closed__86();
lean_mark_persistent(l_RobustFlipper_Flipper_primrec___autoParam___closed__86);
l_RobustFlipper_Flipper_primrec___autoParam___closed__87 = _init_l_RobustFlipper_Flipper_primrec___autoParam___closed__87();
lean_mark_persistent(l_RobustFlipper_Flipper_primrec___autoParam___closed__87);
l_RobustFlipper_Flipper_primrec___autoParam___closed__88 = _init_l_RobustFlipper_Flipper_primrec___autoParam___closed__88();
lean_mark_persistent(l_RobustFlipper_Flipper_primrec___autoParam___closed__88);
l_RobustFlipper_Flipper_primrec___autoParam___closed__89 = _init_l_RobustFlipper_Flipper_primrec___autoParam___closed__89();
lean_mark_persistent(l_RobustFlipper_Flipper_primrec___autoParam___closed__89);
l_RobustFlipper_Flipper_primrec___autoParam___closed__90 = _init_l_RobustFlipper_Flipper_primrec___autoParam___closed__90();
lean_mark_persistent(l_RobustFlipper_Flipper_primrec___autoParam___closed__90);
l_RobustFlipper_Flipper_primrec___autoParam___closed__91 = _init_l_RobustFlipper_Flipper_primrec___autoParam___closed__91();
lean_mark_persistent(l_RobustFlipper_Flipper_primrec___autoParam___closed__91);
l_RobustFlipper_Flipper_primrec___autoParam___closed__92 = _init_l_RobustFlipper_Flipper_primrec___autoParam___closed__92();
lean_mark_persistent(l_RobustFlipper_Flipper_primrec___autoParam___closed__92);
l_RobustFlipper_Flipper_primrec___autoParam___closed__93 = _init_l_RobustFlipper_Flipper_primrec___autoParam___closed__93();
lean_mark_persistent(l_RobustFlipper_Flipper_primrec___autoParam___closed__93);
l_RobustFlipper_Flipper_primrec___autoParam___closed__94 = _init_l_RobustFlipper_Flipper_primrec___autoParam___closed__94();
lean_mark_persistent(l_RobustFlipper_Flipper_primrec___autoParam___closed__94);
l_RobustFlipper_Flipper_primrec___autoParam___closed__95 = _init_l_RobustFlipper_Flipper_primrec___autoParam___closed__95();
lean_mark_persistent(l_RobustFlipper_Flipper_primrec___autoParam___closed__95);
l_RobustFlipper_Flipper_primrec___autoParam___closed__96 = _init_l_RobustFlipper_Flipper_primrec___autoParam___closed__96();
lean_mark_persistent(l_RobustFlipper_Flipper_primrec___autoParam___closed__96);
l_RobustFlipper_Flipper_primrec___autoParam___closed__97 = _init_l_RobustFlipper_Flipper_primrec___autoParam___closed__97();
lean_mark_persistent(l_RobustFlipper_Flipper_primrec___autoParam___closed__97);
l_RobustFlipper_Flipper_primrec___autoParam___closed__98 = _init_l_RobustFlipper_Flipper_primrec___autoParam___closed__98();
lean_mark_persistent(l_RobustFlipper_Flipper_primrec___autoParam___closed__98);
l_RobustFlipper_Flipper_primrec___autoParam___closed__99 = _init_l_RobustFlipper_Flipper_primrec___autoParam___closed__99();
lean_mark_persistent(l_RobustFlipper_Flipper_primrec___autoParam___closed__99);
l_RobustFlipper_Flipper_primrec___autoParam___closed__100 = _init_l_RobustFlipper_Flipper_primrec___autoParam___closed__100();
lean_mark_persistent(l_RobustFlipper_Flipper_primrec___autoParam___closed__100);
l_RobustFlipper_Flipper_primrec___autoParam___closed__101 = _init_l_RobustFlipper_Flipper_primrec___autoParam___closed__101();
lean_mark_persistent(l_RobustFlipper_Flipper_primrec___autoParam___closed__101);
l_RobustFlipper_Flipper_primrec___autoParam___closed__102 = _init_l_RobustFlipper_Flipper_primrec___autoParam___closed__102();
lean_mark_persistent(l_RobustFlipper_Flipper_primrec___autoParam___closed__102);
l_RobustFlipper_Flipper_primrec___autoParam___closed__103 = _init_l_RobustFlipper_Flipper_primrec___autoParam___closed__103();
lean_mark_persistent(l_RobustFlipper_Flipper_primrec___autoParam___closed__103);
l_RobustFlipper_Flipper_primrec___autoParam___closed__104 = _init_l_RobustFlipper_Flipper_primrec___autoParam___closed__104();
lean_mark_persistent(l_RobustFlipper_Flipper_primrec___autoParam___closed__104);
l_RobustFlipper_Flipper_primrec___autoParam___closed__105 = _init_l_RobustFlipper_Flipper_primrec___autoParam___closed__105();
lean_mark_persistent(l_RobustFlipper_Flipper_primrec___autoParam___closed__105);
l_RobustFlipper_Flipper_primrec___autoParam___closed__106 = _init_l_RobustFlipper_Flipper_primrec___autoParam___closed__106();
lean_mark_persistent(l_RobustFlipper_Flipper_primrec___autoParam___closed__106);
l_RobustFlipper_Flipper_primrec___autoParam___closed__107 = _init_l_RobustFlipper_Flipper_primrec___autoParam___closed__107();
lean_mark_persistent(l_RobustFlipper_Flipper_primrec___autoParam___closed__107);
l_RobustFlipper_Flipper_primrec___autoParam___closed__108 = _init_l_RobustFlipper_Flipper_primrec___autoParam___closed__108();
lean_mark_persistent(l_RobustFlipper_Flipper_primrec___autoParam___closed__108);
l_RobustFlipper_Flipper_primrec___autoParam___closed__109 = _init_l_RobustFlipper_Flipper_primrec___autoParam___closed__109();
lean_mark_persistent(l_RobustFlipper_Flipper_primrec___autoParam___closed__109);
l_RobustFlipper_Flipper_primrec___autoParam___closed__110 = _init_l_RobustFlipper_Flipper_primrec___autoParam___closed__110();
lean_mark_persistent(l_RobustFlipper_Flipper_primrec___autoParam___closed__110);
l_RobustFlipper_Flipper_primrec___autoParam___closed__111 = _init_l_RobustFlipper_Flipper_primrec___autoParam___closed__111();
lean_mark_persistent(l_RobustFlipper_Flipper_primrec___autoParam___closed__111);
l_RobustFlipper_Flipper_primrec___autoParam___closed__112 = _init_l_RobustFlipper_Flipper_primrec___autoParam___closed__112();
lean_mark_persistent(l_RobustFlipper_Flipper_primrec___autoParam___closed__112);
l_RobustFlipper_Flipper_primrec___autoParam___closed__113 = _init_l_RobustFlipper_Flipper_primrec___autoParam___closed__113();
lean_mark_persistent(l_RobustFlipper_Flipper_primrec___autoParam___closed__113);
l_RobustFlipper_Flipper_primrec___autoParam___closed__114 = _init_l_RobustFlipper_Flipper_primrec___autoParam___closed__114();
lean_mark_persistent(l_RobustFlipper_Flipper_primrec___autoParam___closed__114);
l_RobustFlipper_Flipper_primrec___autoParam___closed__115 = _init_l_RobustFlipper_Flipper_primrec___autoParam___closed__115();
lean_mark_persistent(l_RobustFlipper_Flipper_primrec___autoParam___closed__115);
l_RobustFlipper_Flipper_primrec___autoParam___closed__116 = _init_l_RobustFlipper_Flipper_primrec___autoParam___closed__116();
lean_mark_persistent(l_RobustFlipper_Flipper_primrec___autoParam___closed__116);
l_RobustFlipper_Flipper_primrec___autoParam___closed__117 = _init_l_RobustFlipper_Flipper_primrec___autoParam___closed__117();
lean_mark_persistent(l_RobustFlipper_Flipper_primrec___autoParam___closed__117);
l_RobustFlipper_Flipper_primrec___autoParam___closed__118 = _init_l_RobustFlipper_Flipper_primrec___autoParam___closed__118();
lean_mark_persistent(l_RobustFlipper_Flipper_primrec___autoParam___closed__118);
l_RobustFlipper_Flipper_primrec___autoParam___closed__119 = _init_l_RobustFlipper_Flipper_primrec___autoParam___closed__119();
lean_mark_persistent(l_RobustFlipper_Flipper_primrec___autoParam___closed__119);
l_RobustFlipper_Flipper_primrec___autoParam___closed__120 = _init_l_RobustFlipper_Flipper_primrec___autoParam___closed__120();
lean_mark_persistent(l_RobustFlipper_Flipper_primrec___autoParam___closed__120);
l_RobustFlipper_Flipper_primrec___autoParam___closed__121 = _init_l_RobustFlipper_Flipper_primrec___autoParam___closed__121();
lean_mark_persistent(l_RobustFlipper_Flipper_primrec___autoParam___closed__121);
l_RobustFlipper_Flipper_primrec___autoParam___closed__122 = _init_l_RobustFlipper_Flipper_primrec___autoParam___closed__122();
lean_mark_persistent(l_RobustFlipper_Flipper_primrec___autoParam___closed__122);
l_RobustFlipper_Flipper_primrec___autoParam___closed__123 = _init_l_RobustFlipper_Flipper_primrec___autoParam___closed__123();
lean_mark_persistent(l_RobustFlipper_Flipper_primrec___autoParam___closed__123);
l_RobustFlipper_Flipper_primrec___autoParam___closed__124 = _init_l_RobustFlipper_Flipper_primrec___autoParam___closed__124();
lean_mark_persistent(l_RobustFlipper_Flipper_primrec___autoParam___closed__124);
l_RobustFlipper_Flipper_primrec___autoParam___closed__125 = _init_l_RobustFlipper_Flipper_primrec___autoParam___closed__125();
lean_mark_persistent(l_RobustFlipper_Flipper_primrec___autoParam___closed__125);
l_RobustFlipper_Flipper_primrec___autoParam___closed__126 = _init_l_RobustFlipper_Flipper_primrec___autoParam___closed__126();
lean_mark_persistent(l_RobustFlipper_Flipper_primrec___autoParam___closed__126);
l_RobustFlipper_Flipper_primrec___autoParam___closed__127 = _init_l_RobustFlipper_Flipper_primrec___autoParam___closed__127();
lean_mark_persistent(l_RobustFlipper_Flipper_primrec___autoParam___closed__127);
l_RobustFlipper_Flipper_primrec___autoParam___closed__128 = _init_l_RobustFlipper_Flipper_primrec___autoParam___closed__128();
lean_mark_persistent(l_RobustFlipper_Flipper_primrec___autoParam___closed__128);
l_RobustFlipper_Flipper_primrec___autoParam___closed__129 = _init_l_RobustFlipper_Flipper_primrec___autoParam___closed__129();
lean_mark_persistent(l_RobustFlipper_Flipper_primrec___autoParam___closed__129);
l_RobustFlipper_Flipper_primrec___autoParam___closed__130 = _init_l_RobustFlipper_Flipper_primrec___autoParam___closed__130();
lean_mark_persistent(l_RobustFlipper_Flipper_primrec___autoParam___closed__130);
l_RobustFlipper_Flipper_primrec___autoParam___closed__131 = _init_l_RobustFlipper_Flipper_primrec___autoParam___closed__131();
lean_mark_persistent(l_RobustFlipper_Flipper_primrec___autoParam___closed__131);
l_RobustFlipper_Flipper_primrec___autoParam___closed__132 = _init_l_RobustFlipper_Flipper_primrec___autoParam___closed__132();
lean_mark_persistent(l_RobustFlipper_Flipper_primrec___autoParam___closed__132);
l_RobustFlipper_Flipper_primrec___autoParam___closed__133 = _init_l_RobustFlipper_Flipper_primrec___autoParam___closed__133();
lean_mark_persistent(l_RobustFlipper_Flipper_primrec___autoParam___closed__133);
l_RobustFlipper_Flipper_primrec___autoParam___closed__134 = _init_l_RobustFlipper_Flipper_primrec___autoParam___closed__134();
lean_mark_persistent(l_RobustFlipper_Flipper_primrec___autoParam___closed__134);
l_RobustFlipper_Flipper_primrec___autoParam___closed__135 = _init_l_RobustFlipper_Flipper_primrec___autoParam___closed__135();
lean_mark_persistent(l_RobustFlipper_Flipper_primrec___autoParam___closed__135);
l_RobustFlipper_Flipper_primrec___autoParam___closed__136 = _init_l_RobustFlipper_Flipper_primrec___autoParam___closed__136();
lean_mark_persistent(l_RobustFlipper_Flipper_primrec___autoParam___closed__136);
l_RobustFlipper_Flipper_primrec___autoParam___closed__137 = _init_l_RobustFlipper_Flipper_primrec___autoParam___closed__137();
lean_mark_persistent(l_RobustFlipper_Flipper_primrec___autoParam___closed__137);
l_RobustFlipper_Flipper_primrec___autoParam___closed__138 = _init_l_RobustFlipper_Flipper_primrec___autoParam___closed__138();
lean_mark_persistent(l_RobustFlipper_Flipper_primrec___autoParam___closed__138);
l_RobustFlipper_Flipper_primrec___autoParam = _init_l_RobustFlipper_Flipper_primrec___autoParam();
lean_mark_persistent(l_RobustFlipper_Flipper_primrec___autoParam);
l_RobustFlipper_Flipper_ne__of__correct___autoParam___closed__1 = _init_l_RobustFlipper_Flipper_ne__of__correct___autoParam___closed__1();
lean_mark_persistent(l_RobustFlipper_Flipper_ne__of__correct___autoParam___closed__1);
l_RobustFlipper_Flipper_ne__of__correct___autoParam___closed__2 = _init_l_RobustFlipper_Flipper_ne__of__correct___autoParam___closed__2();
lean_mark_persistent(l_RobustFlipper_Flipper_ne__of__correct___autoParam___closed__2);
l_RobustFlipper_Flipper_ne__of__correct___autoParam___closed__3 = _init_l_RobustFlipper_Flipper_ne__of__correct___autoParam___closed__3();
lean_mark_persistent(l_RobustFlipper_Flipper_ne__of__correct___autoParam___closed__3);
l_RobustFlipper_Flipper_ne__of__correct___autoParam___closed__4 = _init_l_RobustFlipper_Flipper_ne__of__correct___autoParam___closed__4();
lean_mark_persistent(l_RobustFlipper_Flipper_ne__of__correct___autoParam___closed__4);
l_RobustFlipper_Flipper_ne__of__correct___autoParam___closed__5 = _init_l_RobustFlipper_Flipper_ne__of__correct___autoParam___closed__5();
lean_mark_persistent(l_RobustFlipper_Flipper_ne__of__correct___autoParam___closed__5);
l_RobustFlipper_Flipper_ne__of__correct___autoParam___closed__6 = _init_l_RobustFlipper_Flipper_ne__of__correct___autoParam___closed__6();
lean_mark_persistent(l_RobustFlipper_Flipper_ne__of__correct___autoParam___closed__6);
l_RobustFlipper_Flipper_ne__of__correct___autoParam___closed__7 = _init_l_RobustFlipper_Flipper_ne__of__correct___autoParam___closed__7();
lean_mark_persistent(l_RobustFlipper_Flipper_ne__of__correct___autoParam___closed__7);
l_RobustFlipper_Flipper_ne__of__correct___autoParam___closed__8 = _init_l_RobustFlipper_Flipper_ne__of__correct___autoParam___closed__8();
lean_mark_persistent(l_RobustFlipper_Flipper_ne__of__correct___autoParam___closed__8);
l_RobustFlipper_Flipper_ne__of__correct___autoParam___closed__9 = _init_l_RobustFlipper_Flipper_ne__of__correct___autoParam___closed__9();
lean_mark_persistent(l_RobustFlipper_Flipper_ne__of__correct___autoParam___closed__9);
l_RobustFlipper_Flipper_ne__of__correct___autoParam___closed__10 = _init_l_RobustFlipper_Flipper_ne__of__correct___autoParam___closed__10();
lean_mark_persistent(l_RobustFlipper_Flipper_ne__of__correct___autoParam___closed__10);
l_RobustFlipper_Flipper_ne__of__correct___autoParam___closed__11 = _init_l_RobustFlipper_Flipper_ne__of__correct___autoParam___closed__11();
lean_mark_persistent(l_RobustFlipper_Flipper_ne__of__correct___autoParam___closed__11);
l_RobustFlipper_Flipper_ne__of__correct___autoParam___closed__12 = _init_l_RobustFlipper_Flipper_ne__of__correct___autoParam___closed__12();
lean_mark_persistent(l_RobustFlipper_Flipper_ne__of__correct___autoParam___closed__12);
l_RobustFlipper_Flipper_ne__of__correct___autoParam___closed__13 = _init_l_RobustFlipper_Flipper_ne__of__correct___autoParam___closed__13();
lean_mark_persistent(l_RobustFlipper_Flipper_ne__of__correct___autoParam___closed__13);
l_RobustFlipper_Flipper_ne__of__correct___autoParam___closed__14 = _init_l_RobustFlipper_Flipper_ne__of__correct___autoParam___closed__14();
lean_mark_persistent(l_RobustFlipper_Flipper_ne__of__correct___autoParam___closed__14);
l_RobustFlipper_Flipper_ne__of__correct___autoParam___closed__15 = _init_l_RobustFlipper_Flipper_ne__of__correct___autoParam___closed__15();
lean_mark_persistent(l_RobustFlipper_Flipper_ne__of__correct___autoParam___closed__15);
l_RobustFlipper_Flipper_ne__of__correct___autoParam___closed__16 = _init_l_RobustFlipper_Flipper_ne__of__correct___autoParam___closed__16();
lean_mark_persistent(l_RobustFlipper_Flipper_ne__of__correct___autoParam___closed__16);
l_RobustFlipper_Flipper_ne__of__correct___autoParam___closed__17 = _init_l_RobustFlipper_Flipper_ne__of__correct___autoParam___closed__17();
lean_mark_persistent(l_RobustFlipper_Flipper_ne__of__correct___autoParam___closed__17);
l_RobustFlipper_Flipper_ne__of__correct___autoParam___closed__18 = _init_l_RobustFlipper_Flipper_ne__of__correct___autoParam___closed__18();
lean_mark_persistent(l_RobustFlipper_Flipper_ne__of__correct___autoParam___closed__18);
l_RobustFlipper_Flipper_ne__of__correct___autoParam___closed__19 = _init_l_RobustFlipper_Flipper_ne__of__correct___autoParam___closed__19();
lean_mark_persistent(l_RobustFlipper_Flipper_ne__of__correct___autoParam___closed__19);
l_RobustFlipper_Flipper_ne__of__correct___autoParam___closed__20 = _init_l_RobustFlipper_Flipper_ne__of__correct___autoParam___closed__20();
lean_mark_persistent(l_RobustFlipper_Flipper_ne__of__correct___autoParam___closed__20);
l_RobustFlipper_Flipper_ne__of__correct___autoParam___closed__21 = _init_l_RobustFlipper_Flipper_ne__of__correct___autoParam___closed__21();
lean_mark_persistent(l_RobustFlipper_Flipper_ne__of__correct___autoParam___closed__21);
l_RobustFlipper_Flipper_ne__of__correct___autoParam___closed__22 = _init_l_RobustFlipper_Flipper_ne__of__correct___autoParam___closed__22();
lean_mark_persistent(l_RobustFlipper_Flipper_ne__of__correct___autoParam___closed__22);
l_RobustFlipper_Flipper_ne__of__correct___autoParam___closed__23 = _init_l_RobustFlipper_Flipper_ne__of__correct___autoParam___closed__23();
lean_mark_persistent(l_RobustFlipper_Flipper_ne__of__correct___autoParam___closed__23);
l_RobustFlipper_Flipper_ne__of__correct___autoParam___closed__24 = _init_l_RobustFlipper_Flipper_ne__of__correct___autoParam___closed__24();
lean_mark_persistent(l_RobustFlipper_Flipper_ne__of__correct___autoParam___closed__24);
l_RobustFlipper_Flipper_ne__of__correct___autoParam___closed__25 = _init_l_RobustFlipper_Flipper_ne__of__correct___autoParam___closed__25();
lean_mark_persistent(l_RobustFlipper_Flipper_ne__of__correct___autoParam___closed__25);
l_RobustFlipper_Flipper_ne__of__correct___autoParam___closed__26 = _init_l_RobustFlipper_Flipper_ne__of__correct___autoParam___closed__26();
lean_mark_persistent(l_RobustFlipper_Flipper_ne__of__correct___autoParam___closed__26);
l_RobustFlipper_Flipper_ne__of__correct___autoParam___closed__27 = _init_l_RobustFlipper_Flipper_ne__of__correct___autoParam___closed__27();
lean_mark_persistent(l_RobustFlipper_Flipper_ne__of__correct___autoParam___closed__27);
l_RobustFlipper_Flipper_ne__of__correct___autoParam___closed__28 = _init_l_RobustFlipper_Flipper_ne__of__correct___autoParam___closed__28();
lean_mark_persistent(l_RobustFlipper_Flipper_ne__of__correct___autoParam___closed__28);
l_RobustFlipper_Flipper_ne__of__correct___autoParam___closed__29 = _init_l_RobustFlipper_Flipper_ne__of__correct___autoParam___closed__29();
lean_mark_persistent(l_RobustFlipper_Flipper_ne__of__correct___autoParam___closed__29);
l_RobustFlipper_Flipper_ne__of__correct___autoParam___closed__30 = _init_l_RobustFlipper_Flipper_ne__of__correct___autoParam___closed__30();
lean_mark_persistent(l_RobustFlipper_Flipper_ne__of__correct___autoParam___closed__30);
l_RobustFlipper_Flipper_ne__of__correct___autoParam___closed__31 = _init_l_RobustFlipper_Flipper_ne__of__correct___autoParam___closed__31();
lean_mark_persistent(l_RobustFlipper_Flipper_ne__of__correct___autoParam___closed__31);
l_RobustFlipper_Flipper_ne__of__correct___autoParam___closed__32 = _init_l_RobustFlipper_Flipper_ne__of__correct___autoParam___closed__32();
lean_mark_persistent(l_RobustFlipper_Flipper_ne__of__correct___autoParam___closed__32);
l_RobustFlipper_Flipper_ne__of__correct___autoParam___closed__33 = _init_l_RobustFlipper_Flipper_ne__of__correct___autoParam___closed__33();
lean_mark_persistent(l_RobustFlipper_Flipper_ne__of__correct___autoParam___closed__33);
l_RobustFlipper_Flipper_ne__of__correct___autoParam___closed__34 = _init_l_RobustFlipper_Flipper_ne__of__correct___autoParam___closed__34();
lean_mark_persistent(l_RobustFlipper_Flipper_ne__of__correct___autoParam___closed__34);
l_RobustFlipper_Flipper_ne__of__correct___autoParam___closed__35 = _init_l_RobustFlipper_Flipper_ne__of__correct___autoParam___closed__35();
lean_mark_persistent(l_RobustFlipper_Flipper_ne__of__correct___autoParam___closed__35);
l_RobustFlipper_Flipper_ne__of__correct___autoParam___closed__36 = _init_l_RobustFlipper_Flipper_ne__of__correct___autoParam___closed__36();
lean_mark_persistent(l_RobustFlipper_Flipper_ne__of__correct___autoParam___closed__36);
l_RobustFlipper_Flipper_ne__of__correct___autoParam___closed__37 = _init_l_RobustFlipper_Flipper_ne__of__correct___autoParam___closed__37();
lean_mark_persistent(l_RobustFlipper_Flipper_ne__of__correct___autoParam___closed__37);
l_RobustFlipper_Flipper_ne__of__correct___autoParam___closed__38 = _init_l_RobustFlipper_Flipper_ne__of__correct___autoParam___closed__38();
lean_mark_persistent(l_RobustFlipper_Flipper_ne__of__correct___autoParam___closed__38);
l_RobustFlipper_Flipper_ne__of__correct___autoParam___closed__39 = _init_l_RobustFlipper_Flipper_ne__of__correct___autoParam___closed__39();
lean_mark_persistent(l_RobustFlipper_Flipper_ne__of__correct___autoParam___closed__39);
l_RobustFlipper_Flipper_ne__of__correct___autoParam___closed__40 = _init_l_RobustFlipper_Flipper_ne__of__correct___autoParam___closed__40();
lean_mark_persistent(l_RobustFlipper_Flipper_ne__of__correct___autoParam___closed__40);
l_RobustFlipper_Flipper_ne__of__correct___autoParam___closed__41 = _init_l_RobustFlipper_Flipper_ne__of__correct___autoParam___closed__41();
lean_mark_persistent(l_RobustFlipper_Flipper_ne__of__correct___autoParam___closed__41);
l_RobustFlipper_Flipper_ne__of__correct___autoParam___closed__42 = _init_l_RobustFlipper_Flipper_ne__of__correct___autoParam___closed__42();
lean_mark_persistent(l_RobustFlipper_Flipper_ne__of__correct___autoParam___closed__42);
l_RobustFlipper_Flipper_ne__of__correct___autoParam___closed__43 = _init_l_RobustFlipper_Flipper_ne__of__correct___autoParam___closed__43();
lean_mark_persistent(l_RobustFlipper_Flipper_ne__of__correct___autoParam___closed__43);
l_RobustFlipper_Flipper_ne__of__correct___autoParam___closed__44 = _init_l_RobustFlipper_Flipper_ne__of__correct___autoParam___closed__44();
lean_mark_persistent(l_RobustFlipper_Flipper_ne__of__correct___autoParam___closed__44);
l_RobustFlipper_Flipper_ne__of__correct___autoParam___closed__45 = _init_l_RobustFlipper_Flipper_ne__of__correct___autoParam___closed__45();
lean_mark_persistent(l_RobustFlipper_Flipper_ne__of__correct___autoParam___closed__45);
l_RobustFlipper_Flipper_ne__of__correct___autoParam___closed__46 = _init_l_RobustFlipper_Flipper_ne__of__correct___autoParam___closed__46();
lean_mark_persistent(l_RobustFlipper_Flipper_ne__of__correct___autoParam___closed__46);
l_RobustFlipper_Flipper_ne__of__correct___autoParam___closed__47 = _init_l_RobustFlipper_Flipper_ne__of__correct___autoParam___closed__47();
lean_mark_persistent(l_RobustFlipper_Flipper_ne__of__correct___autoParam___closed__47);
l_RobustFlipper_Flipper_ne__of__correct___autoParam___closed__48 = _init_l_RobustFlipper_Flipper_ne__of__correct___autoParam___closed__48();
lean_mark_persistent(l_RobustFlipper_Flipper_ne__of__correct___autoParam___closed__48);
l_RobustFlipper_Flipper_ne__of__correct___autoParam___closed__49 = _init_l_RobustFlipper_Flipper_ne__of__correct___autoParam___closed__49();
lean_mark_persistent(l_RobustFlipper_Flipper_ne__of__correct___autoParam___closed__49);
l_RobustFlipper_Flipper_ne__of__correct___autoParam___closed__50 = _init_l_RobustFlipper_Flipper_ne__of__correct___autoParam___closed__50();
lean_mark_persistent(l_RobustFlipper_Flipper_ne__of__correct___autoParam___closed__50);
l_RobustFlipper_Flipper_ne__of__correct___autoParam___closed__51 = _init_l_RobustFlipper_Flipper_ne__of__correct___autoParam___closed__51();
lean_mark_persistent(l_RobustFlipper_Flipper_ne__of__correct___autoParam___closed__51);
l_RobustFlipper_Flipper_ne__of__correct___autoParam___closed__52 = _init_l_RobustFlipper_Flipper_ne__of__correct___autoParam___closed__52();
lean_mark_persistent(l_RobustFlipper_Flipper_ne__of__correct___autoParam___closed__52);
l_RobustFlipper_Flipper_ne__of__correct___autoParam___closed__53 = _init_l_RobustFlipper_Flipper_ne__of__correct___autoParam___closed__53();
lean_mark_persistent(l_RobustFlipper_Flipper_ne__of__correct___autoParam___closed__53);
l_RobustFlipper_Flipper_ne__of__correct___autoParam___closed__54 = _init_l_RobustFlipper_Flipper_ne__of__correct___autoParam___closed__54();
lean_mark_persistent(l_RobustFlipper_Flipper_ne__of__correct___autoParam___closed__54);
l_RobustFlipper_Flipper_ne__of__correct___autoParam___closed__55 = _init_l_RobustFlipper_Flipper_ne__of__correct___autoParam___closed__55();
lean_mark_persistent(l_RobustFlipper_Flipper_ne__of__correct___autoParam___closed__55);
l_RobustFlipper_Flipper_ne__of__correct___autoParam___closed__56 = _init_l_RobustFlipper_Flipper_ne__of__correct___autoParam___closed__56();
lean_mark_persistent(l_RobustFlipper_Flipper_ne__of__correct___autoParam___closed__56);
l_RobustFlipper_Flipper_ne__of__correct___autoParam___closed__57 = _init_l_RobustFlipper_Flipper_ne__of__correct___autoParam___closed__57();
lean_mark_persistent(l_RobustFlipper_Flipper_ne__of__correct___autoParam___closed__57);
l_RobustFlipper_Flipper_ne__of__correct___autoParam___closed__58 = _init_l_RobustFlipper_Flipper_ne__of__correct___autoParam___closed__58();
lean_mark_persistent(l_RobustFlipper_Flipper_ne__of__correct___autoParam___closed__58);
l_RobustFlipper_Flipper_ne__of__correct___autoParam___closed__59 = _init_l_RobustFlipper_Flipper_ne__of__correct___autoParam___closed__59();
lean_mark_persistent(l_RobustFlipper_Flipper_ne__of__correct___autoParam___closed__59);
l_RobustFlipper_Flipper_ne__of__correct___autoParam___closed__60 = _init_l_RobustFlipper_Flipper_ne__of__correct___autoParam___closed__60();
lean_mark_persistent(l_RobustFlipper_Flipper_ne__of__correct___autoParam___closed__60);
l_RobustFlipper_Flipper_ne__of__correct___autoParam___closed__61 = _init_l_RobustFlipper_Flipper_ne__of__correct___autoParam___closed__61();
lean_mark_persistent(l_RobustFlipper_Flipper_ne__of__correct___autoParam___closed__61);
l_RobustFlipper_Flipper_ne__of__correct___autoParam___closed__62 = _init_l_RobustFlipper_Flipper_ne__of__correct___autoParam___closed__62();
lean_mark_persistent(l_RobustFlipper_Flipper_ne__of__correct___autoParam___closed__62);
l_RobustFlipper_Flipper_ne__of__correct___autoParam___closed__63 = _init_l_RobustFlipper_Flipper_ne__of__correct___autoParam___closed__63();
lean_mark_persistent(l_RobustFlipper_Flipper_ne__of__correct___autoParam___closed__63);
l_RobustFlipper_Flipper_ne__of__correct___autoParam___closed__64 = _init_l_RobustFlipper_Flipper_ne__of__correct___autoParam___closed__64();
lean_mark_persistent(l_RobustFlipper_Flipper_ne__of__correct___autoParam___closed__64);
l_RobustFlipper_Flipper_ne__of__correct___autoParam___closed__65 = _init_l_RobustFlipper_Flipper_ne__of__correct___autoParam___closed__65();
lean_mark_persistent(l_RobustFlipper_Flipper_ne__of__correct___autoParam___closed__65);
l_RobustFlipper_Flipper_ne__of__correct___autoParam___closed__66 = _init_l_RobustFlipper_Flipper_ne__of__correct___autoParam___closed__66();
lean_mark_persistent(l_RobustFlipper_Flipper_ne__of__correct___autoParam___closed__66);
l_RobustFlipper_Flipper_ne__of__correct___autoParam___closed__67 = _init_l_RobustFlipper_Flipper_ne__of__correct___autoParam___closed__67();
lean_mark_persistent(l_RobustFlipper_Flipper_ne__of__correct___autoParam___closed__67);
l_RobustFlipper_Flipper_ne__of__correct___autoParam___closed__68 = _init_l_RobustFlipper_Flipper_ne__of__correct___autoParam___closed__68();
lean_mark_persistent(l_RobustFlipper_Flipper_ne__of__correct___autoParam___closed__68);
l_RobustFlipper_Flipper_ne__of__correct___autoParam = _init_l_RobustFlipper_Flipper_ne__of__correct___autoParam();
lean_mark_persistent(l_RobustFlipper_Flipper_ne__of__correct___autoParam);
return lean_io_result_mk_ok(lean_box(0));
}
#ifdef __cplusplus
}
#endif
