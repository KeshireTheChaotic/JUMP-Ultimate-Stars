
/* WARNING: Globals starting with '_' overlap smaller symbols at the same address */

void FUN_020558a4(uint param_1,int param_2)

{
                    /* JUS-TAG hw={"SYSTEM_SHARED":1} io=["027fff88"] */
  OS_DisableInterrupts();
  (&DAT_020aaedc)[param_1] = param_2;
  if (param_2 == 0) {
    _DAT_027fff88 = _DAT_027fff88 & ~(1 << (param_1 & 0xff));
  }
  else {
    _DAT_027fff88 = _DAT_027fff88 | 1 << (param_1 & 0xff);
  }
  OS_RestoreInterrupts();
  return;
}

