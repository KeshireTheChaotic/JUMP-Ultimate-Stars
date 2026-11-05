
undefined4 FUN_021c01a8(undefined4 param_1,undefined4 param_2)

{
  undefined4 uVar1;
  int iVar2;
  
  uVar1 = OS_DisableInterrupts();
  if (*(char *)(DAT_021d5258 + 0x50d) != '\0') {
    OS_RestoreInterrupts();
    return 0;
  }
  iVar2 = FUN_021c021c(param_1,8,param_2);
  if (iVar2 == 0) {
    OS_RestoreInterrupts(uVar1);
    return 0;
  }
  *(short *)(DAT_021d5258 + 0x10) = (short)param_2;
  *(short *)(DAT_021d5258 + 0x500) = (short)param_1;
  *(undefined2 *)(DAT_021d5258 + 0x502) = 8;
  OS_RestoreInterrupts(uVar1);
  return 1;
}

