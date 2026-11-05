
undefined4 FUN_0200aae8(byte *param_1,byte *param_2)

{
  uint uVar1;
  uint uVar2;
  
  do {
    uVar1 = (uint)*param_1;
    if (uVar1 < 0x80) {
      uVar1 = (uint)(byte)(&DAT_0208d420)[uVar1];
    }
    uVar2 = (uint)*param_2;
    if (uVar2 < 0x80) {
      uVar2 = (uint)(byte)(&DAT_0208d420)[uVar2];
    }
    if (uVar1 < uVar2) {
      return 0xffffffff;
    }
    if (uVar1 != uVar2) {
      return 1;
    }
    param_1 = param_1 + 1;
    param_2 = param_2 + 1;
  } while (uVar1 != 0);
  return 0;
}

