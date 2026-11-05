
undefined4 FUN_02162d38(int param_1,int param_2,int param_3)

{
  char cVar1;
  int iVar2;
  
  if ((*(int *)(param_1 + 0x30) != 0) &&
     (iVar2 = FUN_02085d00(*(int *)(param_1 + 0x30),param_1,param_2,param_3), iVar2 != 0)) {
    return 0;
  }
  iVar2 = (param_3 >> 0xc) * 0x40 + (param_2 >> 0xc);
  while( true ) {
    if (0xfff < iVar2) {
      return 0;
    }
    cVar1 = *(char *)(*(int *)(param_1 + 0x14) + iVar2 * 8 + 2);
    if (cVar1 == '\a') break;
    if (cVar1 != '\v' && cVar1 != '\0') {
      return 0;
    }
    iVar2 = iVar2 + *(short *)(*(int *)(param_1 + 0x10) + 4);
  }
  return 1;
}

