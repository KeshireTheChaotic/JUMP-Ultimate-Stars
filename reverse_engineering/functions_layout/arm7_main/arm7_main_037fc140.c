
int FUN_037fc140(void)

{
  int unaff_r4;
  
  OS_DisableInterrupts();
  if (DAT_038082c4 != -1) {
    unaff_r4 = DAT_038082c4;
    DAT_038082c4 = DAT_038082c4 + 1;
  }
  OS_RestoreInterrupts();
  return unaff_r4;
}

