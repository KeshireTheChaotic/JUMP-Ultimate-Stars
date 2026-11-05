
void FUN_021788cc(int param_1,undefined4 param_2)

{
  char *pcVar1;
  int iVar2;
  
  if (param_1 == 0) {
    FUN_0218db58(param_2,8);
    FUN_0218db58(param_2,10);
    FUN_0218db58(param_2,0x32);
    FUN_0218db58(param_2,0x33);
    FUN_0218db58(param_2,0x34);
    FUN_0218db58(param_2,0x35);
    FUN_0218db58(param_2,0x36);
    iVar2 = 0;
    pcVar1 = &DAT_021a75d8;
    do {
      if (*pcVar1 != '\0') {
        FUN_0218db58(param_2);
      }
      pcVar1 = pcVar1 + 0xc;
      iVar2 = iVar2 + 1;
    } while (iVar2 < 0x9a);
  }
  else if (param_1 != 1) {
    return;
  }
  return;
}

