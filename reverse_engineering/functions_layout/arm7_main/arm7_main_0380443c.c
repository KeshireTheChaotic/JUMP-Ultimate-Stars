
/* JUS-SDK SVC_GetVolumeTable [exact] BIOS SWI 0x1c veneer */

void SVC_GetVolumeTable(void)

{
  software_interrupt(0x1c);
  return;
}

