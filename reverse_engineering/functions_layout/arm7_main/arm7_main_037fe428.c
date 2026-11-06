
void FUN_037fe428(void)

{
  MI_StopDma(0);
  MI_StopDma(1);
  MI_StopDma(2);
  MI_StopDma(3);
  OS_SetIrqMask(0x40000);
  OS_ResetRequestIrqMask(0xffffffff);
  SND_Shutdown();
  FUN_037fe47c(0x10);
  FUN_03807f2c();
  return;
}

