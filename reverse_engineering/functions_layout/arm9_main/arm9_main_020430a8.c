
/* WARNING: Globals starting with '_' overlap smaller symbols at the same address */

void FUN_020430a8(short param_1)

{
                    /* JUS-TAG hw={"POWCNT":1} io=["04000304"] */
  _DAT_04000304 = _DAT_04000304 & 0x7fff | param_1 << 0xf;
  return;
}

