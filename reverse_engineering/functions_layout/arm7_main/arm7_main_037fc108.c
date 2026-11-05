
int FUN_037fc108(void)

{
  int iVar1;
  
  OS_DisableInterrupts();
  iVar1 = 0;
  if (DAT_038082c4 != 0) {
    iVar1 = DAT_038082c4;
    DAT_038082c4 = DAT_038082c4 + -1;
  }
  OS_RestoreInterrupts();
  return iVar1;
}

