
int FUN_02058c74(undefined4 param_1)

{
  undefined4 uVar1;
  int iVar2;
  
  uVar1 = OS_DisableInterrupts();
  iVar2 = FUN_02058044();
  if (iVar2 == 0) {
    iVar2 = FUN_02058060();
    *(undefined4 *)(iVar2 + 200) = param_1;
    OS_RestoreInterrupts(uVar1);
    return 0;
  }
  OS_RestoreInterrupts(uVar1);
  return iVar2;
}

