
/* JUS-CLASS ALWidgetBase_021d3498::ALWidgetBase_021d3498 [class-source-file] stores vtable 021d3498
   into *this (constructor) */

undefined4 * ALWidgetBase_021d3498::ALWidgetBase_021d3498(undefined4 *param_1,int param_2)

{
  uint uVar1;
  
  ALDrawLinkImp_021d2e58::ALDrawLinkImp_021d2e58();
  *param_1 = &vftable;
  param_1[0x24] = 0;
  param_1[0x27] = *(undefined4 *)(param_2 + 0x9c);
  param_1[0x28] = *(undefined4 *)(param_2 + 0xa0);
  *(undefined1 *)(param_1 + 0x29) = *(undefined1 *)(param_2 + 0xa4);
  *(undefined1 *)((int)param_1 + 0xa5) = *(undefined1 *)(param_2 + 0xa5);
  *(undefined1 *)((int)param_1 + 0xa6) = *(undefined1 *)(param_2 + 0xa6);
  *(undefined1 *)((int)param_1 + 0xa7) = *(undefined1 *)(param_2 + 0xa7);
  *(undefined1 *)(param_1 + 0x2a) = *(undefined1 *)(param_2 + 0xa8);
  *(undefined1 *)((int)param_1 + 0xa9) = 0;
  *(undefined1 *)((int)param_1 + 0xaa) = *(undefined1 *)(param_2 + 0xaa);
  *(undefined1 *)((int)param_1 + 0xab) = *(undefined1 *)(param_2 + 0xab);
  *(undefined1 *)(param_1 + 0x2b) = *(undefined1 *)(param_2 + 0xac);
  *(undefined1 *)((int)param_1 + 0xad) = *(undefined1 *)(param_2 + 0xad);
  *(undefined1 *)((int)param_1 + 0xae) = *(undefined1 *)(param_2 + 0xaf);
  *(undefined1 *)((int)param_1 + 0xaf) = *(undefined1 *)(param_2 + 0xaf);
  *(undefined1 *)(param_1 + 0x2c) = *(undefined1 *)(param_2 + 0xb0);
  *(undefined1 *)((int)param_1 + 0xb1) = *(undefined1 *)(param_2 + 0xb1);
  param_1[0x2d] = *(undefined4 *)(param_2 + 0xb4);
  param_1[0x2e] = *(undefined4 *)(param_2 + 0xb8);
  param_1[0x2f] = 0;
  FUN_021b497c(param_1 + 0x30,param_2 + 0xc0);
  FUN_021aca28(param_1 + 0x34);
  param_1[0x36] = *(undefined4 *)(param_2 + 0xd8);
  param_1[0x37] = *(undefined4 *)(param_2 + 0xdc);
  param_1[0x38] = *(undefined4 *)(param_2 + 0xe0);
  param_1[0x39] = *(undefined4 *)(param_2 + 0xe4);
  param_1[0x3a] = *(undefined4 *)(param_2 + 0xe8);
  param_1[0x3b] = *(undefined4 *)(param_2 + 0xec);
  param_1[0x3c] = *(undefined4 *)(param_2 + 0xf0);
  FUN_021b4a0c(param_1 + 0x3d,param_2 + 0xf4);
  FUN_021b4a0c(param_1 + 0x40,param_2 + 0x100);
  param_1[0x43] = 0;
  param_1[0x44] = 0;
  *(undefined1 *)(param_1 + 0x45) = *(undefined1 *)(param_2 + 0x114);
  *(undefined1 *)((int)param_1 + 0x115) = *(undefined1 *)(param_2 + 0x115);
  *(undefined1 *)((int)param_1 + 0x116) = *(undefined1 *)(param_2 + 0x116);
  *(undefined1 *)((int)param_1 + 0x117) = *(undefined1 *)(param_2 + 0x117);
  FUN_021b4a98(param_1 + 0x46);
  param_1[0x49] = *(undefined4 *)(param_2 + 0x124);
  FUN_021b4ab0(param_1 + 0x4a);
  DAT_021d513c = DAT_021d513c + 1;
  FUN_021b4728(param_1 + 0x34,param_2 + 0xd0);
  for (uVar1 = 0; uVar1 < *(uint *)(param_2 + 300); uVar1 = uVar1 + 1) {
    FUN_021b4abc(param_1 + 0x4a,*(int *)(param_2 + 0x128) + uVar1 * 8);
  }
  FUN_021ac9b0(param_1 + 0x25,param_2 + 0x94);
  param_1[0x33] = *(undefined4 *)(param_2 + 0xcc);
  if (param_1[0x27] != 0) {
    DAT_021d5150 = DAT_021d5150 + 1;
  }
  if ((int *)param_1[0x36] != (int *)0x0) {
    (**(code **)(*(int *)param_1[0x36] + 8))();
  }
  return param_1;
}

