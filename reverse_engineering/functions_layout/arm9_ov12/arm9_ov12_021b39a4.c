
void FUN_021b39a4(int *param_1,int *param_2,undefined4 param_3,undefined4 param_4)

{
  int *piVar1;
  int iVar2;
  
  piVar1 = (int *)*param_2;
  iVar2 = *param_1;
  if (piVar1 == param_1) {
    *param_2 = iVar2;
  }
  *param_1 = *(int *)(iVar2 + 4);
  if (*(int *)(iVar2 + 4) != 0) {
    FUN_021b3a5c(*(int *)(iVar2 + 4) + 8,param_1,piVar1,param_4,param_4);
  }
  FUN_021b3a40(iVar2 + 8,param_1 + 2);
  piVar1 = (int *)(param_1[2] & 0xfffffffe);
  if (param_1 == (int *)*piVar1) {
    *piVar1 = iVar2;
  }
  else {
    piVar1[1] = iVar2;
  }
  *(int **)(iVar2 + 4) = param_1;
  FUN_021b3a5c(param_1 + 2,iVar2);
  return;
}

