
/* JUS-SDK SVC_ResetSoundBias [exact] BIOS SWI 0x08 veneer */

longlong SVC_ResetSoundBias(uint param_1)

{
  software_interrupt(8);
  return (ulonglong)param_1 << 0x20;
}

