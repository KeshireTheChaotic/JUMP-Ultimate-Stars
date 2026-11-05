
void FUN_02150160(int param_1,undefined4 param_2,int param_3,int param_4,short param_5,short param_6
                 )

{
  int iVar1;
  
  if (param_1 == 0) {
    return;
  }
  *(undefined4 *)(param_1 + 0x40) = param_2;
  iVar1 = *(int *)(*(int *)(param_1 + 8) + *(char *)(param_1 + 0x18) * 8);
  FUN_02150308(param_1,iVar1,(int)param_5 + param_3 / 2,(int)param_6 - param_4 / 2,param_4);
  FUN_02023894(*(undefined4 *)(iVar1 + 4),*(uint *)(param_1 + 0x38) | *(uint *)(param_1 + 0x40),0);
  (**(code **)(**(int **)(*(int *)(iVar1 + 4) + 0x68) + 0x6c))();
  (**(code **)(**(int **)(iVar1 + 4) + 0xd8))(*(int **)(iVar1 + 4),1);
  return;
}

