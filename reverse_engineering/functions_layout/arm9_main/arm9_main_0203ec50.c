
/* WARNING: Globals starting with '_' overlap smaller symbols at the same address */

void FUN_0203ec50(short param_1,short param_2,short param_3,short param_4,short param_5)

{
                    /* JUS-TAG hw={"GX_2D_sub":1} io=["04001008"] */
  _DAT_04001008 =
       _DAT_04001008 & 0x43 | param_1 << 0xe | param_2 << 7 | param_3 << 8 | param_4 << 2 |
       param_5 << 0xd;
  return;
}

