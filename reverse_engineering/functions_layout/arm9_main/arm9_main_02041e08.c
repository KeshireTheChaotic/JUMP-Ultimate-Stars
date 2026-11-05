
void FUN_02041e08(int param_1,uint param_2)

{
  char cVar1;
  
  cVar1 = *(char *)(param_1 + 0x431);
  if (cVar1 != '\0') {
    param_2 = (uint)*(byte *)(param_1 + 0x432);
  }
  if (cVar1 != '\0' && param_2 != 0) {
    FUN_0206537c(0);
    FUN_02065424(0x80);
    FUN_020653d4(0);
    FUN_02065660(6);
    FUN_020653d4(8);
    *(undefined4 *)(DAT_020a104c + 4) = 0x20000;
    FUN_020459ec(DAT_020a0e64,0x40000);
    return;
  }
  if (cVar1 != '\0') {
    FUN_0206537c(0);
    FUN_020653d4(0);
    FUN_02065424(0x80);
    FUN_02065660(0xe);
    FUN_020653d4(0x100);
    *(undefined4 *)(DAT_020a104c + 4) = 0x4000;
    FUN_020459ec(DAT_020a0e64,0x60000);
    return;
  }
  if (*(char *)(param_1 + 0x432) == '\0') {
    FUN_02065424(0);
    FUN_0206537c(0x80);
    FUN_020653d4(0);
    FUN_02065660(10);
    FUN_02065424(4);
    FUN_020653d4(0x100);
    *(undefined4 *)(DAT_020a104c + 4) = 0x4000;
    FUN_020459ec(DAT_020a0e64,0x40000);
    return;
  }
  FUN_02065424(0);
  FUN_0206537c(0x80);
  FUN_020653d4(0);
  FUN_02065660(2);
  FUN_02065424(4);
  FUN_020653d4(8);
  *(undefined4 *)(DAT_020a104c + 4) = 0x20000;
  FUN_020459ec(DAT_020a0e64);
  return;
}

