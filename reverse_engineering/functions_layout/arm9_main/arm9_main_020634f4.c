
void FUN_020634f4(int *param_1,int param_2)

{
  undefined4 uVar1;
  int *piVar2;
  int iVar3;
  
  uVar1 = OS_DisableInterrupts();
  iVar3 = *param_1;
  piVar2 = (int *)param_1[1];
  if (iVar3 != 0) {
    *(int **)(iVar3 + 4) = piVar2;
  }
  if (piVar2 != (int *)0x0) {
    *piVar2 = iVar3;
  }
  *param_1 = 0;
  param_1[1] = *param_1;
  param_1[3] = param_1[3] & 0xffffffb0;
  param_1[5] = param_2;
  FUN_02053210(param_1 + 6);
  OS_RestoreInterrupts(uVar1);
  return;
}

