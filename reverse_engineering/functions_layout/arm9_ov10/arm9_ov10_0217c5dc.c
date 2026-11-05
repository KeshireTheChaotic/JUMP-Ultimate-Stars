
void FUN_0217c5dc(void)

{
  int iVar1;
  
  iVar1 = FUN_02178448();
  if (iVar1 != 0) {
    iVar1 = FUN_02178448();
    if (*(int *)(iVar1 + 0xe4) != 0) {
      iVar1 = FUN_02178448();
      FUN_0217fdb0(*(undefined4 *)(iVar1 + 0xe4));
      iVar1 = FUN_02178448();
      *(undefined4 *)(iVar1 + 0xe4) = 0;
    }
    FUN_0218cd38();
    FUN_02178434(0);
    if (DAT_021a75b4 != 0) {
      FUN_021758a4(4,DAT_021a75b4,0);
      DAT_021a75b4 = 0;
    }
    FUN_021796c8();
    iVar1 = FUN_02178448();
    *(undefined1 *)(iVar1 + 0x18) = 1;
  }
  return;
}

