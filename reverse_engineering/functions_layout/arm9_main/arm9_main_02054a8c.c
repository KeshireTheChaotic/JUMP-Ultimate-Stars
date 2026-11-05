
/* WARNING: Globals starting with '_' overlap smaller symbols at the same address */

void FUN_02054a8c(void)

{
  uint uVar1;
  
                    /* JUS-TAG hw={"SYSTEM_SHARED":1} io=["027ffd9c"] */
  if ((_DAT_027ffd9c < (undefined1 *)0x2600000) || ((undefined1 *)0x27fffff < _DAT_027ffd9c)) {
    DAT_020aae00 = (undefined1 *)0x0;
  }
  else {
    DAT_020aae00 = _DAT_027ffd9c;
  }
  if ((DAT_020aae00 == (undefined1 *)0x0) && (uVar1 = FUN_02053a80(), (uVar1 & 0x40000000) == 0)) {
    _DAT_027ffd9c = &LAB_02054908;
    _DAT_027c3fdc = &LAB_02054908;
  }
  DAT_020aadf8 = 0;
  return;
}

