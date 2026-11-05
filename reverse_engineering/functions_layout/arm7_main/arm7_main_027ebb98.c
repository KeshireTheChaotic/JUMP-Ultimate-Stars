
/* WARNING: Globals starting with '_' overlap smaller symbols at the same address */

void FUN_027ebb98(void)

{
                    /* JUS-TAG hw={"WIRELESS":2} io=["04808030","04808094"] */
  if (*(short *)(_DAT_0380fff4 + 0x4d0) != -1) {
    _DAT_04808030 = _DAT_04808030 | 0x80;
    *(undefined2 *)(_DAT_0380fff4 + 0x4d0) = 0xffff;
  }
  return;
}

