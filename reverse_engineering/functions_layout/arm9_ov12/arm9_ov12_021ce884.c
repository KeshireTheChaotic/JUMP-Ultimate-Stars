
undefined4 FUN_021ce884(int param_1)

{
  DAT_021d66ac = OS_DisableInterrupts();
  if ((&DAT_021d66b0)[param_1] == 0) {
    OS_RestoreInterrupts();
    return 0;
  }
  OS_RestoreInterrupts();
  return (&DAT_021d66b0)[param_1];
}

