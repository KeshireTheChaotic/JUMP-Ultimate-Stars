
/* JUS-CLASS ALTextImp_021d46e8::ALTextImp_021d46e8 [class-source-file] stores vtable 021d46e8 into
   *this (constructor) */

undefined4 * ALTextImp_021d46e8::ALTextImp_021d46e8(undefined4 *param_1)

{
  undefined4 local_10;
  undefined4 local_c;
  
  ALWidgetImp_020958dc::ALWidgetImp_020958dc();
  *param_1 = &vftable;
  ALUtilImp::SetItemSize(param_1 + 0x10);
  param_1[0x13] = 0;
  param_1[0x14] = 0;
  param_1[0x15] = 0;
  FUN_021c6200(param_1 + 0x16);
  param_1[0x3a] = 0;
  param_1[0x3b] = 0;
  param_1[0x3e] = 0;
  param_1[0x3f] = 0;
  param_1[0x40] = 0;
  param_1[0x42] = 0;
  *(undefined1 *)(param_1 + 0x43) = 0;
  *(undefined1 *)((int)param_1 + 0x10d) = 0;
  *(undefined1 *)((int)param_1 + 0x10e) = 0;
  *(undefined1 *)((int)param_1 + 0x10f) = 0;
  *(undefined1 *)(param_1 + 0x44) = 0;
  FUN_021c61b0(param_1 + 0x45);
  FUN_021c61b0(param_1 + 0x49);
  FUN_021c61b0(param_1 + 0x4d);
  FUN_021c61b0(param_1 + 0x51);
  FUN_021c61b0(param_1 + 0x55);
  FUN_021aca28(param_1 + 0x59);
  param_1[0x5b] = 0;
  *(undefined2 *)(param_1 + 0x3c) = 0x7fff;
  *(undefined2 *)((int)param_1 + 0xf2) = 0x7fff;
  *(undefined2 *)(param_1 + 0x3d) = 0;
  *(undefined2 *)((int)param_1 + 0xf6) = 0;
  param_1[0x41] = 0;
  FUN_021c61c8(param_1 + 0x45,&DAT_02093d5c);
  FUN_021c61c8(param_1 + 0x49,&DAT_02093d5c);
  FUN_021c61c8(param_1 + 0x4d,&DAT_02093d4c);
  local_10 = 0x1000;
  local_c = 0x1000;
  FUN_021c61ec(param_1 + 0x59,&local_c,&local_10);
  FUN_021c61c8(param_1 + 0x51,&DAT_02093d5c);
  param_1[0x5b] = 0x1000;
  return param_1;
}

