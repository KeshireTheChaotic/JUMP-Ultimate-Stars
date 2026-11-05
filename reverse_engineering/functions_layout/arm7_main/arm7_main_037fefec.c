
void FUN_037fefec(uint param_1,int param_2)

{
  undefined1 uVar1;
  
                    /* JUS-TAG hw={"SOUND":2} io=["04000400","04000402"] */
  (&DAT_0380854c)[param_1] = (char)param_2;
  if (-1 < DAT_0380819c) {
    param_2 = DAT_0380819c;
  }
  *(char *)(param_1 * 0x10 + 0x4000402) = (char)param_2;
  if ((0 < DAT_03808548) && ((1 << (param_1 & 0xff) & 0xfff5U) != 0)) {
    uVar1 = FUN_037fee8c((&DAT_0380855c)[param_1]);
    *(undefined1 *)(param_1 * 0x10 + 0x4000400) = uVar1;
  }
  return;
}

