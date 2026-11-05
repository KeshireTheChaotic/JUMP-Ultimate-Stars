
int * FUN_02056b88(void)

{
  int *piVar1;
  
  OS_DisableInterrupts();
  piVar1 = DAT_020aafa0;
  if (DAT_020aafa0 == (int *)0x0) {
    OS_RestoreInterrupts();
    return (int *)0x0;
  }
  DAT_020aafa0 = (int *)*DAT_020aafa0;
  if (DAT_020aafa0 == (int *)0x0) {
    DAT_020aafb0 = 0;
  }
  OS_RestoreInterrupts();
  return piVar1;
}

