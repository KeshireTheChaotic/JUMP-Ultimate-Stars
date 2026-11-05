
undefined4 FUN_0214df2c(int param_1,int param_2)

{
  int iVar1;
  int iVar2;
  
  iVar1 = *(int *)(param_1 + 0x38) + param_2 * 0x40;
  if (*(char *)(iVar1 + 0x2f) != -1) {
    return 1;
  }
  iVar2 = 0;
  while( true ) {
    if ((int)(uint)*(byte *)(iVar1 + 0x30) <= iVar2) {
      return 1;
    }
    if (((&DAT_020b4084)[*(byte *)(iVar1 + iVar2 + 0x31)] & 1) == 0) break;
    iVar2 = iVar2 + 1;
  }
  return 0;
}

