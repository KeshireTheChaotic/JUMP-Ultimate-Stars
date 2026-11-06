
/* WARNING: Globals starting with '_' overlap smaller symbols at the same address */
/* JUS-SDK jus_Mic_Sample12 [behavioral] SPICNT 0x8A01/0x8201 (device 2 = touch controller, 2 MHz);
   control 0xE4 = channel 6 (AUX, microphone), 12-bit */

undefined4 jus_Mic_Sample12(void)

{
  do {
  } while ((_DAT_040001c0 & 0x80) != 0);
  _DAT_040001c0 = 0x8201;
  _DAT_040001c2 = 0;
  return 0;
}

