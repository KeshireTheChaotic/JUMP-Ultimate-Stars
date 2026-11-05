
undefined8 FUN_0219c4e8(char *param_1)

{
  longlong lVar1;
  int iVar2;
  int iVar3;
  uint uVar4;
  int iVar5;
  char *pcVar6;
  uint uVar7;
  uint uVar8;
  bool bVar9;
  bool bVar10;
  
  iVar5 = 0;
  for (pcVar6 = param_1; (int)*pcVar6 != 0; pcVar6 = pcVar6 + 2) {
    uVar7 = (int)pcVar6[1] | ((int)*pcVar6 & 0xffffU) << 8;
    uVar4 = uVar7 & 0xffff;
    bVar9 = uVar4 < 0x8250;
    bVar10 = uVar4 == 0x824f;
    uVar7 = uVar7 & 0xffff;
    if (0x824e < uVar4) {
      bVar9 = 0x8257 < uVar7;
      bVar10 = uVar7 == 0x8258;
    }
    if (bVar9 && !bVar10) {
      return 0;
    }
    iVar5 = iVar5 + 1;
    if (0xb < iVar5) break;
  }
  uVar4 = 0;
  iVar3 = 0;
  pcVar6 = param_1 + iVar5 * 2;
  for (iVar2 = 0; iVar2 < iVar5; iVar2 = iVar2 + 1) {
    uVar7 = (((int)pcVar6[-1] | ((int)pcVar6[-2] & 0xffffU) << 8) & 0xffff) - 0x824f;
    lVar1 = (ulonglong)(uint)(&DAT_021a3684)[iVar2 * 2] * (ulonglong)uVar7;
    uVar8 = (uint)lVar1;
    bVar10 = CARRY4(uVar4,uVar8);
    uVar4 = uVar4 + uVar8;
    iVar3 = iVar3 + ((int)uVar7 >> 0x1f) * (&DAT_021a3684)[iVar2 * 2] +
                    uVar7 * (&DAT_021a3688)[iVar2 * 2] + (int)((ulonglong)lVar1 >> 0x20) +
            (uint)bVar10;
    pcVar6 = pcVar6 + -2;
  }
  return CONCAT44(iVar3,uVar4);
}

