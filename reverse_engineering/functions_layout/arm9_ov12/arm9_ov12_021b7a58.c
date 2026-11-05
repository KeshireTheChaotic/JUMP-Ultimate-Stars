
undefined4 FUN_021b7a58(int param_1,int *param_2)

{
  undefined4 uVar1;
  
  uVar1 = (**(code **)(**(int **)(param_1 + 0x138) + 0x10))();
  if (*(int *)(*(int *)(param_1 + 0x138) + 0x10) == 1) {
    (**(code **)(*param_2 + 0x148))(param_2,1);
  }
  if (param_2[0x11] == 0) {
    (**(code **)(*param_2 + 0xd4))(param_2,param_1);
  }
  if ((*(uint *)(param_1 + 0x90) & 1) == 1) {
    (**(code **)(*param_2 + 0x148))(param_2,2);
  }
  (**(code **)(*(int *)param_2[0x19] + 0x28))((int *)param_2[0x19],1);
  return uVar1;
}

