
void FUN_02176cf8(void)

{
  if (DAT_021a7410 != (int *)0x0) {
    if (DAT_021a7410[0xd9] != 0) {
      FUN_0218db80();
      DAT_021a7410[0xd9] = 0;
    }
    *(undefined1 *)(DAT_021a7410 + 0xdb) = 0;
    if (DAT_021a7410[0x10e] != 0) {
      FUN_0217fdb0();
      DAT_021a7410[0x10e] = 0;
    }
    FUN_0218cd38();
    FUN_02189b50();
    if (DAT_021a7410[7] != 0) {
      FUN_0218236c(DAT_021a7410 + 7,0,0,0);
      FUN_0218236c(DAT_021a7410 + 7,3,0,0);
      FUN_0218236c(DAT_021a7410 + 7,1,0,0);
      FUN_0218236c(DAT_021a7410 + 7,2,0,0);
      FUN_021823ac(DAT_021a7410 + 7);
      FUN_021823dc(DAT_021a7410 + 7);
      DAT_021a7410[7] = 0;
    }
    FUN_021774ec();
    FUN_02177e48();
    FUN_0217ca78();
    FUN_0217e980();
    if (*DAT_021a7410 != 0) {
      FUN_0218aa40();
      *DAT_021a7410 = 0;
    }
    DAT_021a7410 = (int *)0x0;
  }
  return;
}

