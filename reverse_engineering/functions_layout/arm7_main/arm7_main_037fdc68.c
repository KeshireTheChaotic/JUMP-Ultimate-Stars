
void FUN_037fdc68(void)

{
  if (DAT_0380846c == 0) {
    DAT_0380846c = 1;
    FUN_037fd690();
    DAT_03808470 = 0;
    DAT_03808474 = 0;
    OS_DisableIrqMask(0x10);
  }
  return;
}

