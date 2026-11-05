
void FUN_02053e60(int param_1)

{
  int iVar1;
  undefined4 uVar2;
  
  uVar2 = OS_DisableInterrupts();
  iVar1 = DAT_020aab78;
  if (*(int *)(param_1 + 8) == DAT_020aab78) {
    *(int *)(param_1 + 0xc) = *(int *)(param_1 + 0xc) + -1;
    if (*(int *)(param_1 + 0xc) == 0) {
      FUN_02053d5c(iVar1,param_1);
      *(undefined4 *)(param_1 + 8) = 0;
      FUN_02053210(param_1);
    }
  }
  OS_RestoreInterrupts(uVar2);
  return;
}

