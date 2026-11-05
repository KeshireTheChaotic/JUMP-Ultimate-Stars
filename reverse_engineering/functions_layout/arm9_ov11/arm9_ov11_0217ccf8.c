
void FUN_0217ccf8(int param_1)

{
  char cVar1;
  int iVar2;
  int iVar3;
  int *piVar4;
  uint uVar5;
  int iVar6;
  int iVar7;
  int iVar8;
  int *piVar9;
  bool bVar10;
  
  iVar2 = FUN_0217bfe0();
  if (iVar2 == 0) {
    FUN_0217aa58(param_1);
    *(undefined1 *)(param_1 + 0x105) = 1;
    return;
  }
  cVar1 = *(char *)(param_1 + 0x38);
  bVar10 = cVar1 < '\0';
  if (bVar10) {
    cVar1 = *(char *)(param_1 + 0x107);
  }
  iVar2 = **(int **)(param_1 + 0x14);
  if (bVar10) {
    *(char *)(param_1 + 0x38) = cVar1;
  }
  iVar3 = FUN_02175628(*(undefined4 *)(param_1 + 0x1c));
  iVar3 = *(int *)(*(int *)(iVar3 + 4) + 0x10);
  piVar9 = *(int **)(iVar3 + (*(uint *)(param_1 + 0xd4) >> 0x1c) * 4 + 0x98);
  piVar4 = *(int **)(iVar3 + *(char *)(param_1 + 0x38) * 4 + 0x98);
  iVar7 = *piVar9;
  iVar8 = *piVar4;
  iVar6 = piVar4[1];
  iVar3 = piVar9[1];
  if (iVar8 != iVar7) {
    uVar5 = *(uint *)(iVar2 + 0xe8);
    if (iVar8 != iVar7 && -1 < iVar8 - iVar7) {
      uVar5 = uVar5 | 4;
      *(uint *)(iVar2 + 0xe8) = uVar5;
    }
    if (iVar8 - iVar7 < 1) {
      *(uint *)(iVar2 + 0xe8) = uVar5 | 8;
    }
  }
  if (iVar6 == iVar3) {
    return;
  }
  uVar5 = *(uint *)(iVar2 + 0xe8);
  if (iVar6 != iVar3 && -1 < iVar6 - iVar3) {
    uVar5 = uVar5 | 2;
    *(uint *)(iVar2 + 0xe8) = uVar5;
  }
  if (iVar6 - iVar3 < 1) {
    *(uint *)(iVar2 + 0xe8) = uVar5 | 1;
  }
  return;
}

