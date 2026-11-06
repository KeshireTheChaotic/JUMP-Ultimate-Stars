
undefined4 FUN_0214f6e0(void)

{
  int iVar1;
  undefined4 uVar2;
  uint local_10;
  
  if (DAT_0216cf98 == 0) {
    return 0xffffffff;
  }
  iVar1 = FUN_0214fb40();
  if (iVar1 == 0) {
    return 0xffffffff;
  }
  FUN_02053bd8(&DAT_0216cfac,&local_10,1);
  if (local_10 < 0x15) {
    uVar2 = (*(code *)((int)&switchD_0214f72c::switchdataD_0214f72e +
                      (int)(short)(&switchD_0214f72c::switchdataD_0214f72e)[local_10]))();
    return uVar2;
  }
  OS_DisableInterrupts();
  DAT_0216cf8c = 0;
  DAT_0216cf98 = 0;
  OS_RestoreInterrupts();
  return 0xffffffff;
}

