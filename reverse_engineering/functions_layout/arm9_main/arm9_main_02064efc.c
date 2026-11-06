
/* WARNING: Globals starting with '_' overlap smaller symbols at the same address */
/* JUS-SDK GX_VBlankIntr [behavioral] DISPSTAT (0x04000004) bit 3 (V-blank IRQ) on/off; returns the
   old bit */

ushort GX_VBlankIntr(int param_1)

{
  ushort uVar1;
  
                    /* JUS-TAG hw={"GX_2D_main":1} io=["04000004"] */
  uVar1 = _DAT_04000004 & 8;
  if (param_1 == 0) {
    _DAT_04000004 = _DAT_04000004 & 0xfff7;
  }
  else {
    _DAT_04000004 = _DAT_04000004 | 8;
  }
  return uVar1;
}

