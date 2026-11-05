
/* JUS-SDK SVC_GetPitchTable [exact] BIOS SWI 0x1b veneer */

void SVC_GetPitchTable(void)

{
  software_interrupt(0x1b);
  return;
}

