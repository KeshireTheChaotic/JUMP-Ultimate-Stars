
/* WARNING: Globals starting with '_' overlap smaller symbols at the same address */

void FUN_027f6068(ushort param_1)

{
                    /* JUS-TAG hw={"SPI":2} io=["040001c0","040001c2"] */
  do {
  } while ((_DAT_040001c0 & 0x80) != 0);
  _DAT_040001c0 = 0x8100;
  _DAT_040001c2 = param_1 & 0xff;
  return;
}

