
/* WARNING: Globals starting with '_' overlap smaller symbols at the same address */

void FUN_0238015c(void)

{
  uint uVar1;
  
                    /* JUS-TAG hw={"SYSTEM_SHARED":1} io=["027ffffa"] */
  uVar1 = 0;
  do {
    if (uVar1 != _DAT_023ffffa) {
      _DAT_027ffffa = 2;
      return;
    }
    uVar1 = uVar1 + 1;
  } while (uVar1 != 2);
  _DAT_027ffffa = 1;
  return;
}

