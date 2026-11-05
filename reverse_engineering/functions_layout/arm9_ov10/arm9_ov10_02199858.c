
int FUN_02199858(undefined4 param_1)

{
  undefined4 uVar1;
  int iVar2;
  
  uVar1 = OS_DisableInterrupts();
  iVar2 = FUN_02198c00();
  if (iVar2 == 0) {
    OS_RestoreInterrupts(uVar1);
    return 0;
  }
  iVar2 = FUN_021996a8(param_1);
  if (iVar2 == 0) {
    OS_RestoreInterrupts(uVar1);
    return 0;
  }
  OS_RestoreInterrupts(uVar1);
  return iVar2 + 0x10;
}

