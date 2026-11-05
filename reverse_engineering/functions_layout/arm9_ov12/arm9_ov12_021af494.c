
/* JUS-CLASS ALDrawLinkImp_021d0a90::ALDrawLinkImp_021d0a90 [class-source-file] stores vtable
   021d0a90 into *this (constructor) */

undefined4 * ALDrawLinkImp_021d0a90::ALDrawLinkImp_021d0a90(undefined4 *param_1)

{
  int iVar1;
  undefined4 uVar2;
  undefined4 in_stack_00000000;
  undefined4 in_stack_00000004;
  
  ALDrawLinkImp_021d2e58_Derived_021d2f8c::ALDrawLinkImp_021d2e58_Derived_021d2f8c();
  *param_1 = &vftable;
  param_1[0x2b] = in_stack_00000000;
  param_1[0x2c] = in_stack_00000004;
  iVar1 = thunk_FUN_0201a228(8,s_ALWidget_cpp_021d17d4,&DAT_021d1668,0x6a4);
  uVar2 = 0;
  if (iVar1 != 0) {
    uVar2 = jus_Class_021d0940::jus_Class_021d0940(iVar1,param_1);
  }
  param_1[6] = uVar2;
  return param_1;
}

