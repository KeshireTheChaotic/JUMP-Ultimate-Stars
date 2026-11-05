
/* WARNING: Globals starting with '_' overlap smaller symbols at the same address */
/* JUS-SDK OS_IrqHandler [structural] crt0 stores it to DTCM+0x3FFC (HW_INTR_VECTOR_BUF) */

void OS_IrqHandler(void)

{
  int iVar1;
  uint uVar2;
  
                    /* JUS-TAG hw={"IRQ":2} io=["04000208","04000210"] */
  if (_DAT_04000208 == 0) {
    return;
  }
  uVar2 = _DAT_04000210 & _DAT_04000214;
  if (uVar2 == 0) {
    return;
  }
  do {
    iVar1 = LZCOUNT(uVar2);
    uVar2 = uVar2 & ~(0x80000000U >> iVar1);
  } while (uVar2 != 0);
  _DAT_04000214 = 0x80000000 >> iVar1;
                    /* WARNING: Could not emulate address calculation at 0x01ff8e10 */
                    /* WARNING: Treating indirect jump as call */
  (*(code *)(&DAT_027c0000)[0x1f - iVar1])();
  return;
}

