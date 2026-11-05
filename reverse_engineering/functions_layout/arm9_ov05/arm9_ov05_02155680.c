
void FUN_02155680(int param_1)

{
  int iVar1;
  
  iVar1 = 0;
  do {
    if ((&DAT_0216d618)[iVar1 * 0x10] != '\0') {
      FUN_02155588(param_1 + iVar1 * 0x9c);
      (*(code *)(&DAT_0216d614)[iVar1 * 4])(param_1,param_1 + iVar1 * 0x9c);
    }
    iVar1 = iVar1 + 1;
  } while (iVar1 < 6);
  return;
}

