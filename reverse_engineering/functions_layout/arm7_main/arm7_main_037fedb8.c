
/* WARNING: Globals starting with '_' overlap smaller symbols at the same address */

void FUN_037fedb8(void)

{
                    /* JUS-TAG hw={"POWCNT":1} io=["04000304"] */
  FUN_037fee5c();
  SVC_ResetSoundBias(0x80);
  FUN_037fe408(0x40000);
  FUN_038059e4(1);
  _DAT_04000304 = _DAT_04000304 & 0xfffe;
  return;
}

