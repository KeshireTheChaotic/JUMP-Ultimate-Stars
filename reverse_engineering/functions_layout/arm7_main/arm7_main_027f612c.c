
/* WARNING: Globals starting with '_' overlap smaller symbols at the same address */
/* JUS-SDK jus_SpiFlash_PageErase [behavioral] SPICNT 0x8100/0x8900 (device 1 = firmware flash),
   first SPIDATA byte = command 0xDB (PageErase) */

void jus_SpiFlash_PageErase(ushort param_1)

{
                    /* JUS-TAG hw={"SPI":2} io=["040001c0","040001c2"] */
  do {
  } while ((_DAT_040001c0 & 0x80) != 0);
  _DAT_040001c0 = 0x8100;
  _DAT_040001c2 = param_1 & 0xff;
  return;
}

