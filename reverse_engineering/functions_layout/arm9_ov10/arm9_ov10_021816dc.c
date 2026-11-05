
int FUN_021816dc(int param_1,int param_2)

{
  int iVar1;
  
  iVar1 = 0;
  if (0 < param_2) {
    do {
      if (*(char *)(param_1 + iVar1) == '\0') {
        return iVar1 + 1;
      }
      iVar1 = iVar1 + 1;
    } while (iVar1 < param_2);
  }
  return -1;
}

