
undefined4 FUN_02153938(void)

{
  undefined4 uVar1;
  int iVar2;
  
  uVar1 = OS_DisableInterrupts();
  if (DAT_0216d17c != 3) {
    iVar2 = FUN_02153b38();
    if (iVar2 == 1) {
      DAT_0216d17c = 2;
      OS_RestoreInterrupts(uVar1);
      return 1;
    }
    OS_RestoreInterrupts(uVar1);
    return 0;
  }
  iVar2 = func_0x021992b4();
  if (iVar2 == 3) {
    DAT_0216d17c = 2;
    OS_RestoreInterrupts(uVar1);
    return 1;
  }
  OS_RestoreInterrupts(uVar1);
  return 0;
}

