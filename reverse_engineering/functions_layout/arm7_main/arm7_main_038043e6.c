
/* JUS-SDK SVC_Sleep [exact] BIOS SWI 0x07 veneer */

void SVC_Sleep(void)

{
  software_interrupt(7);
  return;
}

