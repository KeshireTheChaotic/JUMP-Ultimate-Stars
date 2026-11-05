
/* WARNING: Globals starting with '_' overlap smaller symbols at the same address */

void FUN_02064f20(uint param_1)

{
                    /* JUS-TAG hw={"GX_2D_main":1} io=["04000004"] */
  _DAT_04000004 =
       (ushort)((int)(param_1 & 0x100) >> 1) |
       _DAT_04000004 & 0x3f | (ushort)((param_1 & 0xff) << 8);
  return;
}

