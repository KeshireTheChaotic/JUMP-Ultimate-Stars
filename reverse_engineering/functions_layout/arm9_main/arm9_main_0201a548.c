
/* WARNING: Globals starting with '_' overlap smaller symbols at the same address */

void FUN_0201a548(int param_1)

{
                    /* JUS-TAG hw={"IRQ":1} io=["04000208"] */
  if (DAT_020a0c35 == '\0') {
    return;
  }
  *(undefined2 *)(param_1 + 0x49c) = _DAT_04000208;
  _DAT_04000208 = 0;
  return;
}

