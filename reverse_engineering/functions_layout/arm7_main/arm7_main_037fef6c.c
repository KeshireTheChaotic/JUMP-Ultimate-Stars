
void FUN_037fef6c(int param_1)

{
  int iVar1;
  
                    /* JUS-TAG hw={"SOUND":1} io=["04000402"] */
  DAT_0380819c = param_1;
  if (param_1 < 0) {
    iVar1 = 0;
    do {
      *(undefined1 *)(iVar1 * 0x10 + 0x4000402) = (&DAT_0380854c)[iVar1];
      iVar1 = iVar1 + 1;
    } while (iVar1 < 0x10);
    return;
  }
  iVar1 = 0;
  do {
    *(char *)(iVar1 * 0x10 + 0x4000402) = (char)param_1;
    iVar1 = iVar1 + 1;
  } while (iVar1 < 0x10);
  return;
}

