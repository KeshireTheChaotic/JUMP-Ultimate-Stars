
/* WARNING: Globals starting with '_' overlap smaller symbols at the same address */

bool FUN_0204327c(void)

{
                    /* JUS-TAG hw={"POWCNT":1} io=["04000304"] */
  return (int)(_DAT_04000304 & 0x8000) >> 0xf == 0;
}

