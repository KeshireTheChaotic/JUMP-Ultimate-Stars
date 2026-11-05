
int * FUN_02063f94(void)

{
  int iVar1;
  int *piVar2;
  
  iVar1 = FUN_02064380();
  OS_DisableInterrupts();
  for (piVar2 = DAT_020afb10; (piVar2 != (int *)0x0 && (*piVar2 != iVar1));
      piVar2 = (int *)piVar2[1]) {
  }
  OS_RestoreInterrupts();
  return piVar2;
}

