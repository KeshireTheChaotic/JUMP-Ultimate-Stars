
undefined4 FUN_021cf8d8(uint param_1,undefined4 param_2)

{
  uint uVar1;
  int iVar2;
  uint uVar3;
  
  DAT_021d6730 = param_1;
  uVar1 = FUN_0200d338(param_2,0x478);
  if ((uVar1 < 4) || (0x48 < uVar1)) {
    return 0;
  }
  if (DAT_021d6730 == 0) {
    return 0;
  }
  if ((DAT_021d6730 & 0x1f) != 0) {
    DAT_021d6730 = 0;
    return 0;
  }
  MIi_CpuClearFast(0,DAT_021d6730,param_2);
  uVar3 = 0;
  if (uVar1 != 1) {
    iVar2 = 0;
    do {
      uVar3 = uVar3 + 1;
      *(uint *)(DAT_021d6730 + iVar2) = DAT_021d6730 + uVar3 * 0x478;
      iVar2 = iVar2 + 0x478;
    } while (uVar3 < uVar1 - 1);
  }
  *(undefined4 *)(DAT_021d6730 + uVar1 * 0x478 + -0x478) = 0;
  DAT_021d672c = DAT_021d6730;
  return 1;
}

