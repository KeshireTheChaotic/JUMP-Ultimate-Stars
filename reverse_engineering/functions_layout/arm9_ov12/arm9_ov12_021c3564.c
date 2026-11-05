
void FUN_021c3564(int *param_1,undefined4 param_2,undefined4 param_3,undefined4 param_4)

{
  int *piVar1;
  undefined4 local_10;
  
  local_10 = param_4;
  while ((*(byte *)((int)param_1 + 0xa9) & 1) != 0) {
    (*DAT_020a0e18)();
  }
  FUN_020282f4(*(undefined4 *)(*param_1 + 4));
  local_10 = 0;
  piVar1 = *(int **)(*(int *)(param_1[2] + 4) + 0x68);
  (**(code **)(*piVar1 + 0xb8))(piVar1,&local_10);
  (**(code **)(**(int **)(*(int *)(param_1[2] + 4) + 0x68) + 0x6c))();
  (**(code **)(**(int **)(param_1[2] + 4) + 0xd8))(*(int **)(param_1[2] + 4),1);
  FUN_021c3538(param_1);
  return;
}

