
void FUN_0215308c(int param_1)

{
  uint uVar1;
  
  uVar1 = FUN_02086d80();
  if ((uint)*(byte *)(param_1 + 0xbf) == (1 << (uVar1 & 0xff)) - 1U) {
    (*DAT_020a0e18)();
    FUN_02087160();
    *(undefined1 *)(param_1 + 0xbe) = 1;
    FUN_020876ac();
    return;
  }
  return;
}

