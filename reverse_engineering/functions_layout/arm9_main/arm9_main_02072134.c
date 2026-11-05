
int FUN_02072134(undefined4 param_1)

{
  int iVar1;
  int iVar2;
  
  iVar2 = 0;
  while( true ) {
    if ((int)(uint)DAT_020b0d6d <= iVar2) {
      return -1;
    }
    iVar1 = FUN_020725bc(param_1,iVar2 * 0x4c + 0x20b1fb4);
    if (iVar1 != 0) break;
    iVar2 = iVar2 + 1;
  }
  return iVar2;
}

