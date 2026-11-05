
int FUN_0214eddc(undefined4 param_1,undefined4 param_2,undefined4 param_3,undefined4 *param_4,
                int param_5)

{
  int iVar1;
  int *piVar2;
  undefined4 *local_18;
  
  local_18 = param_4;
  FUN_0214ed48(param_3);
  FUN_020329ec(param_2);
  iVar1 = FUN_0214ed84();
  FUN_02023894(*(undefined4 *)(iVar1 + 4),param_1,0);
  (**(code **)(**(int **)(*(int *)(iVar1 + 4) + 0x68) + 0x6c))();
  *(undefined4 *)(*(int *)(iVar1 + 4) + 0x54) = 0x31305053;
  local_18 = (undefined4 *)*param_4;
  FUN_0214eed0(iVar1,&local_18);
  if (param_5 != 0) {
    piVar2 = *(int **)(iVar1 + 4);
    (**(code **)(**(int **)(param_5 + 4) + 0xb4))(*(int **)(param_5 + 4),piVar2);
    (**(code **)(*piVar2 + 0xc))();
    piVar2 = *(int **)(iVar1 + 4);
    if (param_5 == 0) {
      (**(code **)(*piVar2 + 0xd4))(piVar2,0);
    }
    else {
      (**(code **)(*piVar2 + 0xd4))(piVar2,*(undefined4 *)(param_5 + 4));
    }
  }
  (**(code **)(**(int **)(iVar1 + 4) + 0xd8))(*(int **)(iVar1 + 4),0);
  FUN_0214edac();
  return iVar1;
}

