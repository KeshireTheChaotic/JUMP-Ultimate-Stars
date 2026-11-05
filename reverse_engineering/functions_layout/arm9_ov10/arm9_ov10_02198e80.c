
undefined4 FUN_02198e80(void)

{
  undefined4 uVar1;
  int iVar2;
  
  uVar1 = OS_DisableInterrupts();
  if (DAT_021aa094 == 0) {
    OS_RestoreInterrupts();
    return 1;
  }
  iVar2 = *(int *)(DAT_021aa094 + 0x2260);
  if (iVar2 == 3) {
    OS_RestoreInterrupts();
    return 0;
  }
  if (iVar2 != 9) {
    if (iVar2 == 10) {
      OS_RestoreInterrupts();
      return 2;
    }
    OS_RestoreInterrupts();
    return 1;
  }
  if (*(char *)(DAT_021aa094 + 0x226b) == '\x01') {
    FUN_021988cc(10);
    *(undefined2 *)(DAT_021aa094 + 0x2280) = 6;
  }
  else {
    iVar2 = FUN_02059af8(0x2197ee5);
    if (iVar2 != 2) {
      if ((iVar2 == 3) || (iVar2 != 8)) {
        FUN_021988cc(0xb);
        OS_RestoreInterrupts(uVar1);
        return 7;
      }
      OS_RestoreInterrupts(uVar1);
      return 4;
    }
    FUN_021988cc(10);
    *(undefined2 *)(DAT_021aa094 + 0x2280) = 6;
  }
  OS_RestoreInterrupts(uVar1);
  return 3;
}

