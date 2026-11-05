
void FUN_0215857c(int param_1)

{
  int iVar1;
  
  iVar1 = 0;
  do {
    if (*(int *)(param_1 + iVar1 * 4 + 0x80) != 0) {
      FUN_0216ac10();
      *(undefined4 *)(param_1 + iVar1 * 4 + 0x80) = 0;
    }
    iVar1 = iVar1 + 1;
  } while (iVar1 < 2);
  return;
}

