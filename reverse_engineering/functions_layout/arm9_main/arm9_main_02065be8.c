
/* WARNING: Globals starting with '_' overlap smaller symbols at the same address */

int FUN_02065be8(void)

{
                    /* JUS-TAG hw={"GX_2D_main":2} io=["04000000","0400000e"] */
  if (((_DAT_04000000 & 7) < 3) || (((_DAT_04000000 & 7) < 6 && ((_DAT_0400000e & 0x80) == 0)))) {
    return ((_DAT_04000000 & 0x7000000) >> 0x18) * 0x10000 + 0x6000000 +
           ((_DAT_0400000e & 0x3c) >> 2) * 0x4000;
  }
  return 0;
}

