
/* WARNING: Globals starting with '_' overlap smaller symbols at the same address */

void FUN_0380417c(void)

{
  int iVar1;
  
                    /* JUS-TAG hw={"SYSTEM_SHARED":2} io=["027ffc3c","027ffc40"] */
  if ((DAT_0380a4e0 == 0) && (_DAT_027ffc40 != 2)) {
    if (DAT_038081a4 == 0xffffffff) {
      DAT_038081a4 = _DAT_027ffc3c + 10;
    }
    else if (DAT_038081a4 <= _DAT_027ffc3c) {
      DAT_038081a4 = _DAT_027ffc3c + 10;
      iVar1 = FUN_038042e8();
      if (((iVar1 == 0) || (DAT_0380a4e0 = 1, DAT_038081a8 == 0)) &&
         (DAT_038081a8 = 0, DAT_0380a4e0 != 0)) {
        FUN_0380410c(0x11,100);
      }
    }
  }
  return;
}

