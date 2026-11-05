
void FUN_037fcdb4(int param_1)

{
  int iVar1;
  undefined4 uVar2;
  
  uVar2 = OS_DisableInterrupts();
  iVar1 = DAT_038082dc;
  if (*(int *)(param_1 + 8) == DAT_038082dc) {
    *(int *)(param_1 + 0xc) = *(int *)(param_1 + 0xc) + -1;
    if (*(int *)(param_1 + 0xc) == 0) {
      FUN_037fcd30(iVar1,param_1);
      *(undefined4 *)(param_1 + 8) = 0;
      FUN_037fc460(param_1);
    }
  }
  OS_RestoreInterrupts(uVar2);
  return;
}

