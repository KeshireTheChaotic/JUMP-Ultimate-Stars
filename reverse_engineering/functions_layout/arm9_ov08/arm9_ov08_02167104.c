
/* WARNING: Globals starting with '_' overlap smaller symbols at the same address */

void FUN_02167104(void)

{
  DAT_0216e86c = _DAT_04000210;
  OS_SetIrqMask(0x40018);
  OS_EnableIrqMask(1);
  DAT_0216e868 = FUN_02051e60(1);
  OS_SetIrqFunction(1,0x21670b1);
  OS_ResetRequestIrqMask(1);
  _DAT_04000208 = 1;
  OS_EnableInterrupts();
  return;
}

