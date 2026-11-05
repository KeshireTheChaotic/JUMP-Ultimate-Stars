
/* WARNING: Globals starting with '_' overlap smaller symbols at the same address */

void FUN_037fd75c(void)

{
  bool bVar1;
  
                    /* JUS-TAG hw={"TIMER":2} io=["04000100","04000102"] */
  bVar1 = 0xfffffffe < DAT_03808464;
  DAT_03808464 = DAT_03808464 + 1;
  DAT_03808468 = DAT_03808468 + (uint)bVar1;
  if (DAT_03808460 != 0) {
    _DAT_04000100 = 0;
    _DAT_04000102 = 0xc1;
    DAT_03808460 = 0;
  }
  FUN_037fbcb8(0,FUN_037fd75c,0);
  return;
}

