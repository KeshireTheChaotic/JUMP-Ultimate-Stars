
/* WARNING: Globals starting with '_' overlap smaller symbols at the same address */
/* JUS-SDK jus_SpiPm_ReadRegister [behavioral] SetControl(hold); SPIDATA = reg | 0x80 (read);
   SetControl(no hold); dummy byte; returns the byte read */

undefined2 jus_SpiPm_ReadRegister(ushort param_1)

{
  do {
  } while ((_DAT_040001c0 & 0x80) != 0);
  jus_SpiPm_SetControl(1);
  _DAT_040001c2 = param_1 & 0xff | 0x80;
  do {
  } while ((_DAT_040001c0 & 0x80) != 0);
  jus_SpiPm_SetControl(0);
  _DAT_040001c2 = 0;
  do {
  } while ((_DAT_040001c0 & 0x80) != 0);
  return 0;
}

