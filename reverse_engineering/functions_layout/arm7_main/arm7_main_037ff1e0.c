
void FUN_037ff1e0(uint param_1,int param_2,uint param_3,int param_4,short param_5,int param_6)

{
                    /* JUS-TAG hw={"SOUND":2} io=["04000400","04000408"] */
  (&DAT_0380854c)[param_1] = (char)param_6;
  if (-1 < DAT_0380819c) {
    param_6 = DAT_0380819c;
  }
  (&DAT_0380855c)[param_1] = (char)param_3;
  if ((0 < DAT_03808548) && ((1 << (param_1 & 0xff) & 0xfff5U) != 0)) {
    param_3 = FUN_037fee8c(param_3,param_6);
  }
  *(uint *)(param_1 * 0x10 + 0x4000400) =
       param_3 | param_2 << 0x18 | 0x60000000U | param_6 << 0x10 | param_4 << 8;
  *(short *)(param_1 * 0x10 + 0x4000408) = -param_5;
  return;
}

