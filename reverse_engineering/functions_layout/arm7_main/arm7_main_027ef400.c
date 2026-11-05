
/* WARNING: Globals starting with '_' overlap smaller symbols at the same address */

void FUN_027ef400(void)

{
                    /* JUS-TAG hw={"WIRELESS":9}
                       io=["04804000","04804004","04808004","04808010","04808012","04808040","048080a0","048080ac","04808194"]
                        */
  if (*(short *)(_DAT_0380fff4 + 0x35c) == 0) {
    _DAT_048080ac = 1;
    _DAT_04808004 = 0;
    _DAT_04808012 = 2;
    _DAT_04808010 = 0xffff;
    _DAT_04808194 = 0;
    _DAT_04808040 = 0;
    return;
  }
  _DAT_04804000 = 0;
  _DAT_04804004 = 0;
  _DAT_048080a0 = _DAT_048080a0 | 0x8000;
  return;
}

