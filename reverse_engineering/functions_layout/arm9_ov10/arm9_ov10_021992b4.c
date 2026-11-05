
undefined4 FUN_021992b4(void)

{
  undefined4 uVar1;
  int iVar2;
  
  uVar1 = OS_DisableInterrupts();
  if (DAT_021aa094 == 0) {
    OS_RestoreInterrupts();
    return 1;
  }
  iVar2 = *(int *)(DAT_021aa094 + 0x2260);
  if (iVar2 == 1) {
    OS_RestoreInterrupts();
    return 0;
  }
  if (iVar2 != 3) {
    if (iVar2 == 4) {
      OS_RestoreInterrupts();
      return 2;
    }
    OS_RestoreInterrupts();
    return 1;
  }
  iVar2 = FUN_02059518(0x2198581);
  if (iVar2 == 2) {
    FUN_021988cc(4);
    *(undefined2 *)(DAT_021aa094 + 0x2280) = 2;
    OS_RestoreInterrupts(uVar1);
    return 3;
  }
  if ((iVar2 == 3) || (iVar2 != 8)) {
    FUN_021988cc(0xb);
    OS_RestoreInterrupts(uVar1);
    return 7;
  }
  OS_RestoreInterrupts(uVar1);
  return 4;
}

