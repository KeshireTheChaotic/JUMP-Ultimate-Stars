
void FUN_037fc4dc(int param_1)

{
  undefined4 uVar1;
  int iVar2;
  
  uVar1 = OS_DisableInterrupts();
  iVar2 = *DAT_038082d0;
  if (param_1 != 0) {
    *(int *)(iVar2 + 0x5c) = param_1;
    FUN_037fc9f8(param_1,iVar2);
  }
  *(undefined4 *)(iVar2 + 0x48) = 0;
  FUN_037fc320();
  OS_RestoreInterrupts(uVar1);
  return;
}

