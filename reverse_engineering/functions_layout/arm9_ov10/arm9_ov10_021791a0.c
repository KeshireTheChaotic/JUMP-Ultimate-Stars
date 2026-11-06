
void FUN_021791a0(void)

{
  char *pcVar1;
  int iVar2;
  int iVar3;
  int iVar4;
  int iVar5;
  uint uVar6;
  uint uVar7;
  uint uVar8;
  char *pcVar9;
  uint uVar10;
  int iVar11;
  int iVar12;
  bool bVar13;
  longlong lVar14;
  undefined8 uVar15;
  
  if (DAT_021a75a8 == (char *)0x0) {
    return;
  }
  if (*DAT_021a75a8 == '\0') {
    return;
  }
  iVar2 = FUN_02178448();
  if (*(char *)(iVar2 + 0x15) == '\x02') {
    return;
  }
  iVar2 = FUN_02178448();
  if (*(char *)(iVar2 + 0x15) == '\x03') {
    return;
  }
  iVar2 = FUN_02178448();
  if (*(int *)(iVar2 + 0x198) == 0x13) {
    iVar2 = FUN_021794e0(0);
    pcVar9 = DAT_021a75a8;
    if (*(int *)(DAT_021a75a8 + 8) == iVar2) {
      if (*(int *)(DAT_021a75a8 + 0xc) == iVar2) {
        iVar2 = FUN_02178448();
        iVar12 = FUN_02178448();
        *(undefined1 *)(iVar2 + 0x16) = *(undefined1 *)(iVar12 + 0xd);
        iVar2 = FUN_02178448();
        iVar12 = FUN_02178448();
        *(char *)(iVar2 + 0x19c) = *(char *)(iVar12 + 0xd) + -1;
        FUN_0217a320(0);
        return;
      }
      uVar15 = OS_GetTick();
      *(undefined8 *)(pcVar9 + 0x18) = uVar15;
      pcVar9[8] = '\0';
      pcVar9[9] = '\0';
      pcVar9[10] = '\0';
      pcVar9[0xb] = '\0';
      iVar2 = FUN_02178448();
      if (*(char *)(iVar2 + 0x15) == '\0') {
        FUN_02178434(3);
        iVar2 = FUN_02178448();
        *(undefined4 *)(iVar2 + 0xe8) = 2;
        iVar2 = FUN_02178448();
        uVar15 = OS_GetTick();
        *(undefined8 *)(iVar2 + 0xec) = uVar15;
        return;
      }
      FUN_02178434(4);
      FUN_0217abc4(1,0,0);
      return;
    }
    uVar10 = (uint)(byte)DAT_021a75a8[2];
    lVar14 = OS_GetTick();
    uVar7 = (uint)(lVar14 - *(longlong *)(pcVar9 + 0x18));
    uVar15 = FUN_0200d0c4(uVar7 * 0x40,
                          (int)((ulonglong)(lVar14 - *(longlong *)(pcVar9 + 0x18)) >> 0x20) * 0x40 |
                          uVar7 >> 0x1a,0x82ea,0);
    uVar6 = (uint)((ulonglong)uVar15 >> 0x20);
    uVar7 = (uint)uVar15;
    bVar13 = uVar10 * 6000 <= uVar7;
    if (uVar6 == 0 && bVar13 <= uVar6) {
      return;
    }
    if (5 < uVar10) {
      FUN_02179474(1);
      FUN_02179e44();
      FUN_02179f88(1);
      return;
    }
    iVar12 = 1;
    iVar2 = FUN_02178448(uVar7 + uVar10 * -6000,uVar6 - !bVar13);
    if (*(char *)(iVar2 + 0xd) != '\0') {
      iVar11 = 2;
      iVar2 = 4;
      do {
        iVar3 = FUN_02178448();
        if ((*(uint *)(DAT_021a75a8 + 8) & 1 << (uint)*(byte *)(iVar3 + iVar12 + 0x2c8)) == 0) {
          iVar3 = FUN_02178448();
          iVar4 = FUN_02178448();
          iVar5 = FUN_02178448();
          FUN_0217c024(0x11,*(undefined4 *)(iVar3 + iVar2 + 0xf4),
                       *(undefined4 *)(iVar4 + iVar2 + 0x24),*(undefined2 *)(iVar5 + iVar11 + 0xa4),
                       0,0);
          iVar3 = FUN_0217af70();
          if (iVar3 != 0) {
            return;
          }
        }
        iVar11 = iVar11 + 2;
        iVar2 = iVar2 + 4;
        iVar12 = iVar12 + 1;
        iVar3 = FUN_02178448();
      } while (iVar12 <= (int)(uint)*(byte *)(iVar3 + 0xd));
    }
    DAT_021a75a8[2] = DAT_021a75a8[2] + '\x01';
    return;
  }
  iVar2 = FUN_02178448();
  if ((*(int *)(iVar2 + 0x198) != 4) && (iVar2 = FUN_02178448(), *(int *)(iVar2 + 0x198) != 3)) {
    return;
  }
  pcVar9 = DAT_021a75a8;
  iVar2 = FUN_02178448();
  pcVar1 = DAT_021a75a8;
  uVar7 = (uint)*(byte *)(iVar2 + 0xd);
  if ((int)uVar7 < (int)((byte)pcVar9[1] - 1)) {
    return;
  }
  if (pcVar9[2] == '\0') {
    lVar14 = OS_GetTick();
    uVar7 = (uint)(lVar14 - *(longlong *)(pcVar1 + 0x10));
    uVar15 = FUN_0200d0c4(uVar7 * 0x40,
                          (int)((ulonglong)(lVar14 - *(longlong *)(pcVar1 + 0x10)) >> 0x20) * 0x40 |
                          uVar7 >> 0x1a,0x82ea,0);
    uVar10 = (uint)((ulonglong)uVar15 >> 0x20);
    uVar6 = (uint)uVar15;
    uVar8 = *(uint *)(pcVar1 + 4);
    iVar2 = uVar6 - uVar8;
    uVar7 = uVar10 - (uVar8 > uVar6);
    pcVar9 = pcVar1;
    if (uVar10 != 0 || uVar10 < (uVar8 <= uVar6)) goto LAB_021793c4;
  }
  pcVar1 = DAT_021a75a8;
  if (pcVar9[2] == '\0') {
    return;
  }
  lVar14 = OS_GetTick(&DAT_021a75a8,uVar7);
  lVar14 = lVar14 - *(longlong *)(pcVar1 + 0x18);
  uVar7 = (uint)lVar14;
  uVar15 = FUN_0200d0c4(uVar7 * 0x40,(int)((ulonglong)lVar14 >> 0x20) * 0x40 | uVar7 >> 0x1a,0x82ea,
                        0);
  uVar10 = (uint)((ulonglong)uVar15 >> 0x20);
  uVar6 = (uint)uVar15;
  uVar8 = *(uint *)(pcVar1 + 4) >> 2;
  iVar2 = uVar6 - uVar8;
  uVar7 = uVar10 - (uVar8 > uVar6);
  if (uVar10 == 0 && (uVar8 <= uVar6) <= uVar10) {
    return;
  }
LAB_021793c4:
  iVar2 = FUN_02178448(iVar2,uVar7);
  if (*(int *)(iVar2 + 0x1fc) != 0) {
    iVar2 = FUN_02178448();
    FUN_0217aad4(*(undefined4 *)(iVar2 + 0x1fc));
    iVar2 = FUN_0217af70();
    if (iVar2 != 0) {
      return;
    }
  }
  FUN_02178434(0x13);
  iVar12 = 1;
  iVar2 = FUN_02178448();
  if (*(char *)(iVar2 + 0xd) != '\0') {
    iVar11 = 2;
    iVar2 = 4;
    do {
      iVar3 = FUN_02178448();
      iVar4 = FUN_02178448();
      iVar5 = FUN_02178448();
      FUN_0217c024(0x11,*(undefined4 *)(iVar3 + iVar2 + 0xf4),*(undefined4 *)(iVar4 + iVar2 + 0x24),
                   *(undefined2 *)(iVar5 + iVar11 + 0xa4),0,0);
      iVar3 = FUN_0217af70();
      if (iVar3 != 0) {
        return;
      }
      iVar11 = iVar11 + 2;
      iVar2 = iVar2 + 4;
      iVar12 = iVar12 + 1;
      iVar3 = FUN_02178448();
    } while (iVar12 <= (int)(uint)*(byte *)(iVar3 + 0xd));
  }
  pcVar9 = DAT_021a75a8;
  uVar15 = OS_GetTick();
  *(undefined8 *)(pcVar9 + 0x18) = uVar15;
  pcVar9[2] = '\x01';
  return;
}

