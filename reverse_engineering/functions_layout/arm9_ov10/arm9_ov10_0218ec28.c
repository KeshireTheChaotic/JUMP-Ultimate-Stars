
void FUN_0218ec28(void)

{
  int iVar1;
  
  iVar1 = *(int *)(DAT_020aab78 + 0xa4);
  if ((iVar1 != 0) && (*(int *)(iVar1 + 0x60) != 0)) {
    FUN_0218ed18(*(undefined4 *)(iVar1 + 0x5c),*(int *)(iVar1 + 0x60),0,0);
    *(undefined4 *)(iVar1 + 0x60) = 0;
  }
  return;
}

