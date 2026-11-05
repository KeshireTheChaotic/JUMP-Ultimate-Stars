
/* JUS-CLASS jus_Class_021d19e4::jus_Class_021d19e4 [class-default] stores vtable 021d19e4 into
   *this (constructor) */

undefined4 *
jus_Class_021d19e4::jus_Class_021d19e4
          (undefined4 *param_1,undefined4 param_2,undefined4 *param_3,undefined4 param_4)

{
  int iVar1;
  undefined4 uVar2;
  undefined4 uStack_18;
  
  uStack_18 = param_4;
  iVar1 = jus_AllocDebug(0x6c,s_ALCollision_cpp_021d25e0,&DAT_021d1860,600);
  uVar2 = 0;
  if (iVar1 != 0) {
    uStack_18 = *param_3;
    uVar2 = func_0x021b1008(iVar1,param_2,&uStack_18,param_4);
  }
  func_0x021b1350(param_1,uVar2);
  *param_1 = &vftable;
  return param_1;
}

