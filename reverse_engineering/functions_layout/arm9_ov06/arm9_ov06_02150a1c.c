
undefined4 FUN_02150a1c(int param_1)

{
  char cVar1;
  bool bVar2;
  int iVar3;
  undefined4 uVar4;
  int iVar5;
  
  bVar2 = true;
  cVar1 = *(char *)(*(int *)(*(int *)(DAT_02172960 + 0x11c) + 0x56c) + 0x41);
  for (iVar5 = 2; iVar5 < *(int *)(param_1 + 0x14); iVar5 = iVar5 + 1) {
    iVar3 = iVar5 * 4;
    if (cVar1 == *(char *)(*(int *)(*(int *)(DAT_02172960 + iVar3 + 0x118) + 0x56c) + 0x41)) {
      *(undefined4 *)(param_1 + iVar3 + 0x4c) = 1;
    }
    else {
      *(undefined4 *)(param_1 + iVar3 + 0x4c) = 0;
    }
  }
  for (iVar5 = 2; iVar5 < *(int *)(param_1 + 0x14); iVar5 = iVar5 + 1) {
    if (*(int *)(param_1 + iVar5 * 4 + 0x4c) == 0) {
      bVar2 = false;
    }
  }
  if (bVar2) {
    if (3 < DAT_02172964) {
      FUN_0215041c(param_1);
      return 1;
    }
    DAT_02172964 = DAT_02172964 + 1;
  }
  else {
    DAT_02172964 = 0;
  }
  uVar4 = FUN_0214f9fc(param_1);
  return uVar4;
}

