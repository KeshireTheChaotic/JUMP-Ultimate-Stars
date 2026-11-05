
int FUN_02199be0(void)

{
  int iVar1;
  int iVar2;
  
  iVar2 = 0;
  iVar1 = FUN_02198c00();
  OS_DisableInterrupts();
  if (((iVar1 != 0) && (*(int *)(iVar1 + 0x2260) == 9)) && (*(char *)(iVar1 + 0x226b) == '\0')) {
    iVar2 = iVar1 + 0x2144;
  }
  OS_RestoreInterrupts();
  return iVar2;
}

