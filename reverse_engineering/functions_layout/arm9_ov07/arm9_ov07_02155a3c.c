
void FUN_02155a3c(int param_1,undefined4 param_2,undefined4 param_3,undefined4 param_4)

{
  char cVar1;
  bool bVar2;
  undefined1 uVar3;
  int iVar4;
  undefined4 uVar5;
  int iVar6;
  uint uVar7;
  undefined4 uVar8;
  int iVar9;
  undefined1 *puVar10;
  int iVar11;
  int iVar12;
  
  iVar12 = *(int *)(*(int *)(param_1 + 4) + 0x10);
  if (*(int *)(*(int *)(*(int *)(iVar12 + 0x5ec) + 4) + 0x224) != 0) {
    FUN_02028384(*(undefined4 *)(param_1 + 4),FUN_02155c20,param_3,param_4,param_4);
    return;
  }
  iVar4 = func_0x0219a0e0();
  if (iVar4 == 0) {
    return;
  }
  iVar4 = func_0x0219bee8();
  if (iVar4 != 0) {
    return;
  }
  iVar4 = 0;
  for (iVar11 = 0; iVar9 = func_0x0219d7ec(), iVar11 < iVar9; iVar11 = iVar11 + 1) {
    uVar5 = func_0x0219d80c(iVar11);
    iVar9 = FUN_02167cec();
    if (iVar9 != 0) {
      puVar10 = (undefined1 *)(iVar4 * 0x1c + iVar12 + 0x40);
      iVar9 = FUN_02167d00(uVar5);
      if (*(char *)(iVar12 + iVar4 + 0x5b8) == iVar9) {
        iVar9 = FUN_02167d18(uVar5);
        cVar1 = puVar10[1];
        uVar8 = FUN_02167d30(uVar5);
        iVar6 = thunk_FUN_020024cc(puVar10 + 4,uVar8,0x14);
        uVar7 = FUN_02167d08(uVar5);
        bVar2 = (byte)puVar10[0x19] != uVar7 || (iVar6 != 0 || cVar1 != iVar9);
        uVar7 = FUN_02167d10(uVar5);
        if ((byte)puVar10[0x1a] != uVar7) {
          bVar2 = true;
        }
      }
      else {
        bVar2 = true;
        if (*(int *)(iVar12 + 0x18) < 0) {
          *(int *)(iVar12 + 0x18) = iVar4;
        }
      }
      if (bVar2) {
        *puVar10 = 1;
        uVar3 = FUN_02167d18(uVar5);
        puVar10[1] = uVar3;
        puVar10[2] = 1;
        uVar8 = FUN_02167d30(uVar5);
        FUN_02051890(uVar8,puVar10 + 4,0x14);
        puVar10[0x18] = 0;
        uVar3 = FUN_02167d08(uVar5);
        puVar10[0x19] = uVar3;
        uVar3 = FUN_02167d10(uVar5);
        puVar10[0x1a] = uVar3;
        puVar10[0x1b] = 0;
        uVar3 = FUN_02167d00(uVar5);
        *(undefined1 *)(iVar12 + iVar4 + 0x5b8) = uVar3;
      }
      iVar4 = iVar4 + 1;
    }
  }
  if ((*(char *)(iVar12 + iVar4 + 0x5b8) != -1) && (*(int *)(iVar12 + 0x18) < 0)) {
    *(int *)(iVar12 + 0x18) = iVar4;
  }
  for (; iVar4 < *(int *)(iVar12 + 0x10); iVar4 = iVar4 + 1) {
    *(undefined1 *)(iVar4 * 0x1c + iVar12 + 0x40) = 0;
    *(undefined1 *)(iVar12 + iVar4 + 0x5b8) = 0xff;
  }
  return;
}

