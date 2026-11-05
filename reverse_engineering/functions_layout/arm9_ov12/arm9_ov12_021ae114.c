
/* JUS-CLASS ALWidgetBase_021d12d8::ALWidgetBase_021d12d8 [class-source-file] stores vtable 021d12d8
   into *this (constructor) */

undefined4 * ALWidgetBase_021d12d8::ALWidgetBase_021d12d8(undefined4 *param_1)

{
  undefined4 uVar1;
  int *piVar2;
  
  ALWidgetBase_021d1124::ALWidgetBase_021d1124();
  *param_1 = &vftable;
  FUN_021ae1dc(param_1 + 0x55);
  FUN_021ae1e8(param_1 + 0x58);
  param_1[0x5b] = 0;
  param_1[0x5c] = 0;
  param_1[0x5d] = 0;
  param_1[0x5e] = 0;
  param_1[0x5f] = 0;
  param_1[0x60] = 1;
  param_1[0x61] = 0;
  FUN_021aca28(param_1 + 0x62);
  param_1[0x62] = 0;
  param_1[99] = 0;
  uVar1 = FUN_021b67a4(param_1);
  param_1[0x28] = uVar1;
  (**(code **)(*(int *)param_1[0x28] + 0xd8))((int *)param_1[0x28],1);
  FUN_02028330(param_1[0x28]);
  (**(code **)(*(int *)param_1[0x28] + 0x138))((int *)param_1[0x28],param_1);
  (**(code **)(*(int *)param_1[0x28] + 0xd4))((int *)param_1[0x28],param_1);
  piVar2 = (int *)param_1[0x27];
  if (piVar2 != (int *)0x0) {
    (**(code **)(*piVar2 + 0x184))(piVar2,param_1);
  }
  return param_1;
}

