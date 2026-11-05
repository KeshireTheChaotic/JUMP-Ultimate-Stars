
void FUN_0205d0bc(int param_1,int param_2,undefined4 param_3)

{
  undefined4 uVar1;
  undefined4 uVar2;
  int iVar3;
  
  if (param_2 == 0) {
    return;
  }
  uVar1 = OS_DisableInterrupts();
  uVar2 = FUN_0205c6ec(param_2);
  iVar3 = FUN_0205c3bc(param_3);
  if (param_1 == iVar3) {
    FUN_0205c3a0(param_3,0);
  }
  FUN_0205c6ec(uVar2);
  OS_RestoreInterrupts(uVar1);
  return;
}

