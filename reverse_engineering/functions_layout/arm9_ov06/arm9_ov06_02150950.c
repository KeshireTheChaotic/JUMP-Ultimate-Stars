
void FUN_02150950(int param_1)

{
  int iVar1;
  
  for (iVar1 = 1; iVar1 < *(int *)(param_1 + 0x14); iVar1 = iVar1 + 1) {
    *(undefined4 *)(param_1 + iVar1 * 4 + 0x4c) = 0;
  }
  if (DAT_020afeac == 0) {
    DAT_020afeac = 0x2a30;
  }
  return;
}

