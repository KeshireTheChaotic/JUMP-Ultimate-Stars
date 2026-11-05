
/* JUS-SDK SVC_SetSoundBias [exact] BIOS SWI 0x08 veneer */

undefined8 SVC_SetSoundBias(undefined4 param_1)

{
  software_interrupt(8);
  return CONCAT44(param_1,1);
}

