
/* WARNING: Globals starting with '_' overlap smaller symbols at the same address */

void FUN_02042370(short param_1)

{
                    /* JUS-TAG hw={"EXMEMCNT":1} io=["04000204"] */
  _DAT_04000204 = _DAT_04000204 & 0x7fff | param_1 << 0xf;
  return;
}

