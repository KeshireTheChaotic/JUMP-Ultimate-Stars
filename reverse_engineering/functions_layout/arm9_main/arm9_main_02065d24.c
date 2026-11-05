
/* WARNING: Globals starting with '_' overlap smaller symbols at the same address */

int FUN_02065d24(void)

{
                    /* JUS-TAG hw={"GX_2D_main":2} io=["04000000","04000008"] */
  return ((int)(_DAT_04000008 & 0x3c) >> 2) * 0x4000 +
         ((_DAT_04000000 & 0x7000000) >> 0x18) * 0x10000 + 0x6000000;
}

