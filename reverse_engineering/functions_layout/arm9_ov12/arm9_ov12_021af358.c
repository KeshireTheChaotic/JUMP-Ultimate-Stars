
/* JUS-CLASS ALWidget::ALWidget [class-source-file] stores vtable 021d0d0c into *this (constructor)
    */

undefined4 *
ALWidget::ALWidget(undefined4 *param_1,undefined4 param_2,undefined4 param_3,undefined4 param_4)

{
  int iVar1;
  undefined4 uVar2;
  
  ALDrawLinkImp_021d2e58_Derived_021d3208::ALDrawLinkImp_021d2e58_Derived_021d3208
            (param_1,param_3,param_3,param_4,param_4);
  *param_1 = &vftable;
  param_1[0x2e] = param_2;
  iVar1 = jus_AllocDebug(8,s_ALWidget_cpp_021d17d4,&DAT_021d1680,0x685);
  uVar2 = 0;
  if (iVar1 != 0) {
    uVar2 = jus_Class_021d09ac::jus_Class_021d09ac(iVar1,param_1);
  }
  param_1[6] = uVar2;
  return param_1;
}

