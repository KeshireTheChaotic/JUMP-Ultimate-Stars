
undefined4 FUN_021994f8(void)

{
  OS_DisableInterrupts();
  if (DAT_021aa094 == 0) {
    OS_RestoreInterrupts();
    return 1;
  }
  if (*(int *)(DAT_021aa094 + 0x2260) == 1) {
    DAT_021aa094 = 0;
    OS_RestoreInterrupts();
    return 0;
  }
  OS_RestoreInterrupts();
  return 1;
}

