
/* WARNING: Globals starting with '_' overlap smaller symbols at the same address */

void FUN_0203e10c(short param_1,short param_2,short param_3,short param_4)

{
                    /* JUS-TAG hw={"GX_2D_main":1} io=["0400000c"] */
  _DAT_0400000c =
       _DAT_0400000c & 0x43 | param_1 << 0xe | param_3 << 8 | param_4 << 2 | param_2 << 0xd;
  return;
}

