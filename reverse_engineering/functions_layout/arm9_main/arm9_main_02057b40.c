
/* WARNING: Globals starting with '_' overlap smaller symbols at the same address */

void FUN_02057b40(void)

{
                    /* JUS-TAG hw={"SYSTEM_SHARED":1} io=["027fff96"] */
  if ((_DAT_027fff96 & 1) != 0) {
    _DAT_027fff96 = _DAT_027fff96 & 0xfffe;
  }
  return;
}

