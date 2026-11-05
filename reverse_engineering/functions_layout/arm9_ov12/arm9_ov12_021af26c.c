
/* JUS-CLASS ALDrawLinkImp_021d0e50::ALDrawLinkImp_021d0e50 [class-source-file] stores vtable
   021d0e50 into *this (constructor) */

undefined4 *
ALDrawLinkImp_021d0e50::ALDrawLinkImp_021d0e50
          (undefined4 *param_1,code *param_2,undefined4 param_3,undefined4 param_4)

{
  int iVar1;
  undefined4 uVar2;
  
  uVar2 = param_4;
  ALDrawLinkImp_021d2e58_Derived_021d334c::ALDrawLinkImp_021d2e58_Derived_021d334c();
  *param_1 = &vftable;
  param_1[0x30] = param_2;
  param_1[0x31] = param_3;
  param_1[0x32] = param_4;
  iVar1 = thunk_FUN_0201a228(8,s_ALWidget_cpp_021d17d4,&DAT_021d1660,0x661,uVar2);
  uVar2 = 0;
  if (iVar1 != 0) {
    uVar2 = jus_Class_021d0870::jus_Class_021d0870(iVar1,param_1);
  }
  param_1[6] = uVar2;
  (*param_2)();
  return param_1;
}

