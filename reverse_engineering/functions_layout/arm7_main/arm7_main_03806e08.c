
/* WARNING: Globals starting with '_' overlap smaller symbols at the same address */

void FUN_03806e08(int *param_1)

{
                    /* JUS-TAG hw={"EXMEMCNT":1} io=["04000204"] */
  *param_1 = (int)(_DAT_04000204 & 0xc) >> 2;
  param_1[1] = (int)(_DAT_04000204 & 0x10) >> 4;
  _DAT_04000204 = _DAT_04000204 & 0xffe3 | 0xc;
  return;
}

