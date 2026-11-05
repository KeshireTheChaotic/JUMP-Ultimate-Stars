
/* WARNING: Globals starting with '_' overlap smaller symbols at the same address */

void FUN_037feab8(uint param_1,int param_2)

{
                    /* JUS-TAG hw={"SYSTEM_SHARED":1} io=["027fff8c"] */
  OS_DisableInterrupts();
  (&DAT_03808498)[param_1] = param_2;
  if (param_2 == 0) {
    _DAT_027fff8c = _DAT_027fff8c & ~(1 << (param_1 & 0xff));
  }
  else {
    _DAT_027fff8c = _DAT_027fff8c | 1 << (param_1 & 0xff);
  }
  OS_RestoreInterrupts();
  return;
}

