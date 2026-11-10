
/* JUS-CLASS jus_HwTexPltt_Part_020944cc::vfunc_12 [class-virtual] slot 12 of vtable 020944cc (own
   slot, not inherited) */

undefined4 * jus_HwTexPltt_Part_020944cc::vfunc_12(undefined4 param_1,undefined4 param_2)

{
  undefined4 *puVar1;
  
  puVar1 = (undefined4 *)FUN_0201a228(0xe4);
  if (puVar1 != (undefined4 *)0x0) {
    jus_Class_02094864::jus_Class_02094864();
    *puVar1 = &jus_HwPad::vftable;
    puVar1[0x38] = param_2;
  }
  return puVar1;
}

