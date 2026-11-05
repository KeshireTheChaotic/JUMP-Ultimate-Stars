
undefined4 FUN_0219df88(void)

{
  int iVar1;
  int iVar2;
  int iVar3;
  
  iVar1 = FUN_02070ff4();
  iVar3 = 0;
  while( true ) {
    if (0x31 < iVar3) {
      return 1;
    }
    iVar2 = FUN_020698cc(iVar3 * 0xc + iVar1);
    if (iVar2 == 0) break;
    iVar3 = iVar3 + 1;
  }
  return 0;
}

