
/* WARNING: Globals starting with '_' overlap smaller symbols at the same address */

void FUN_027e0334(uint param_1)

{
                    /* JUS-TAG hw={"SYSTEM_SHARED":1} io=["027fff98"] */
  (&DAT_027f97f4)[DAT_027f9814] = (char)param_1;
  DAT_027f9814 = DAT_027f9814 + 1 & 0x1f;
  param_1 = param_1 ^ (uint)_DAT_027fff98 << 1;
  _DAT_027fff98 = (ushort)param_1 ^ (ushort)(param_1 >> 0x10);
  return;
}

