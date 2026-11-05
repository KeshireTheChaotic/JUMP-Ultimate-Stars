
void FUN_037feef8(undefined4 param_1)

{
  undefined1 uVar1;
  uint uVar2;
  
                    /* JUS-TAG hw={"SOUND":2} io=["04000400","04000402"] */
  uVar2 = 0;
  DAT_03808548 = param_1;
  do {
    if ((1 << (uVar2 & 0xff) & 0xfff5U) != 0) {
      uVar1 = FUN_037fee8c((&DAT_0380855c)[uVar2],*(undefined1 *)(uVar2 * 0x10 + 0x4000402));
      *(undefined1 *)(uVar2 * 0x10 + 0x4000400) = uVar1;
    }
    uVar2 = uVar2 + 1;
  } while ((int)uVar2 < 0x10);
  return;
}

