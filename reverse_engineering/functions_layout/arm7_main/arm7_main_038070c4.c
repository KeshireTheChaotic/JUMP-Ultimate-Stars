
/* WARNING: Globals starting with '_' overlap smaller symbols at the same address */

void FUN_038070c4(void)

{
  int iVar1;
  
                    /* JUS-TAG hw={"SYSTEM_SHARED":1} io=["027ffc3c"] */
  if (DAT_03808244 == 0xffffffff) {
    DAT_03808244 = _DAT_027ffc3c + 10;
  }
  else if (((DAT_0380ba7c == 0) && (DAT_0380ba78 == 0)) && (DAT_03808244 <= _DAT_027ffc3c)) {
    DAT_03808244 = _DAT_027ffc3c + 10;
    DAT_0380ba78 = FUN_03806f74();
    iVar1 = FUN_03806e50();
    if (iVar1 == 0) {
      if (DAT_03808240 != 0) {
        DAT_0380ba7c = 1;
        return;
      }
      DAT_0380ba78 = 1;
    }
    DAT_03808240 = 0;
    if (DAT_0380ba78 != 0) {
      while (iVar1 = FUN_037fe9ec(0xd,0x11,0), iVar1 != 0) {
        FUN_037fc1cc(100);
      }
    }
  }
  return;
}

