
/* JUS-CLASS ALDrawLinkImp_021d2e58::ALDrawLinkImp_021d2e58 [class-source-file] stores vtable
   021d2e58 into *this (constructor) */

undefined4 * ALDrawLinkImp_021d2e58::ALDrawLinkImp_021d2e58(undefined4 *param_1,int param_2)

{
  uint uVar1;
  
  jus_Class_0209be5c::jus_Class_0209be5c();
  *param_1 = &vftable;
  FUN_021b3c40(param_1 + 0x1e);
  FUN_021b3c4c(param_1 + 0x21,param_2 + 0x84);
  for (uVar1 = 0; uVar1 < *(uint *)(param_2 + 0x7c); uVar1 = uVar1 + 1) {
    FUN_021b3cd0(param_1 + 0x1e,*(int *)(param_2 + 0x78) + uVar1 * 8);
  }
  return param_1;
}

