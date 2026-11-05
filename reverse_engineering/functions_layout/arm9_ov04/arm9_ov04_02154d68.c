
void FUN_02154d68(int param_1)

{
  char cVar1;
  int iVar2;
  undefined1 *puVar3;
  int iVar4;
  int iVar5;
  int iVar6;
  undefined4 uVar7;
  int iVar8;
  
  iVar5 = *(int *)(*(int *)(param_1 + 4) + 0x10);
  cVar1 = *(char *)(iVar5 + 0xf5);
  if (*(char *)(iVar5 + 0xf4) == cVar1) {
    return;
  }
  puVar3 = &DAT_02160410;
  if (cVar1 < ')') {
    if (cVar1 < '\x15') {
      iVar6 = 3;
    }
    else {
      iVar6 = 2;
    }
  }
  else {
    iVar6 = 1;
  }
  for (iVar4 = 0; iVar4 < 0x3c - *(char *)(iVar5 + 0xf5); iVar4 = iVar4 + 1) {
    uVar7 = *(undefined4 *)(iVar5 + iVar4 * 4 + 4);
    iVar8 = (char)puVar3[2] * 4 + 0x38;
    iVar2 = FUN_02154e44(uVar7);
    if (iVar8 != iVar2) {
      FUN_02154cf0(uVar7,iVar8);
    }
    puVar3 = puVar3 + 4;
  }
  for (; iVar4 < 0x3c; iVar4 = iVar4 + 1) {
    uVar7 = *(undefined4 *)(iVar5 + iVar4 * 4 + 4);
    iVar8 = iVar6 + (char)puVar3[2] * 4 + 0x38;
    iVar2 = FUN_02154e44(uVar7);
    if (iVar8 != iVar2) {
      FUN_02154cf0(uVar7,iVar8);
    }
    puVar3 = puVar3 + 4;
  }
  *(undefined1 *)(iVar5 + 0xf4) = *(undefined1 *)(iVar5 + 0xf5);
  return;
}

