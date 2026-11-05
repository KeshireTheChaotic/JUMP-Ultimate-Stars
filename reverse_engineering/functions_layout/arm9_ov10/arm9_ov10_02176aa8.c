
undefined4 FUN_02176aa8(short *param_1,undefined4 param_2,undefined4 param_3,undefined4 param_4)

{
  int iVar1;
  uint uVar2;
  
  if (param_1 == (short *)0x0) {
    return 0;
  }
  iVar1 = FUN_0217575c();
  if ((iVar1 != 0) || (*(int *)(DAT_021a7410 + 0x24) != 0)) {
    return 0;
  }
  *(undefined4 *)(DAT_021a7410 + 0x70) = param_3;
  *(undefined4 *)(DAT_021a7410 + 0x74) = param_4;
  if ((param_1 == (short *)0x0) || (*param_1 == 0)) {
    iVar1 = 0;
  }
  else {
    MIi_CpuClear16(0,DAT_021a7410 + 0x2e,0x34);
    uVar2 = FUN_02175b90(param_1);
    if (uVar2 < 0x1a) {
      iVar1 = FUN_02175b90(param_1);
    }
    else {
      iVar1 = 0x19;
    }
    MIi_CpuCopy16(param_1,DAT_021a7410 + 0x2e,iVar1 << 1);
  }
  *(undefined2 *)(DAT_021a7410 + iVar1 * 2 + 0x2e) = 0;
  iVar1 = FUN_021759a4();
  if (iVar1 == 4) {
    FUN_0217643c(1);
    FUN_02000e10(*(undefined4 *)(DAT_021a7410 + 0x68));
    return 1;
  }
  FUN_02177528(2,0xffff1596);
  return 1;
}

