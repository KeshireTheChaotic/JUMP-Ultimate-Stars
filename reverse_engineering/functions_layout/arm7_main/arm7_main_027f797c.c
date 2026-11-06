
/* WARNING: Globals starting with '_' overlap smaller symbols at the same address */
/* JUS-SDK jus_Rtc_Select [behavioral] all lines output, clock high, CS low (0x72), then CS high */

void jus_Rtc_Select(void)

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

