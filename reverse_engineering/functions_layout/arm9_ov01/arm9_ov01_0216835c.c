
int FUN_0216835c(int param_1,int param_2,int param_3,int param_4,int param_5)

{
  int iVar1;
  int iVar2;
  int *piVar3;
  int iVar4;
  int iVar5;
  int local_28;
  int local_1c;
  
  iVar5 = 1;
  local_1c = 0;
  for (iVar4 = 1; iVar4 < param_3; iVar4 = iVar4 + 1) {
    iVar5 = iVar5 * 10;
  }
  local_28 = param_1;
  for (iVar4 = 0; iVar4 < param_3; iVar4 = iVar4 + 1) {
    iVar1 = FUN_0200d12c(local_28,iVar5);
    iVar2 = iVar4 * 4;
    FUN_02023894(*(undefined4 *)(*(int *)(param_2 + iVar2) + 4),param_4 + iVar1,0);
    (**(code **)(**(int **)(*(int *)(*(int *)(param_2 + iVar2) + 4) + 0x68) + 0x6c))();
    if ((iVar1 == 0) && (param_5 == 0)) {
      piVar3 = *(int **)(*(int *)(param_2 + iVar2) + 4);
      (**(code **)(*piVar3 + 0xd8))(piVar3,0);
    }
    else {
      param_5 = 1;
      local_28 = local_28 - iVar5 * iVar1;
      local_1c = local_1c + 1;
    }
    iVar5 = FUN_0200d12c(iVar5,10);
  }
  piVar3 = *(int **)(*(int *)(param_2 + (param_3 + -1) * 4) + 4);
  (**(code **)(*piVar3 + 0xd8))(piVar3,1);
  return local_1c;
}

