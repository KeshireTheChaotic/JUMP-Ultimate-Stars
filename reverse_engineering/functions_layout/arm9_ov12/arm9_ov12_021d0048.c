
undefined4 FUN_021d0048(int param_1)

{
  int iVar1;
  undefined4 uVar2;
  int extraout_r1;
  
  FUN_02000b54(s__SDK_Abiosso_libVCT_1_0_1_ec__02000c38);
  if (param_1 == 0) {
    return 0;
  }
  if (DAT_021d7bdc != 0) {
    return 1;
  }
  iVar1 = *(int *)(param_1 + 8);
  if (((iVar1 != 1) && (iVar1 != 2)) && (iVar1 != 3)) {
    return 0;
  }
  if (*(int *)(param_1 + 0x18) == 0) {
    return 0;
  }
  if ((*(int *)(param_1 + 0x10) == 0) || (*(int *)(param_1 + 0x14) == 0)) {
    return 0;
  }
  FUN_0200d12c(*(int *)(param_1 + 0x10),0x20);
  if (extraout_r1 != 0) {
    return 0;
  }
  FUN_020517fc(&DAT_021d7be0,0,0x18);
  DAT_021d7be4 = *(undefined4 *)(param_1 + 0x18);
  DAT_021d7be8 = *(undefined4 *)(param_1 + 0x1c);
  DAT_021d7bf0 = *(undefined4 *)(param_1 + 8);
  uVar2 = 0;
  DAT_021d7bec = 0;
  if (*(byte *)(param_1 + 0xc) < 0x20) {
    DAT_021d7be0 = *(byte *)(param_1 + 0xc);
    iVar1 = FUN_021cf8d8(*(undefined4 *)(param_1 + 0x10),*(undefined4 *)(param_1 + 0x14));
    if (iVar1 == 0) {
      FUN_021cf8c4();
      return 0;
    }
    iVar1 = FUN_021cf5d0(param_1);
    if (iVar1 == 0) {
      FUN_021cf8c4();
      return 0;
    }
    iVar1 = FUN_021ce500();
    if (iVar1 == 0) {
      FUN_021cf5c0();
      FUN_021cf8c4();
      return 0;
    }
    uVar2 = 1;
    DAT_021d7bdc = 1;
  }
  return uVar2;
}

