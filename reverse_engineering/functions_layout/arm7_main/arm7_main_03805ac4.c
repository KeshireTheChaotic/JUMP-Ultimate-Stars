
/* WARNING: Globals starting with '_' overlap smaller symbols at the same address */
/* JUS-SDK jus_SpiPm_WriteRegister [behavioral] SetControl(hold); SPIDATA = reg; SetControl(no
   hold); SPIDATA = value */

void jus_SpiPm_WriteRegister(ushort param_1,ushort param_2)

{
  do {
  } while ((_DAT_040001c0 & 0x80) != 0);
  jus_SpiPm_SetControl(1);
  _DAT_040001c2 = param_1 & 0xff;
  do {
  } while ((_DAT_040001c0 & 0x80) != 0);
  jus_SpiPm_SetControl(0);
  _DAT_040001c2 = param_2 & 0xff;
  return;
}

