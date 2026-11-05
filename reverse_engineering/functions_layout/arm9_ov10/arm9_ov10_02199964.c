
void FUN_02199964(void)

{
  undefined4 uVar1;
  int iVar2;
  
  uVar1 = OS_DisableInterrupts();
  iVar2 = FUN_02198c00();
  if (iVar2 == 0) {
    OS_RestoreInterrupts(uVar1);
    return;
  }
  if (*(int *)(iVar2 + 0x2270) != 0) {
    if (0 < *(int *)(iVar2 + 0x2274)) {
      FUN_020517fc(*(int *)(iVar2 + 0x2270),0);
    }
  }
  OS_RestoreInterrupts(uVar1);
  return;
}

