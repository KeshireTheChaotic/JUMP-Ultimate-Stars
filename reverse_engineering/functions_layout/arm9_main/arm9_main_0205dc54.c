
void FUN_0205dc54(undefined4 param_1,int param_2)

{
  int iVar1;
  undefined4 uVar2;
  int iVar3;
  
  uVar2 = OS_DisableInterrupts();
  iVar3 = FUN_0205e0f0(param_1,0);
  while (iVar1 = iVar3, iVar1 != 0) {
    iVar3 = FUN_0205e0f0(param_1,iVar1);
    if (*(int *)(iVar1 + 8) == param_2) {
      FUN_0205e108(param_1,iVar1);
      FUN_0205dc20(iVar1);
    }
  }
  OS_RestoreInterrupts(uVar2);
  return;
}

