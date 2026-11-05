
/* WARNING: Globals starting with '_' overlap smaller symbols at the same address */

undefined4 FUN_027eae34(uint param_1)

{
                    /* JUS-TAG hw={"WIRELESS":1} io=["04808290"] */
  if (param_1 < 2) {
    *(ushort *)(_DAT_0380fff4 + 0x33a) =
         *(ushort *)(_DAT_0380fff4 + 0x33a) & 0xfff7 | (ushort)((param_1 & 1) << 3);
    _DAT_04808290 =
         (ushort)((*(ushort *)(_DAT_0380fff4 + 0x33a) & 0x3f) >> 5) ^
         (ushort)((*(ushort *)(_DAT_0380fff4 + 0x33a) & 0xf) >> 3);
    return 0;
  }
  return 5;
}

