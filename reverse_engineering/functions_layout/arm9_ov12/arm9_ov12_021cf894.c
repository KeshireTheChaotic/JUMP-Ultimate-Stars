
int * FUN_021cf894(void)

{
  int *piVar1;
  
  DAT_021d6728 = OS_DisableInterrupts();
  piVar1 = (int *)0x0;
  if (DAT_021d672c != (int *)0x0) {
    piVar1 = DAT_021d672c;
    DAT_021d672c = (int *)*DAT_021d672c;
  }
  OS_RestoreInterrupts(DAT_021d6728);
  return piVar1;
}

