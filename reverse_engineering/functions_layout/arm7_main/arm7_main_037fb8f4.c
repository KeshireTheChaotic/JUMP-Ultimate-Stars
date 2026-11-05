
/* WARNING: Globals starting with '_' overlap smaller symbols at the same address */
/* JUS-SDK OS_IrqHandler [structural] crt0 stores it to the ARM7 IRQ vector 0x0380FFFC */

void OS_IrqHandler(void)

{
  uint uVar1;
  uint uVar2;
  
                    /* JUS-TAG hw={"IRQ":2} io=["04000208","04000210"] */
  if (_DAT_04000208 == 0) {
    return;
  }
  uVar2 = _DAT_04000210 & _DAT_04000214;
  if (uVar2 == 0) {
    return;
  }
  for (uVar1 = 0; _DAT_04000214 = uVar2 & 1 << (uVar1 & 0xff), _DAT_04000214 == 0; uVar1 = uVar1 + 1
      ) {
  }
                    /* WARNING: Could not recover jumptable at 0x037fb93c. Too many branches */
                    /* WARNING: Treating indirect jump as call */
  (*(code *)(&DAT_03808138)[uVar1])();
  return;
}

