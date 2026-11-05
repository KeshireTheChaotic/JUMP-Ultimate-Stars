
/* WARNING: Globals starting with '_' overlap smaller symbols at the same address */

void FUN_027e91e4(void)

{
  int iVar1;
  
                    /* JUS-TAG hw={"WIRELESS":2} io=["04808004","04808214"] */
  _DAT_04808004 = 0;
  iVar1 = 0x10;
  while( true ) {
    if (iVar1 == 0) {
      return;
    }
    if (_DAT_04808214 == 0) break;
    if (_DAT_04808214 == 9) {
      return;
    }
    iVar1 = iVar1 + -1;
  }
  return;
}

