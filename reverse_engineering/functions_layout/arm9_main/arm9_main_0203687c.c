
int FUN_0203687c(undefined4 param_1,undefined4 param_2)

{
  int iVar1;
  int *piVar2;
  
  (*DAT_020a0e34)();
  iVar1 = FUN_02011b38();
  piVar2 = *(int **)(*(int *)(iVar1 + 4) + 100);
  (**(code **)(*piVar2 + 0xa4))(piVar2,param_1,param_2);
  return iVar1;
}

