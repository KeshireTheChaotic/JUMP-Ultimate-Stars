
/* WARNING: Globals starting with '_' overlap smaller symbols at the same address */

void FUN_037fa528(void)

{
                    /* JUS-TAG hw={"WIRELESS":4} io=["04808010","04808214","04808244","04808268"] */
  _DAT_04808010 = 0x80;
  if ((*(ushort *)(_DAT_0380fff4 + 0x690) & 0x20) == 0) {
    return;
  }
  if ((_DAT_04808214 & 0xff) < 3) {
    return;
  }
  if (5 < (_DAT_04808214 & 0xff)) {
    return;
  }
  if ((uint)_DAT_04808268 < (*(uint *)(_DAT_0380fff4 + 0x484) >> 1 & 0xfff)) {
    return;
  }
  if ((*(uint *)(_DAT_0380fff4 + 0x45c) >> 1 & 0xfff) < (uint)_DAT_04808268) {
    return;
  }
  _DAT_04808244 = _DAT_04808244 & 0xff7f;
  return;
}

