
/* WARNING: Globals starting with '_' overlap smaller symbols at the same address */
/* JUS-SDK GXS_SetGraphicsMode [behavioral] sub DISPCNT (0x04001000) bits 0-2 (BG mode) = r0 */

void GXS_SetGraphicsMode(uint param_1)

{
                    /* JUS-TAG hw={"GX_2D_sub":1} io=["04001000"] */
  _DAT_04001000 = _DAT_04001000 & 0xfffffff8 | param_1;
  return;
}

