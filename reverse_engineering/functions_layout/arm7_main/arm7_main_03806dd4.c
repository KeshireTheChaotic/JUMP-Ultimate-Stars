
/* WARNING: Globals starting with '_' overlap smaller symbols at the same address */

void FUN_03806dd4(int *param_1)

{
                    /* JUS-TAG hw={"EXMEMCNT":1} io=["04000204"] */
  _DAT_04000204 =
       (_DAT_04000204 & 0xfff3 | (ushort)(*param_1 << 2)) & 0xffef | (ushort)(param_1[1] << 4);
  return;
}

