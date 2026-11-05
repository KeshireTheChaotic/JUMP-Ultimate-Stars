
/* WARNING: Globals starting with '_' overlap smaller symbols at the same address */

int FUN_02065bac(void)

{
                    /* JUS-TAG hw={"GX_2D_sub":2} io=["04001000","0400100e"] */
  if (((_DAT_04001000 & 7) < 3) || (((_DAT_04001000 & 7) < 6 && ((_DAT_0400100e & 0x80) == 0)))) {
    return ((_DAT_0400100e & 0x3c) >> 2) * 0x4000 + 0x6200000;
  }
  return 0;
}

