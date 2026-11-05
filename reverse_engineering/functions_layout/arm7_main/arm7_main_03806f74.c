
/* WARNING: Globals starting with '_' overlap smaller symbols at the same address */

uint FUN_03806f74(void)

{
  uint uVar1;
  
                    /* JUS-TAG hw={"SYSTEM_SHARED":2} io=["027ffc30","027ffc35"] */
  if (_DAT_027ffc30 == -1) {
    uVar1 = 0;
  }
  else {
    if ((DAT_027ffc35 & 3) >> 1 == 0) {
      FUN_03806e50();
    }
    uVar1 = (DAT_027ffc35 & 3) >> 1;
  }
  return uVar1;
}

