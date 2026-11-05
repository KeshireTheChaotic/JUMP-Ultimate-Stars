
undefined8 FUN_0219c43c(char *param_1)

{
  char cVar1;
  longlong lVar2;
  char *pcVar3;
  int iVar4;
  int iVar5;
  uint uVar6;
  uint uVar7;
  uint uVar8;
  int iVar9;
  bool bVar10;
  undefined8 uVar11;
  
  iVar5 = 0;
  for (pcVar3 = param_1; cVar1 = *pcVar3, cVar1 != '\0'; pcVar3 = pcVar3 + 1) {
    if ((cVar1 < '0') || ('9' < cVar1)) {
      uVar11 = FUN_0219c4e8();
      return uVar11;
    }
    iVar5 = iVar5 + 1;
    if (0xb < iVar5) break;
  }
  uVar8 = 0;
  param_1 = param_1 + iVar5;
  iVar4 = 0;
  iVar9 = 0;
  if (0 < iVar5) {
    for (; param_1 = param_1 + -1, iVar9 < iVar5; iVar9 = iVar9 + 1) {
      uVar6 = (int)*param_1 - 0x30;
      lVar2 = (ulonglong)(uint)(&DAT_021a3684)[iVar9 * 2] * (ulonglong)uVar6;
      uVar7 = (uint)lVar2;
      bVar10 = CARRY4(uVar8,uVar7);
      uVar8 = uVar8 + uVar7;
      iVar4 = iVar4 + ((int)uVar6 >> 0x1f) * (&DAT_021a3684)[iVar9 * 2] +
                      uVar6 * (&DAT_021a3688)[iVar9 * 2] + (int)((ulonglong)lVar2 >> 0x20) +
              (uint)bVar10;
    }
  }
  return CONCAT44(iVar4,uVar8);
}

