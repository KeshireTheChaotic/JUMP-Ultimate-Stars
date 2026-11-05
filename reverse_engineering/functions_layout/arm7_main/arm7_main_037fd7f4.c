
/* WARNING: Globals starting with '_' overlap smaller symbols at the same address */

void FUN_037fd7f4(void)

{
                    /* JUS-TAG hw={"TIMER":2} io=["04000100","04000102"] */
  if (DAT_0380845c == 0) {
    DAT_0380845c = 1;
    FUN_037fd690(0);
    DAT_03808464 = 0;
    DAT_03808468 = 0;
    _DAT_04000100 = 0;
    _DAT_04000102 = 0xc1;
    FUN_037fbd04(8,FUN_037fd75c);
    FUN_037fbc4c(8);
    DAT_03808460 = 0;
  }
  return;
}

