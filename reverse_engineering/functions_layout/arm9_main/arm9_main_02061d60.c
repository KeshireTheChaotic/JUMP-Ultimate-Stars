
undefined4 FUN_02061d60(void)

{
  OS_DisableInterrupts();
  if (DAT_020aebd0 == 0) {
    DAT_020aebd0 = 1;
    OS_RestoreInterrupts();
    return 1;
  }
  OS_RestoreInterrupts();
  return 0;
}

