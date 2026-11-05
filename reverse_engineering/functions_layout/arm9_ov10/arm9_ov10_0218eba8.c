
void FUN_0218eba8(void)

{
  int iVar1;
  undefined8 uVar2;
  undefined8 uVar3;
  
  (*DAT_021a8500)();
  if (DAT_021a8538 != 0) {
    FUN_02190ccc();
    FUN_02052ea0(100);
    FUN_02190ccc(DAT_021a8538);
    uVar2 = FUN_02054b44();
    while (iVar1 = (*DAT_021a8530)(), iVar1 != 0) {
      uVar3 = FUN_02054b44();
      if (0x16 < (int)(((uint)uVar3 >> 0x10 | (int)((ulonglong)uVar3 >> 0x20) << 0x10) -
                      ((uint)uVar2 >> 0x10 | (int)((ulonglong)uVar2 >> 0x20) << 0x10))) {
        return;
      }
      if (DAT_021a84e0 != '\0') {
        FUN_02191578(4);
        return;
      }
      FUN_02052ea0(100);
    }
  }
  return;
}

