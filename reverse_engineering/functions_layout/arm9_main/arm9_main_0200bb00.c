
ulonglong FUN_0200bb00(int param_1,uint param_2)

{
  int iVar1;
  uint uVar2;
  uint uVar3;
  uint uVar4;
  uint uVar5;
  uint uVar6;
  uint uVar7;
  int iVar8;
  uint uVar9;
  int iVar10;
  bool bVar11;
  byte bVar12;
  
  if (param_2 < 0x7ff00000) {
    uVar5 = param_2 >> 0x14;
    if (uVar5 == 0) {
      return 0;
    }
    uVar2 = param_2 & 0x800fffff | 0x100000;
    iVar10 = (int)uVar5 >> 1;
    if (!(bool)((byte)uVar5 & 1)) {
      iVar10 = iVar10 + -1;
      iVar8 = param_1 >> 0x1f;
      param_1 = param_1 << 1;
      uVar2 = uVar2 * 2 - iVar8;
    }
    uVar5 = param_1 << 1;
    uVar3 = uVar2 * 2 - (param_1 >> 0x1f);
    uVar4 = 0;
    uVar7 = 0;
    uVar2 = 0x200000;
    do {
      iVar8 = uVar7 + uVar2;
      if (iVar8 <= (int)uVar3) {
        uVar7 = iVar8 + uVar2;
        uVar3 = uVar3 - iVar8;
        uVar4 = uVar4 + uVar2;
      }
      iVar8 = (int)uVar5 >> 0x1f;
      uVar5 = uVar5 * 2;
      uVar3 = uVar3 * 2 - iVar8;
      uVar2 = uVar2 >> 1;
    } while (uVar2 != 0);
    uVar2 = 0;
    iVar8 = 0;
    bVar11 = uVar7 <= uVar3;
    if (uVar3 == uVar7) {
      bVar11 = 0x7fffffff < uVar5;
    }
    if (bVar11) {
      bVar11 = uVar5 < 0x80000000;
      uVar5 = uVar5 + 0x80000000;
      uVar3 = uVar3 - (uVar7 + bVar11);
      uVar7 = uVar7 + 1;
      uVar2 = 0x80000000;
    }
    uVar6 = uVar5 << 1;
    uVar3 = uVar3 * 2 - ((int)uVar5 >> 0x1f);
    uVar5 = 0x40000000;
    do {
      uVar9 = iVar8 + uVar5;
      bVar11 = uVar3 <= uVar7;
      if (uVar7 == uVar3) {
        bVar11 = uVar6 <= uVar9;
      }
      if (!bVar11 || uVar7 == uVar3 && uVar9 == uVar6) {
        iVar8 = uVar9 + uVar5;
        bVar11 = uVar6 < uVar9;
        uVar6 = uVar6 - uVar9;
        uVar3 = uVar3 - (uVar7 + bVar11);
        uVar2 = uVar2 + uVar5;
      }
      iVar1 = (int)uVar6 >> 0x1f;
      uVar6 = uVar6 << 1;
      uVar3 = uVar3 * 2 - iVar1;
      uVar5 = uVar5 >> 1;
    } while (uVar5 != 0);
    if (uVar3 == 0 && uVar6 == 0) {
      uVar2 = uVar2 & 0xfffffffe;
    }
    bVar12 = (byte)uVar2 & 1;
    uVar5 = (uint)((byte)uVar4 & 1) << 0x1f | uVar2 >> 1;
    return CONCAT44((uVar4 >> 1) + (uint)CARRY4(uVar5,(uint)bVar12) + 0x1ff00000 + iVar10 * 0x100000
                    ,uVar5 + bVar12);
  }
  if ((param_2 & 0x80000000) == 0) {
    if (param_1 == 0 && (param_2 & 0xfffff) == 0) {
      return CONCAT44(param_2,param_1);
    }
  }
  else if ((param_2 & 0x7fffffff) >> 0x14 == 0) {
    return 0;
  }
  DAT_020a0c10 = 0x21;
  return CONCAT44(param_2,param_1) | 0x7ff8000000000000;
}

