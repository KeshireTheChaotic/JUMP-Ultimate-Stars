
/* JUS-CLASS ALWidgetBaseImp::ALWidgetBaseImp [class-source-file] stores vtable 021d3498 into *this
   (constructor) */

undefined4 *
ALWidgetBaseImp::ALWidgetBaseImp(undefined4 *param_1,int param_2,int param_3,undefined4 param_4)

{
  int iVar1;
  
  ALDrawLinkImp_021d2e58::ALDrawLinkImp_021d2e58(param_1,param_4);
  *param_1 = &vftable;
  param_1[0x24] = 0;
  if (param_2 == 0) {
    param_2 = DAT_021d515c;
  }
  param_1[0x27] = param_2;
  param_1[0x28] = 0;
  *(undefined1 *)(param_1 + 0x29) = 1;
  *(undefined1 *)((int)param_1 + 0xa5) = 0;
  *(undefined1 *)((int)param_1 + 0xa6) = 0;
  *(undefined1 *)((int)param_1 + 0xa7) = 0;
  *(undefined1 *)(param_1 + 0x2a) = 0;
  *(undefined1 *)((int)param_1 + 0xa9) = 0;
  *(undefined1 *)((int)param_1 + 0xaa) = 0;
  *(undefined1 *)((int)param_1 + 0xab) = 1;
  *(undefined1 *)(param_1 + 0x2b) = 1;
  *(undefined1 *)((int)param_1 + 0xad) = 0;
  *(undefined1 *)((int)param_1 + 0xae) = 0;
  *(undefined1 *)((int)param_1 + 0xaf) = 0;
  *(undefined1 *)(param_1 + 0x2c) = 0;
  *(undefined1 *)((int)param_1 + 0xb1) = 0;
  param_1[0x2d] = param_3;
  param_1[0x2e] = DAT_021d28e8;
  param_1[0x2f] = 0;
  FUN_021b4fd8(param_1 + 0x30);
  FUN_021aca28(param_1 + 0x34);
  param_1[0x36] = 0;
  param_1[0x37] = 0;
  param_1[0x38] = 0;
  param_1[0x39] = 0;
  param_1[0x3a] = 0;
  param_1[0x3b] = 0;
  param_1[0x3c] = 0;
  FUN_021b4fe4(param_1 + 0x3d);
  FUN_021b4fe4(param_1 + 0x40);
  param_1[0x43] = 0;
  param_1[0x44] = 0;
  *(undefined1 *)(param_1 + 0x45) = 0;
  *(undefined1 *)((int)param_1 + 0x115) = 0;
  *(undefined1 *)((int)param_1 + 0x116) = 0;
  *(undefined1 *)((int)param_1 + 0x117) = 0;
  FUN_021b4a98(param_1 + 0x46);
  param_1[0x49] = 0;
  FUN_021b4ab0(param_1 + 0x4a);
  DAT_021d513c = DAT_021d513c + 1;
  param_1[0x34] = 0;
  param_1[0x35] = 0;
  FUN_021b4ddc(param_1 + 0x25,DAT_02093bf4);
  param_1[0x33] = 0;
  if (param_3 != -1) {
    iVar1 = FUN_021b5338(param_1,param_3);
    if (*(int *)(iVar1 + 4) != 0) {
      FUN_021b5898(param_1);
    }
  }
  if (param_1[0x27] != 0) {
    DAT_021d5150 = DAT_021d5150 + 1;
    if (DAT_021d5148 == 0) {
      ALWidgetBase::CreatePointingDeviceNode();
      if (DAT_021d5158 == 0) {
        FUN_02020d1c(0);
        FUN_021b51a8();
      }
    }
    else if (*(int *)(DAT_021d5148 + 0x34) != DAT_020a0e80) {
      FUN_021b1590(*(undefined4 *)(DAT_020a0e80 + 600),0x80000000,0x40000000);
      FUN_02027db0(DAT_021d5148,DAT_020a0e80);
    }
  }
  return param_1;
}

