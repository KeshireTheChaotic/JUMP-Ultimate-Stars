
undefined4
FUN_0218ddc0(undefined4 *param_1,undefined4 param_2,undefined4 param_3,undefined4 param_4,
            undefined4 param_5,int param_6,undefined4 param_7,undefined4 param_8,undefined4 param_9,
            undefined4 param_10,undefined4 param_11,undefined4 param_12,undefined4 param_13,
            undefined4 param_14)

{
  undefined4 uVar1;
  undefined1 *puVar2;
  undefined1 extraout_r1;
  undefined4 *puVar3;
  int iVar4;
  undefined1 auStack_58 [68];
  
  puVar2 = auStack_58;
  if (param_1 == (undefined4 *)0x0) {
    param_1 = &DAT_021a675c;
  }
  else {
    uVar1 = FUN_0217583c(0x110);
    *param_1 = uVar1;
    param_1 = (undefined4 *)*param_1;
  }
  FUN_02001ed8();
  FUN_02003e24();
  FUN_02004b18(param_1 + 1,param_4);
  FUN_02004b18(param_1 + 0x11,param_5);
  param_1[0x30] = param_3;
  iVar4 = 0;
  param_1[0x2b] = 0;
  param_1[0x2c] = 0;
  *param_1 = param_2;
  param_1[0x2e] = 1;
  param_1[0x43] = param_14;
  param_1[0x22] = param_8;
  param_1[0x23] = param_9;
  param_1[0x24] = param_10;
  param_1[0x25] = param_11;
  param_1[0x26] = param_12;
  param_1[0x27] = param_13;
  param_1[0x28] = 0;
  param_1[0x29] = 0;
  param_1[0x35] = 0;
  param_1[0x2f] = param_6;
  param_1[0x31] = 0;
  param_1[0x32] = param_7;
  param_1[0x41] = 0;
  *(undefined2 *)(param_1 + 0x42) = 0;
  param_1[0x2a] = 0;
  param_1[0x2d] = 0;
  do {
    uVar1 = FUN_02003dfc();
    FUN_0200d12c(uVar1,0xff);
    *(undefined1 *)((int)param_1 + iVar4 + 0x84) = extraout_r1;
    iVar4 = iVar4 + 1;
  } while (iVar4 < 4);
  iVar4 = 0;
  puVar3 = param_1;
  do {
    puVar3[0x36] = 0xffffffff;
    puVar3 = puVar3 + 1;
    iVar4 = iVar4 + 1;
  } while (iVar4 < 10);
  param_1[0x40] = 0;
  if (DAT_021a8384 == 0) {
    FUN_0218dab4();
  }
  if (param_6 == 0) {
    iVar4 = 1;
  }
  else {
    if (DAT_021a839c == '\0') {
      FUN_02003ce0(auStack_58,s__s_master_gs_nintendowifi_net_021a6948,param_4);
    }
    else {
      puVar2 = &DAT_021a839c;
    }
    iVar4 = FUN_0218da3c(puVar2,0x6cfc,param_1 + 0x33,0);
  }
  if (iVar4 == 0) {
    return 3;
  }
  return 0;
}

