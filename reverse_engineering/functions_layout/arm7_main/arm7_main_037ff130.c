
void FUN_037ff130(uint param_1,uint param_2,int param_3,short param_4,int param_5)

{
                    /* JUS-TAG hw={"SOUND":2} io=["04000400","04000408"] */
  (&DAT_0380854c)[param_1] = (char)param_5;
  if (-1 < DAT_0380819c) {
    param_5 = DAT_0380819c;
  }
  (&DAT_0380855c)[param_1] = (char)param_2;
  if ((0 < DAT_03808548) && ((1 << (param_1 & 0xff) & 0xfff5U) != 0)) {
    param_2 = FUN_037fee8c(param_2,param_5);
  }
  *(uint *)(param_1 * 0x10 + 0x4000400) = param_2 | param_5 << 0x10 | 0x60000000U | param_3 << 8;
  *(short *)(param_1 * 0x10 + 0x4000408) = -param_4;
  return;
}

