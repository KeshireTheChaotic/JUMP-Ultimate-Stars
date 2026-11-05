
/* WARNING: Globals starting with '_' overlap smaller symbols at the same address */

void FUN_027ea3d4(void)

{
  uint uVar1;
  
                    /* JUS-TAG hw={"WIRELESS":2} io=["04808036","04808168"] */
  _DAT_04808036 = 0;
  FUN_027e979c(8);
  _DAT_04808168 = 0;
  if (*(short *)(_DAT_0380fff4 + 0x5f8) == 2) {
    uVar1 = FUN_027e9ba0(1);
    FUN_027e9b60(1,uVar1 & 0x7f);
    FUN_027e9b60(1,uVar1);
    FUN_027e979c(0x28);
    FUN_027e981c();
  }
  else if (*(short *)(_DAT_0380fff4 + 0x5f8) == 3) {
    FUN_027e981c();
  }
  return;
}

