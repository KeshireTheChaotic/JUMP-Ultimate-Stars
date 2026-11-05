
/* JUS-CLASS jus_Class_0209c6bc::jus_Class_0209c6bc [class-default] stores vtable 0209c6bc into
   *this (constructor) */

undefined4 * jus_Class_0209c6bc::jus_Class_0209c6bc(undefined4 *param_1,int param_2)

{
  int iVar1;
  undefined4 uVar2;
  
  ALWidgetBase_0209c1e0::ALWidgetBase_0209c1e0();
  *param_1 = &vftable;
  param_1[0x1b] = *(undefined4 *)(param_2 + 0x6c);
  param_1[0x1d] = *(undefined4 *)(param_2 + 0x74);
  param_1[0x1e] = *(undefined4 *)(param_2 + 0x78);
  if (*(int *)(param_2 + 0x70) == 0) {
    param_1[0x1c] = 0;
  }
  else {
    iVar1 = FUN_02004b04();
    uVar2 = FUN_0201a228(iVar1 + 1);
    FUN_02004b18(uVar2,*(undefined4 *)(param_2 + 0x70));
    param_1[0x1c] = uVar2;
  }
  return param_1;
}

