
undefined4 FUN_021990f4(void)

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
  if (iVar2 == 6) {
    FUN_021988cc(7);
    *(undefined2 *)(DAT_021aa094 + 0x2280) = 4;
    OS_RestoreInterrupts(uVar1);
    return 3;
  }
  if (iVar2 == 7) {
    OS_RestoreInterrupts();
    return 2;
  }
  OS_RestoreInterrupts();
  return 1;
}

