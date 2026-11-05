
/* WARNING: Globals starting with '_' overlap smaller symbols at the same address */

void FUN_027f797c(void)

{
  int iVar1;
  
                    /* JUS-TAG hw={"RTC":1} io=["04000138"] */
  iVar1 = 2;
  do {
    iVar1 = iVar1 + -1;
  } while (iVar1 != 0);
  _DAT_04000138 = _DAT_04000138 & 0xff88 | 0x76;
  iVar1 = 2;
  do {
    iVar1 = iVar1 + -1;
  } while (iVar1 != 0);
  return;
}

