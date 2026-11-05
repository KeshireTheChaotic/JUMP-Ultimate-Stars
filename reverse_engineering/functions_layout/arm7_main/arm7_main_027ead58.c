
/* WARNING: Globals starting with '_' overlap smaller symbols at the same address */

undefined4 FUN_027ead58(uint param_1,uint param_2)

{
                    /* JUS-TAG hw={"WIRELESS":1} io=["04808290"] */
  if ((1 < param_1) || (1 < param_2)) {
    return 5;
  }
  if (param_1 == 0) {
    *(ushort *)(_DAT_0380fff4 + 0x33a) =
         *(ushort *)(_DAT_0380fff4 + 0x33a) & 0xffdf | (ushort)((param_2 & 1) << 5);
  }
  else if (param_1 == 1) {
    if (*(short *)(_DAT_0380fff4 + 0x32e) != 1) {
      return 0xb;
    }
    *(ushort *)(_DAT_0380fff4 + 0x33a) = *(ushort *)(_DAT_0380fff4 + 0x33a) & 0xffdf;
  }
  *(ushort *)(_DAT_0380fff4 + 0x33a) =
       *(ushort *)(_DAT_0380fff4 + 0x33a) & 0xffef | (ushort)((param_1 & 1) << 4);
  _DAT_04808290 =
       (ushort)((*(ushort *)(_DAT_0380fff4 + 0x33a) & 0x3f) >> 5) ^
       (ushort)((*(ushort *)(_DAT_0380fff4 + 0x33a) & 0xf) >> 3);
  return 0;
}

