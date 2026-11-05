
void FUN_037fd998(int *param_1)

{
  undefined4 uVar1;
  int iVar2;
  
  uVar1 = OS_DisableInterrupts();
  if (*param_1 == 0) {
    OS_RestoreInterrupts();
  }
  else {
    iVar2 = param_1[6];
    if (iVar2 == 0) {
      DAT_03808474 = param_1[5];
    }
    else {
      *(int *)(iVar2 + 0x14) = param_1[5];
    }
    if (param_1[5] == 0) {
      DAT_03808470 = iVar2;
      if (iVar2 != 0) {
        FUN_037fdcb8();
      }
    }
    else {
      *(int *)(param_1[5] + 0x18) = iVar2;
    }
    *param_1 = 0;
    param_1[7] = 0;
    param_1[8] = 0;
    OS_RestoreInterrupts(uVar1);
  }
  return;
}

