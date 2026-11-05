
/* WARNING: Globals starting with '_' overlap smaller symbols at the same address */

void FUN_02066440(uint param_1,int param_2,undefined2 param_3,int param_4,int param_5)

{
                    /* JUS-TAG hw={"GX_3D":2} io=["04000350","04000354"] */
  _DAT_04000350 = param_4 << 0x18 | param_1 | param_2 << 0x10;
  if (param_5 != 0) {
    _DAT_04000350 = _DAT_04000350 | 0x8000;
  }
  _DAT_04000354 = param_3;
  return;
}

