
/* WARNING: Globals starting with '_' overlap smaller symbols at the same address */

void FUN_038068d0(void)

{
  int iVar1;
  
                    /* JUS-TAG hw={"TIMER":1} io=["0400010e"] */
  iVar1 = 0;
  DAT_0380ba3c = 0;
  do {
    (&DAT_0380ba1c)[iVar1] = 0;
    iVar1 = iVar1 + 1;
  } while (iVar1 < 0x10);
  _DAT_0400010e = _DAT_0400010e & 0xff7f;
  return;
}

