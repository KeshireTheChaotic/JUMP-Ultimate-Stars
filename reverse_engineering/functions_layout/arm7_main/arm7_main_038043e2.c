
/* JUS-SDK SVC_Halt [exact] BIOS SWI 0x06 veneer */

void SVC_Halt(void)

{
  software_interrupt(6);
  return;
}

