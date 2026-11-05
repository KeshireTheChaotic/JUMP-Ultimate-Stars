
/* JUS-CLASS jus_Class_020948a4::vfunc_04 [class-virtual] slot 4 of vtable 020948a4 (own slot, not
   inherited) */

undefined4 * jus_Class_020948a4::vfunc_04(undefined4 *param_1)

{
  int iVar1;
  
  *param_1 = &vftable;
  (**(code **)(*DAT_020a0dc4 + 4))();
  (**(code **)(*DAT_020a1044 + 0xc))();
  FUN_02028af0();
  func_0x021c5f44();
  (**(code **)(*DAT_020a0f24 + 0xc))();
  if (DAT_020a0e68 != (int *)0x0) {
    (**(code **)(*DAT_020a0e68 + 4))();
  }
  if (DAT_020a0e20 != (int *)0x0) {
    (**(code **)(*DAT_020a0e20 + 4))();
  }
  FUN_0200b254(param_1 + 0x109);
  jus_Class_02093eb4::~jus_Class_02093eb4(param_1 + 1);
  iVar1 = FUN_0201a9ec(param_1);
  if (iVar1 == 0) {
    FUN_0201a958(param_1,1);
  }
  return param_1;
}

