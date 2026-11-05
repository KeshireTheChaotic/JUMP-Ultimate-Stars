
void FUN_02159fc8(int param_1,undefined4 param_2,undefined4 param_3,undefined4 param_4)

{
  undefined1 uVar1;
  int iVar2;
  char *pcVar3;
  undefined4 uVar4;
  int iVar5;
  int iVar6;
  int iVar7;
  int iVar8;
  int iVar9;
  
  iVar9 = *(int *)(*(int *)(param_1 + 4) + 0x10);
  iVar7 = *(int *)(iVar9 + 0x1c);
  if (*(int *)(*(int *)(*(int *)(iVar9 + 0xa8) + 4) + 0x224) != 0) {
    FUN_02028384(*(undefined4 *)(param_1 + 4),FUN_0215a168,param_3,param_4,param_4);
    return;
  }
  if (*(char *)(iVar9 + 0xb0) != '\0') {
    iVar2 = FUN_02159788();
    if (iVar2 < 0) {
      return;
    }
    pcVar3 = (char *)FUN_02159770();
    iVar2 = 1;
    iVar8 = 0;
    do {
      if ((*pcVar3 != '\0') && (pcVar3[0x20] == '\0')) {
        iVar6 = iVar7 + iVar2 * 0x18;
        *(undefined1 *)(iVar7 + iVar2 * 0x18) = 1;
        *(undefined1 *)(iVar6 + 1) = 0;
        FUN_02051890(pcVar3 + 10,iVar6 + 4,0x14);
        iVar2 = iVar2 + 1;
      }
      iVar8 = iVar8 + 1;
      pcVar3 = pcVar3 + 0x22;
    } while (iVar8 < 0xb);
    for (; iVar2 < 4; iVar2 = iVar2 + 1) {
      *(undefined1 *)(iVar7 + iVar2 * 0x18) = 0;
    }
    uVar1 = FUN_021597fc();
    *(undefined1 *)(iVar9 + 0xd) = uVar1;
    FUN_0215979c();
    return;
  }
  iVar2 = FUN_0215988c();
  if (-1 < iVar2) {
    uVar4 = FUN_0215988c();
    *(undefined4 *)(iVar9 + 0x14) = uVar4;
    *(undefined1 *)(iVar9 + 0xa0) = 1;
    iVar8 = 0;
    iVar2 = iVar9 + *(int *)(iVar9 + 0x14);
    iVar6 = 0;
    *(undefined1 *)(iVar2 + 0xa0) = 1;
    do {
      if (iVar6 != 0) {
        iVar2 = *(int *)(iVar9 + 0x14);
      }
      if (iVar6 == 0 || iVar6 == iVar2) {
LAB_0215a108:
        *(undefined1 *)(iVar7 + iVar8 * 0x18) = 1;
        uVar4 = FUN_02070cdc(iVar6);
        iVar2 = FUN_02051890(uVar4,iVar7 + iVar8 * 0x18 + 4,0x14);
        iVar8 = iVar8 + 1;
      }
      else {
        iVar5 = FUN_02159840(iVar6);
        iVar2 = 0;
        if (iVar5 != 0) goto LAB_0215a108;
      }
      iVar6 = iVar6 + 1;
    } while (iVar6 < 4);
    for (; iVar8 < 4; iVar8 = iVar8 + 1) {
      *(undefined1 *)(iVar7 + iVar8 * 0x18) = 0;
    }
  }
  uVar1 = FUN_021598a4();
  *(undefined1 *)(iVar9 + 0xd) = uVar1;
  return;
}

