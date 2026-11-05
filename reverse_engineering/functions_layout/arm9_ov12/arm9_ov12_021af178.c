
/* JUS-CLASS ALDrawLinkImp_021d2e58_Derived_021d0bcc::ALDrawLinkImp_021d2e58_Derived_021d0bcc
   [class-derived] stores vtable 021d0bcc into *this (constructor) */

undefined4 *
ALDrawLinkImp_021d2e58_Derived_021d0bcc::ALDrawLinkImp_021d2e58_Derived_021d0bcc
          (undefined4 *param_1,undefined4 param_2,undefined4 param_3,undefined4 param_4)

{
  int iVar1;
  undefined4 uVar2;
  
  ALDrawLinkImp_021d2e58_Derived_021d30c8::ALDrawLinkImp_021d2e58_Derived_021d30c8(param_1,param_4);
  *param_1 = &vftable;
  param_1[0x27] = param_2;
  param_1[0x28] = param_3;
  iVar1 = jus_AllocDebug(8,s_ALWidget_cpp_021d17d4,&DAT_021d1678,0x631);
  uVar2 = 0;
  if (iVar1 != 0) {
    uVar2 = jus_Class_021d08d8::jus_Class_021d08d8(iVar1,param_1);
  }
  param_1[6] = uVar2;
  return param_1;
}

