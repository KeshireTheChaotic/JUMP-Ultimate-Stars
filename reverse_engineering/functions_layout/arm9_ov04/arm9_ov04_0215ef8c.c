
undefined4 FUN_0215ef8c(int param_1,int param_2)

{
  int iVar1;
  
  iVar1 = 0;
  while( true ) {
    if (*(char *)(param_1 + 0x10) <= iVar1) {
      return 0;
    }
    if (param_2 == *(char *)(param_1 + iVar1 * 4)) break;
    iVar1 = iVar1 + 1;
  }
  return 1;
}

