
int FUN_02056cd0(void)

{
  int *piVar1;
  int iVar2;
  
  OS_DisableInterrupts();
  iVar2 = 0;
  for (piVar1 = (int *)DAT_020aafa8; piVar1 != (int *)0x0; piVar1 = (int *)*piVar1) {
    iVar2 = iVar2 + 1;
  }
  OS_RestoreInterrupts();
  return iVar2;
}

