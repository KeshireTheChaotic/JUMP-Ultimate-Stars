
/* WARNING: Globals starting with '_' overlap smaller symbols at the same address */
/* JUS-SDK jus_SpiFlash_WriteEnable [behavioral] SPICNT 0x8100/0x8900 (device 1 = firmware flash),
   first SPIDATA byte = command 0x06 (WriteEnable) */

void jus_SpiFlash_WriteEnable(void)

{
  do {
  } while ((_DAT_040001c0 & 0x80) != 0);
  _DAT_040001c0 = 0x8100;
  _DAT_040001c2 = 6;
  return;
}

