
/* WARNING: Globals starting with '_' overlap smaller symbols at the same address */
/* JUS-SDK GX_SetGraphicsMode [behavioral] DISPCNT = mode << 16 | bgMode | bg0_2d3d << 3; remembers
   the mode in the GX_DispOff global */

void GX_SetGraphicsMode(ushort param_1,uint param_2,int param_3)

{
  ushort uVar1;
  
                    /* JUS-TAG hw={"GX_2D_main":1} io=["04000000"] */
  DAT_020afb9c = param_1;
  uVar1 = param_1;
  if (DAT_0209dd3c == 0) {
    uVar1 = 0;
  }
  _DAT_04000000 = param_3 << 3 | param_2 | _DAT_04000000 & 0xfff0fff0 | (uint)uVar1 << 0x10;
  if (param_1 == 0) {
    DAT_0209dd3c = 0;
  }
  return;
}

