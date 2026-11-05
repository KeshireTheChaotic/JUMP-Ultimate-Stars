
/* WARNING: Globals starting with '_' overlap smaller symbols at the same address */

undefined1 FUN_03805494(void)

{
  undefined1 uVar1;
  
                    /* JUS-TAG hw={"SPI":2,"KEYPAD":1} io=["04000136","040001c0","040001c2"] */
  FUN_037fec00(0x8000);
  do {
  } while ((_DAT_040001c0 & 0x80) != 0);
  if (DAT_0380aa68 == 0) {
    uVar1 = (_DAT_04000136 & 0x40) == 0;
  }
  else if ((_DAT_04000136 & 0x40) == 0) {
    uVar1 = 1;
  }
  else if ((_DAT_04000136 & 0x40) == 0) {
    uVar1 = 2;
  }
  else {
    uVar1 = 0;
  }
  _DAT_040001c2 = 0;
  _DAT_040001c0 = 0x8201;
  return uVar1;
}

