
/* WARNING: Globals starting with '_' overlap smaller symbols at the same address */

void FUN_037fec3c(void)

{
  ushort uVar1;
  
                    /* JUS-TAG hw={"SYSTEM_SHARED":1,"KEYPAD":1} io=["027fffa8","04000136"] */
  uVar1 = 0;
  FUN_037fec00(0x8000);
  if ((_DAT_04000136 & 0x80) != 0) {
    uVar1 = 0x8000;
  }
  _DAT_027fffa8 = uVar1 | (_DAT_04000136 & 0xb) << 10;
  return;
}

