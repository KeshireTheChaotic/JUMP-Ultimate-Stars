
/* WARNING: Globals starting with '_' overlap smaller symbols at the same address */
/* JUS-SDK GX_DispOff [behavioral] saves the display mode (DISPCNT bits 16-17) to a global, clears
   the display-on flag, masks the mode off */

void GX_DispOff(void)

{
                    /* JUS-TAG hw={"GX_2D_main":1} io=["04000000"] */
  DAT_0209dd3c = 0;
  DAT_020afb9c = (ushort)(_DAT_04000000 >> 0x10) & 3;
  _DAT_04000000 = _DAT_04000000 & 0xfffcffff;
  return;
}

