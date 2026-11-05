
void FUN_021b3934(int param_1,int *param_2,undefined4 param_3,undefined4 param_4)

{
  int *piVar1;
  int iVar2;
  int *piVar3;
  
  iVar2 = *param_2;
  piVar3 = *(int **)(param_1 + 4);
  if (iVar2 == param_1) {
    *param_2 = (int)piVar3;
  }
  *(int *)(param_1 + 4) = *piVar3;
  if (*piVar3 != 0) {
    FUN_021b3a5c(*piVar3 + 8,param_1,iVar2,param_4,param_4);
  }
  FUN_021b3a40(piVar3 + 2,param_1 + 8);
  piVar1 = (int *)(*(uint *)(param_1 + 8) & 0xfffffffe);
  if (param_1 == *piVar1) {
    *piVar1 = (int)piVar3;
  }
  else {
    piVar1[1] = (int)piVar3;
  }
  *piVar3 = param_1;
  FUN_021b3a5c(param_1 + 8,piVar3);
  return;
}

