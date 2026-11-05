
undefined4 FUN_0214fe44(int param_1)

{
  int iVar1;
  int iVar2;
  int iVar3;
  
  iVar1 = *(int *)(param_1 + 0x18);
  for (iVar2 = 0; iVar2 < *(int *)(param_1 + 0x14); iVar2 = iVar2 + 1) {
    iVar3 = param_1 + iVar2 * 4;
    if (*(int *)(iVar3 + 0x5c) != *(int *)(iVar3 + 0x4c)) {
      iVar1 = iVar1 + -1;
    }
  }
  for (iVar2 = 0; iVar2 < *(int *)(param_1 + 0x14); iVar2 = iVar2 + 1) {
    iVar3 = param_1 + iVar2 * 4;
    if (*(int *)(iVar3 + 0x5c) != *(int *)(iVar3 + 0x4c)) {
      *(int *)(iVar3 + 0x4c) = iVar1;
      *(int *)(iVar3 + 0x5c) = iVar1;
    }
  }
  *(int *)(param_1 + 0x18) = iVar1;
  if (iVar1 < 2) {
    return 1;
  }
  return 0;
}

