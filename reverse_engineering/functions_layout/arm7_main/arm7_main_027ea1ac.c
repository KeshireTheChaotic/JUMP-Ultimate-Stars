
/* WARNING: Globals starting with '_' overlap smaller symbols at the same address */

void FUN_027ea1ac(undefined2 param_1)

{
                    /* JUS-TAG hw={"WIRELESS":1} io=["0480802a"] */
  *(undefined2 *)(_DAT_0380fff4 + 0x3ae) = param_1;
  _DAT_0480802a = param_1;
  if ((*(ushort *)(_DAT_0380fff4 + 0x33a) & 0xff) >> 7 != 0) {
    _DAT_04808028 = param_1;
  }
  return;
}

