
void FUN_0217893c(int param_1,undefined4 param_2)

{
  int iVar1;
  
  if (param_1 < 0x33) {
    if (0x31 < param_1) {
      iVar1 = FUN_02178448();
      FUN_0218db38(param_2,*(undefined4 *)(iVar1 + 0x1f8));
      return;
    }
    if ((param_1 < 0xb) && (7 < param_1)) {
      if (param_1 == 8) {
        iVar1 = FUN_02178448();
        FUN_0218db38(param_2,*(undefined1 *)(iVar1 + 0x14));
        return;
      }
      if (param_1 == 10) {
        iVar1 = FUN_02178448();
        FUN_0218db38(param_2,*(undefined1 *)(iVar1 + 0x16));
        return;
      }
    }
  }
  else {
    switch(param_1) {
    case 0x33:
      iVar1 = FUN_02178448();
      FUN_0218db38(param_2,*(undefined1 *)(iVar1 + 0x15));
      return;
    case 0x34:
      iVar1 = FUN_02178448();
      FUN_0218db38(param_2,*(undefined4 *)(iVar1 + 0x20));
      return;
    case 0x35:
      FUN_0218db38(param_2,3);
      return;
    case 0x36:
      FUN_0218db38(param_2,1);
      return;
    }
  }
  param_1 = param_1 + -100;
  if (((-1 < param_1) && (param_1 < 0x9a)) &&
     (param_1 = param_1 * 0xc, (&DAT_021a75d8)[param_1] != '\0')) {
    if ((&DAT_021a75d9)[param_1] != '\0') {
      FUN_0218daf8(param_2,*(undefined4 *)(&DAT_021a75e0 + param_1));
      return;
    }
    FUN_0218db38(param_2,**(undefined4 **)(&DAT_021a75e0 + param_1));
  }
  return;
}

