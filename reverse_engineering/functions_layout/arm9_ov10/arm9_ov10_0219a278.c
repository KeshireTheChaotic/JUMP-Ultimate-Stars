
void FUN_0219a278(void)

{
  int iVar1;
  int iVar2;
  int iVar3;
  int iVar4;
  int iVar5;
  
  if (*(int *)(DAT_0214ccf8 + 0x1c) == 0) {
    return;
  }
  iVar3 = 0;
  while( true ) {
    if (*(int *)(DAT_0214ccf8 + 0x44) <= iVar3) break;
    iVar2 = iVar3 * 0xc;
    iVar5 = *(int *)(DAT_0214ccf8 + 0x1c);
    iVar4 = *(int *)(DAT_0214ccf8 + 0x18);
    iVar1 = thunk_FUN_020024cc(iVar5 + iVar2,iVar4 + iVar2,0xc);
    if (iVar1 != 0) {
      FUN_0219a1a8(iVar5 + iVar2,iVar4 + iVar2);
      FUN_0208c598();
    }
    iVar3 = iVar3 + 1;
  }
  FUN_02051890(*(undefined4 *)(DAT_0214ccf8 + 0x18),*(undefined4 *)(DAT_0214ccf8 + 0x1c),
               *(int *)(DAT_0214ccf8 + 0x44) * 0xc);
  return;
}

