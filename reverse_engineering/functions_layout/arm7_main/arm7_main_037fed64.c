
/* WARNING: Globals starting with '_' overlap smaller symbols at the same address */

void FUN_037fed64(void)

{
                    /* JUS-TAG hw={"POWCNT":1} io=["04000304"] */
  _DAT_04000304 = _DAT_04000304 | 1;
  FUN_03805a10(1);
  SVC_SetSoundBias(0x100);
  FUN_037fe408(0x7ab80);
  SND_Enable();
  return;
}

