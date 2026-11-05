
undefined4 FUN_02189ba8(int param_1,int param_2)

{
  int iVar1;
  
  iVar1 = 0;
  while (((iVar1 == 0 || (iVar1 == 0xd)) ||
         (*(char *)(param_1 + iVar1) == *(char *)(param_2 + iVar1)))) {
    iVar1 = iVar1 + 1;
    if (0x1f < iVar1) {
      return 1;
    }
  }
  return 0;
}

