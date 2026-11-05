
undefined4 FUN_021a20ac(int param_1,int param_2)

{
  int iVar1;
  
  iVar1 = 0;
  while( true ) {
    if (2 < iVar1) {
      return 0;
    }
    if (param_2 == *(int *)(param_1 + iVar1 * 4 + 0x3c)) break;
    iVar1 = iVar1 + 1;
  }
  return 1;
}

