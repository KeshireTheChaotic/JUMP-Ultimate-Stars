
/* WARNING: Globals starting with '_' overlap smaller symbols at the same address */

int FUN_02065c70(void)

{
                    /* JUS-TAG hw={"GX_2D_main":2} io=["04000000","0400000c"] */
  if (((_DAT_04000000 & 7) < 5) || ((_DAT_0400000c & 0x80) == 0)) {
    return ((_DAT_04000000 & 0x7000000) >> 0x18) * 0x10000 + 0x6000000 +
           ((_DAT_0400000c & 0x3c) >> 2) * 0x4000;
  }
  return 0;
}

