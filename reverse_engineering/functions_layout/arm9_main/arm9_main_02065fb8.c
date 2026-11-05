
/* WARNING: Globals starting with '_' overlap smaller symbols at the same address */

int FUN_02065fb8(void)

{
                    /* JUS-TAG hw={"GX_2D_main":2} io=["04000000","04000008"] */
  return ((int)(_DAT_04000008 & 0x1f00) >> 8) * 0x800 +
         ((_DAT_04000000 & 0x38000000) >> 0x1b) * 0x10000 + 0x6000000;
}

