
undefined4 FUN_037fc270(int param_1,int param_2)

{
  undefined4 uVar1;
  int iVar2;
  int iVar3;
  
  uVar1 = OS_DisableInterrupts();
  iVar2 = 0;
  for (iVar3 = DAT_038082e0; (iVar3 != 0 && (iVar3 != param_1)); iVar3 = *(int *)(iVar3 + 0x4c)) {
    iVar2 = iVar3;
  }
  if ((iVar3 == 0) || (iVar3 == 0x38082e8)) {
    OS_RestoreInterrupts(uVar1);
    uVar1 = 0;
  }
  else {
    if (*(int *)(iVar3 + 0x54) != param_2) {
      if (iVar2 == 0) {
        DAT_038082e0 = *(int *)(param_1 + 0x4c);
      }
      else {
        *(undefined4 *)(iVar2 + 0x4c) = *(undefined4 *)(param_1 + 0x4c);
      }
      *(int *)(param_1 + 0x54) = param_2;
      FUN_037fc8cc(param_1);
      FUN_037fc320();
    }
    OS_RestoreInterrupts(uVar1);
    uVar1 = 1;
  }
  return uVar1;
}

