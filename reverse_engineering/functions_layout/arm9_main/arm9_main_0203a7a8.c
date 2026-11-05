
/* JUS-CLASS jus_Class_020944cc::vfunc_12 [class-virtual] slot 12 of vtable 020944cc (own slot, not
   inherited) */

undefined4 * jus_Class_020944cc::vfunc_12(undefined4 param_1,undefined4 param_2)

{
  undefined4 *puVar1;
  
  puVar1 = (undefined4 *)jus_AllocDebug(0xe4);
  if (puVar1 != (undefined4 *)0x0) {
    BattleAI::BattleAI();
    *puVar1 = &jus_Class_020948e4::vftable;
    puVar1[0x38] = param_2;
  }
  return puVar1;
}

