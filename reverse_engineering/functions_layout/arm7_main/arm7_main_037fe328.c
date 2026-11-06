
void FUN_037fe328(void)

{
  if (DAT_03808478 == 0) {
    DAT_03808478 = 1;
    DAT_03808484 = 0;
    DAT_03808488 = 0;
    OS_DisableIrqMask(4);
    DAT_03808480 = 0;
    DAT_0380847c = 0;
  }
  return;
}

