
/* WARNING: Globals starting with '_' overlap smaller symbols at the same address */
/* JUS-SDK MI_WaitDma [behavioral] interrupts off: spins until the DMAxCNT enable bit clears;
   channel-0 workaround */

void MI_WaitDma(int param_1)

{
                    /* JUS-TAG hw={"DMA":3} io=["040000b0","040000b4","040000b8"] */
  OS_DisableInterrupts();
  do {
  } while ((*(uint *)(&DAT_040000b0 + (param_1 * 3 + 2) * 4) & 0x80000000) != 0);
  if (param_1 == 0) {
    _DAT_040000b0 = 0;
    _DAT_040000b4 = 0;
    _DAT_040000b8 = 0x81400001;
  }
  OS_RestoreInterrupts();
  return;
}

