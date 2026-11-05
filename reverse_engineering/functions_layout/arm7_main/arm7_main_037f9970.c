
/* WARNING: Globals starting with '_' overlap smaller symbols at the same address */

void FUN_037f9970(void)

{
                    /* JUS-TAG hw={"WIRELESS":2} io=["04808010","048080ac"] */
  _DAT_04808010 = 0x2000;
  _DAT_048080ac = 0xd;
  if (*(short *)(_DAT_0380fff4 + 0x35e) == 1) {
    *(undefined2 *)(_DAT_0380fff4 + 0x35e) = 2;
    return;
  }
  if (*(short *)(_DAT_0380fff4 + 0x35e) == 2) {
    *(undefined2 *)(_DAT_0380fff4 + 0x35e) = 0;
    return;
  }
  if (*(short *)(_DAT_0380fff4 + 0x350) != 2) {
    return;
  }
  if (*(short *)(_DAT_0380fff4 + 0x34c) != 0x40) {
    _DAT_04808048 = 0;
  }
  return;
}

