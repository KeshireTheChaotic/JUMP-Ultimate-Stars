
void FUN_02173f44(int param_1)

{
  int iVar1;
  
  iVar1 = *(int *)(param_1 + 0xd8);
  *(int *)(param_1 + 0xd8) = iVar1 + 1;
  if (0x28 < iVar1) {
    *(undefined4 *)(param_1 + 0xd8) = 0;
    *(undefined1 *)(param_1 + 0x105) = 1;
  }
  if (*(int *)(**(int **)(param_1 + 0x14) + 0xe4) == 0) {
    return;
  }
  if (0x10 < *(int *)(param_1 + 0xd8)) {
    *(undefined4 *)(**(int **)(param_1 + 0x14) + 0xe4) = 0;
  }
  return;
}

