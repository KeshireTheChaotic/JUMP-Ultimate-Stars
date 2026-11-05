
/* JUS-CLASS jus_Class_020954a0::jus_Class_020954a0 [class-default] stores vtable 020954a0 into
   *this (constructor) */

undefined4 * jus_Class_020954a0::jus_Class_020954a0(undefined4 *param_1,int param_2)

{
  int iVar1;
  undefined4 uVar2;
  
  jus_Class_020955c0::jus_Class_020955c0();
  *param_1 = &vftable;
  if (*(int *)(param_2 + 100) == 0) {
    iVar1 = FUN_0201a228(0x40);
    uVar2 = 0;
    if (iVar1 != 0) {
      uVar2 = ALWidgetImp_020958dc::ALWidgetImp_020958dc(iVar1,param_2);
    }
    FUN_0202201c(param_2,uVar2);
  }
  return param_1;
}

