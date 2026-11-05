
/* JUS-SDK SVC_GetCRC16 [exact] BIOS SWI 0x0e veneer */

void SVC_GetCRC16(void)

{
  software_interrupt(0xe);
  return;
}

