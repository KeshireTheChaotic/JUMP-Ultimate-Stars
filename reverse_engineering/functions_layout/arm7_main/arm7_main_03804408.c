
/* JUS-SDK SVC_CpuSet [exact] BIOS SWI 0x0b veneer */

void SVC_CpuSet(void)

{
  software_interrupt(0xb);
  return;
}

