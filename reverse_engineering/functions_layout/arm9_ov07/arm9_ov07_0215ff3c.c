
void FUN_0215ff3c(undefined4 param_1,undefined4 param_2,undefined4 param_3,undefined4 param_4,
                 undefined4 param_5,undefined4 param_6,undefined4 param_7)

{
  undefined4 uVar1;
  int iVar2;
  int iVar3;
  
  uVar1 = OS_DisableInterrupts();
  iVar2 = FUN_0215e95c(DAT_0216ad8c + 0x5760,0,param_1,1);
  if (iVar2 == 0) {
    iVar2 = FUN_0215e95c(DAT_0216ad8c + 0x5760,0,0,1);
    if (iVar2 == 0) {
      FUN_02055684();
    }
    else {
      iVar3 = FUN_0215ea14(param_7);
      if (iVar3 == 0) {
        FUN_02055684();
      }
      FUN_0215e7a8(iVar2,param_1,param_2,iVar3);
      FUN_0215e790(iVar2,param_3,param_4,param_5,param_6);
    }
  }
  OS_RestoreInterrupts(uVar1);
  return;
}

