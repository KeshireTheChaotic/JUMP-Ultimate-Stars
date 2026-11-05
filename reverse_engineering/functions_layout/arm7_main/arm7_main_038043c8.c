
/* JUS-SDK SVC_WaitByLoop [exact] BIOS SWI 0x03 veneer */

void SVC_WaitByLoop(void)

{
  software_interrupt(3);
  return;
}

