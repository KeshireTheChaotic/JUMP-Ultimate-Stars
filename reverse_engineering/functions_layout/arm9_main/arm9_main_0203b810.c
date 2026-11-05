
/* WARNING: Globals starting with '_' overlap smaller symbols at the same address */

void FUN_0203b810(short param_1,int param_2)

{
                    /* JUS-TAG hw={"GX_2D_main":1} io=["0400004a"] */
  _DAT_0400004a = _DAT_0400004a & 0xc0ff | param_1 << 8;
  if (param_2 != 0) {
    _DAT_0400004a = _DAT_0400004a | 0x2000;
  }
  return;
}

