
undefined4 FUN_021504d4(int param_1,int param_2)

{
  int iVar1;
  int iVar2;
  
  if (param_2 != 3) {
    if (param_2 != 4) {
      return 1;
    }
    iVar2 = 0;
    while( true ) {
      if (2 < iVar2) {
        return 1;
      }
      iVar1 = FUN_0214f1bc(*(undefined4 *)(param_1 + iVar2 * 4 + 0x70),0);
      if (iVar1 == 0) break;
      iVar2 = iVar2 + 1;
    }
    return 0;
  }
  iVar2 = 0;
  while( true ) {
    if (4 < iVar2) {
      return 1;
    }
    iVar1 = FUN_0214f1bc(*(undefined4 *)(param_1 + iVar2 * 4 + 0x5c),0);
    if (iVar1 == 0) break;
    iVar2 = iVar2 + 1;
  }
  return 0;
}

