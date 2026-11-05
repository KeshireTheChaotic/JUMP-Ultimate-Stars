
/* JUS-CLASS jus_Class_021d2d04::jus_Class_021d2d04 [class-default] stores vtable 021d2d04 into
   *this (constructor) */

undefined4 *
jus_Class_021d2d04::jus_Class_021d2d04
          (undefined4 *param_1,int param_2,undefined4 param_3,undefined4 param_4)

{
  int iVar1;
  undefined4 uVar2;
  
  iVar1 = jus_AllocDebug(0xb8,s_ALWidgetBase_inl_021d3c64,&DAT_021d3af8,0x47a,param_4);
  uVar2 = 0;
  if (iVar1 != 0) {
    if (param_2 == 0) {
      uVar2 = 0;
    }
    else {
      uVar2 = *(undefined4 *)(param_2 + 4);
    }
    uVar2 = ALDrawLinkImp_021d2e58_Derived_021d3208::ALDrawLinkImp_021d2e58_Derived_021d3208
                      (iVar1,uVar2);
  }
  jus_Class_020954a0::jus_Class_020954a0(param_1,uVar2);
  *param_1 = &vftable;
  return param_1;
}

