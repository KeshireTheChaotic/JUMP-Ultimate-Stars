
bool FUN_021998ac(int param_1)

{
  char cVar1;
  undefined4 uVar2;
  int iVar3;
  
  uVar2 = OS_DisableInterrupts();
  iVar3 = FUN_02198c00();
  if (iVar3 == 0) {
    OS_RestoreInterrupts(uVar2);
    return false;
  }
  if (param_1 == 0) {
    cVar1 = *(char *)(iVar3 + 0x226a);
    *(undefined1 *)(iVar3 + 0x226a) = 0;
  }
  else {
    cVar1 = *(char *)(iVar3 + 0x226a);
    *(undefined1 *)(iVar3 + 0x226a) = 1;
  }
  OS_RestoreInterrupts(uVar2);
  return cVar1 != '\0';
}

