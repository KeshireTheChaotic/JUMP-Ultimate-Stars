
void FUN_0208c17c(void)

{
  int iVar1;
  
  iVar1 = thunk_FUN_02057adc();
  if (iVar1 == 0) {
    FUN_0208a410();
    thunk_FUN_02002488(DAT_0214ccec + 0x30,0xff,0xc);
    thunk_FUN_02002488(DAT_0214ccec + 0x3c,0xff,0xc);
    *(undefined1 *)(DAT_0214ccec + 0x30) = 0;
    *(undefined1 *)(DAT_0214ccec + 0x3c) = 0;
    return;
  }
  FUN_0208a410();
  thunk_FUN_02002488(DAT_0214ccec + 0x30,0xff,0xc);
  thunk_FUN_02002488(DAT_0214ccec + 0x3c,0xff,0xc);
  FUN_0208a6bc();
  return;
}

