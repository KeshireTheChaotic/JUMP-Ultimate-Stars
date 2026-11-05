
undefined4 FUN_02053da4(int param_1)

{
  int iVar1;
  undefined4 uVar2;
  undefined4 uVar3;
  
  uVar2 = OS_DisableInterrupts();
  iVar1 = DAT_020aab78;
  if (*(int *)(param_1 + 8) == 0) {
    *(int *)(param_1 + 8) = DAT_020aab78;
    *(int *)(param_1 + 0xc) = *(int *)(param_1 + 0xc) + 1;
    FUN_02053d80(iVar1,param_1);
    uVar3 = 1;
  }
  else if (*(int *)(param_1 + 8) == DAT_020aab78) {
    uVar3 = 1;
    *(int *)(param_1 + 0xc) = *(int *)(param_1 + 0xc) + 1;
  }
  else {
    uVar3 = 0;
  }
  OS_RestoreInterrupts(uVar2);
  return uVar3;
}

