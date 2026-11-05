
void FUN_0215b070(void)

{
  undefined1 uVar1;
  undefined1 uVar2;
  undefined4 uVar3;
  int iVar4;
  int iVar5;
  undefined1 *puVar6;
  uint uVar7;
  int iVar8;
  uint uVar9;
  
  uVar2 = DAT_0216a968;
  uVar1 = DAT_0216a964;
  uVar9 = (uint)*(byte *)(DAT_0216e774 + 0x51);
  if (5 < uVar9) {
    uVar9 = 5;
  }
  iVar5 = 0;
  if (uVar9 != 0) {
    iVar4 = 0;
    do {
      uVar3 = FUN_02165ff4(0,uVar1);
      *(undefined4 *)(DAT_0216e774 + iVar4 + 0x10) = uVar3;
      uVar3 = FUN_02165ff4(0,uVar2);
      *(undefined4 *)(DAT_0216e774 + iVar4 + 0x24) = uVar3;
      iVar4 = iVar4 + 4;
      iVar5 = iVar5 + 1;
    } while (iVar5 < (int)uVar9);
  }
  uVar7 = 0;
  puVar6 = &DAT_0216a964;
  iVar5 = 0;
  do {
    FUN_02166014(0,*puVar6,*(undefined4 *)(DAT_0216e774 + 0x10));
    *(ushort *)(DAT_0216e774 + iVar5 + 0x42) =
         *(ushort *)(*(int *)(DAT_0216e774 + 0x10) + 4) & 0x3ff;
    puVar6 = puVar6 + 1;
    iVar5 = iVar5 + 2;
    uVar7 = uVar7 + 1;
  } while (uVar7 < 3);
  uVar7 = 0;
  puVar6 = &DAT_0216a968;
  iVar5 = 0;
  do {
    FUN_02166014(0,*puVar6,*(undefined4 *)(DAT_0216e774 + 0x24));
    *(ushort *)(DAT_0216e774 + iVar5 + 0x48) =
         *(ushort *)(*(int *)(DAT_0216e774 + 0x24) + 4) & 0x3ff;
    puVar6 = puVar6 + 1;
    iVar5 = iVar5 + 2;
    uVar7 = uVar7 + 1;
  } while (uVar7 < 4);
  iVar5 = 0;
  if (uVar9 != 0) {
    iVar4 = 0;
    do {
      iVar8 = *(int *)(DAT_0216e774 + iVar4 + 0x10);
      *(ushort *)(iVar8 + 4) = *(ushort *)(iVar8 + 4) & 0xf3ff | 0xc00;
      iVar8 = *(int *)(DAT_0216e774 + iVar4 + 0x24);
      *(ushort *)(iVar8 + 4) = *(ushort *)(iVar8 + 4) & 0xf3ff | 0xc00;
      iVar4 = iVar4 + 4;
      iVar5 = iVar5 + 1;
    } while (iVar5 < (int)uVar9);
  }
  return;
}

