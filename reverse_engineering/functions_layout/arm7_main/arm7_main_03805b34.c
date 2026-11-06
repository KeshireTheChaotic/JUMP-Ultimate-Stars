
/* WARNING: Globals starting with '_' overlap smaller symbols at the same address */
/* JUS-SDK jus_SpiPm_SetControl [behavioral] SPICNT = 0x8002 | r0 << 11: enabled, device 0 (power
   management), 1 MHz, chip-select hold = r0 */

void jus_SpiPm_SetControl(short param_1)

{
                    /* JUS-TAG hw={"SPI":1} io=["040001c0"] */
  _DAT_040001c0 = param_1 << 0xb | 0x8002;
  return;
}

