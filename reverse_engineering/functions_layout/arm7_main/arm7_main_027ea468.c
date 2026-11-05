
/* WARNING: Globals starting with '_' overlap smaller symbols at the same address */

void FUN_027ea468(void)

{
  uint uVar1;
  
                    /* JUS-TAG hw={"WIRELESS":2} io=["04808036","04808168"] */
  if (*(short *)(_DAT_0380fff4 + 0x5f8) == 2) {
    FUN_027e9b38(0xc008);
  }
  uVar1 = FUN_027e9ba0(0x1e);
  FUN_027e9b60(0x1e,uVar1 | 0x3f);
  _DAT_04808168 = 0x800d;
  _DAT_04808036 = 1;
  return;
}

