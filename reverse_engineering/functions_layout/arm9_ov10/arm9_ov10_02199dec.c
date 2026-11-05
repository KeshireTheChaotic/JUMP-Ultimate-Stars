
undefined4 FUN_02199dec(int param_1,int param_2)

{
  int iVar1;
  
  iVar1 = 0;
  do {
    if (*(char *)(param_1 + iVar1) != *(char *)(param_2 + iVar1)) {
      return 0;
    }
    iVar1 = iVar1 + 1;
  } while (iVar1 < 6);
  return 1;
}

