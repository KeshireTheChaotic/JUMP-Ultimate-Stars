
/* WARNING: Globals starting with '_' overlap smaller symbols at the same address */

int FUN_02065f64(void)

{
                    /* JUS-TAG hw={"GX_2D_main":2} io=["04000000","0400000a"] */
  return ((int)(_DAT_0400000a & 0x1f00) >> 8) * 0x800 +
         ((_DAT_04000000 & 0x38000000) >> 0x1b) * 0x10000 + 0x6000000;
}

