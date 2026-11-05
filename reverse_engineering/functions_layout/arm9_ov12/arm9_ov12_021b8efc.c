
void FUN_021b8efc(int param_1,undefined4 param_2,undefined4 param_3,undefined4 param_4)

{
  undefined4 local_10;
  undefined4 uStack_c;
  
  *(undefined4 *)(param_1 + 0xb0) = param_2;
  uStack_c = param_4;
  (**(code **)(**(int **)(param_1 + 0xb0) + 0xd8))(*(int **)(param_1 + 0xb0),1);
  (**(code **)(**(int **)(param_1 + 0xb0) + 0xd4))(*(int **)(param_1 + 0xb0),param_1);
  local_10 = 0x3000;
  FUN_021b83e8(*(undefined4 *)(param_1 + 0xb0),&local_10);
  return;
}

