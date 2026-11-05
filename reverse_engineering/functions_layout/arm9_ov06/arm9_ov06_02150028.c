
void FUN_02150028(int param_1)

{
  int iVar1;
  
  FUN_02150134(param_1,*(int *)(param_1 + 0x14) + 1);
  for (iVar1 = 0; iVar1 < *(int *)(param_1 + 0x14); iVar1 = iVar1 + 1) {
    *(undefined4 *)(param_1 + iVar1 * 4 + 0x1c) = 1;
  }
  return;
}

