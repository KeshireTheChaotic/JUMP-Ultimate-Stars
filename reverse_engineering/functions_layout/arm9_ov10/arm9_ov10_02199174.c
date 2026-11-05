
undefined4 FUN_02199174(undefined4 param_1,undefined4 param_2,undefined4 param_3)

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
    FUN_02198a18(param_1,param_2,param_3);
    DC_InvalidateRange(*(undefined4 *)(DAT_021aa094 + 0x2288),*(undefined2 *)(DAT_021aa094 + 0x228c)
                      );
    *(int *)(DAT_021aa094 + 0x2284) = *(int *)(DAT_021aa094 + 0x2284) + 1;
    iVar2 = FUN_02058f88(0x2198381,DAT_021aa094 + 0x2288);
    if (iVar2 == 2) {
      FUN_021988cc(5);
      *(undefined2 *)(DAT_021aa094 + 0x2280) = 3;
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
  if (iVar2 == 5) {
    FUN_02198a18(param_1,param_2,param_3);
    OS_RestoreInterrupts(uVar1);
    return 2;
  }
  if (iVar2 == 6) {
    FUN_02198a18(param_1,param_2,param_3);
    OS_RestoreInterrupts(uVar1);
    return 0;
  }
  OS_RestoreInterrupts();
  return 1;
}

