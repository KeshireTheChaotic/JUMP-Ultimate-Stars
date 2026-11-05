
void FUN_02156db4(int param_1)

{
  int iVar1;
  
  *(int *)(param_1 + 0x18) = *(int *)(param_1 + 0x18) + *(int *)(param_1 + 0x28);
  if (*(int *)(param_1 + 0x28) < 1) {
    iVar1 = FUN_02156e50(*(undefined4 *)(param_1 + 4));
    if (iVar1 == 0) {
      FUN_0207506c(*(undefined4 *)(param_1 + 4),1);
    }
  }
  else {
    iVar1 = FUN_02156e50(*(undefined4 *)(param_1 + 4));
    if (iVar1 != 0) {
      FUN_0207506c(*(undefined4 *)(param_1 + 4),0);
    }
  }
  if ((*(int *)(param_1 + 0x28) < 0) &&
     (iVar1 = *(int *)(param_1 + 0x28) + 1, *(int *)(param_1 + 0x28) = iVar1, 0 < iVar1)) {
    *(undefined4 *)(param_1 + 0x28) = 0;
  }
  if (*(int *)(param_1 + 0x28) < 1) {
    return;
  }
  iVar1 = *(int *)(param_1 + 0x28) + -1;
  *(int *)(param_1 + 0x28) = iVar1;
  if (iVar1 < 0) {
    *(undefined4 *)(param_1 + 0x28) = 0;
  }
  return;
}

