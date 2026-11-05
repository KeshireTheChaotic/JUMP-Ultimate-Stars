
/* WARNING: Globals starting with '_' overlap smaller symbols at the same address */

void FUN_027ea318(void)

{
                    /* JUS-TAG hw={"WIRELESS":2} io=["04808038","04808048"] */
  *(undefined2 *)(_DAT_0380fff4 + 0x3ea) = 1;
  if (*(short *)(_DAT_0380fff4 + 0x468) == 0) {
    _DAT_04808038 = _DAT_04808038 & 0xfffd;
    _DAT_04808048 = 0;
    return;
  }
  return;
}

