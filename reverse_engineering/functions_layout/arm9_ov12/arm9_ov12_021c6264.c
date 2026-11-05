
/* JUS-CLASS ALTextImp_021d46e8::ALTextImp_021d46e8 [class-source-file] stores vtable 021d46e8 into
   *this (constructor) */

undefined4 * ALTextImp_021d46e8::ALTextImp_021d46e8(undefined4 *param_1,int param_2)

{
  undefined4 uVar1;
  uint uVar2;
  
  ALWidgetImp_020958dc::ALWidgetImp_020958dc();
  *param_1 = &vftable;
  ALUtilImp::SetItemSize(param_1 + 0x10);
  param_1[0x15] = *(undefined4 *)(param_2 + 0x54);
  FUN_021c6200(param_1 + 0x16);
  param_1[0x3a] = *(undefined4 *)(param_2 + 0xe8);
  param_1[0x3b] = *(undefined4 *)(param_2 + 0xec);
  param_1[0x3e] = *(undefined4 *)(param_2 + 0xf8);
  param_1[0x3f] = *(undefined4 *)(param_2 + 0xfc);
  param_1[0x40] = *(undefined4 *)(param_2 + 0x100);
  param_1[0x42] = *(undefined4 *)(param_2 + 0x108);
  *(undefined1 *)(param_1 + 0x43) = *(undefined1 *)(param_2 + 0x10c);
  *(undefined1 *)((int)param_1 + 0x10d) = *(undefined1 *)(param_2 + 0x10d);
  *(undefined1 *)((int)param_1 + 0x10e) = *(undefined1 *)(param_2 + 0x10e);
  *(undefined1 *)((int)param_1 + 0x10f) = *(undefined1 *)(param_2 + 0x10f);
  *(undefined1 *)(param_1 + 0x44) = *(undefined1 *)(param_2 + 0x110);
  FUN_021c61b0(param_1 + 0x45);
  FUN_021c61b0(param_1 + 0x49);
  FUN_021c61b0(param_1 + 0x4d);
  FUN_021c61b0(param_1 + 0x51);
  FUN_021c61b0(param_1 + 0x55);
  FUN_021aca28(param_1 + 0x59);
  param_1[0x5b] = *(undefined4 *)(param_2 + 0x16c);
  FUN_021c61c8(param_1 + 0x45,param_2 + 0x114);
  FUN_021c61c8(param_1 + 0x49,param_2 + 0x124);
  FUN_021cb858(param_1 + 0x10,param_2 + 0x40);
  if (*(int *)(param_2 + 0x4c) == 0) {
    uVar1 = 0;
  }
  else {
    uVar1 = FUN_021c622c();
  }
  param_1[0x13] = uVar1;
  if (*(int *)(param_2 + 0x50) == 0) {
    uVar1 = 0;
  }
  else {
    uVar1 = FUN_021c622c();
  }
  param_1[0x14] = uVar1;
  if ((int *)param_1[0x15] != (int *)0x0) {
    (**(code **)(*(int *)param_1[0x15] + 8))();
  }
  FUN_021ac9b0(param_1 + 0x3c,param_2 + 0xf0);
  param_1[0x41] = *(undefined4 *)(param_2 + 0x104);
  FUN_021c6408(param_1 + 0x16,param_2 + 0x58);
  for (uVar2 = 0; uVar2 < (uint)param_1[0x17]; uVar2 = uVar2 + 1) {
    (**(code **)(*(int *)param_1[0x15] + 0x3c))
              ((int *)param_1[0x15],*(undefined2 *)(param_1[0x16] + uVar2 * 8));
  }
  FUN_021c61c8(param_1 + 0x4d,param_2 + 0x134);
  FUN_021b4728(param_1 + 0x59,param_2 + 0x164);
  FUN_021c61c8(param_1 + 0x51,param_2 + 0x144);
  param_1[0x5b] = *(undefined4 *)(param_2 + 0x16c);
  return param_1;
}

