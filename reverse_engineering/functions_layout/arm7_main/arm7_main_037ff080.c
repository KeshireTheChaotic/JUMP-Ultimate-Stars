
void FUN_037ff080(uint param_1,undefined4 param_2,short param_3)

{
                    /* JUS-TAG hw={"SOUND":2} io=["04000400","04000402"] */
  (&DAT_0380855c)[param_1] = (char)param_2;
  if ((0 < DAT_03808548) && ((1 << (param_1 & 0xff) & 0xfff5U) != 0)) {
    param_2 = FUN_037fee8c(param_2,*(undefined1 *)(param_1 * 0x10 + 0x4000402));
  }
  *(ushort *)(param_1 * 0x10 + 0x4000400) = (ushort)param_2 | param_3 << 8;
  return;
}

