
void FUN_0215a56c(int param_1)

{
  int *piVar1;
  
  piVar1 = *(int **)(*(int *)(param_1 + 0xac) + 4);
  (**(code **)(*piVar1 + 0xd8))(piVar1,1);
  piVar1 = *(int **)(*(int *)(param_1 + 0x4c) + 4);
  (**(code **)(*piVar1 + 0xd8))(piVar1,0);
  piVar1 = *(int **)(*(int *)(param_1 + 0x68) + 4);
  (**(code **)(*piVar1 + 0xd8))(piVar1,0);
  piVar1 = *(int **)(*(int *)(param_1 + 0x6c) + 4);
  (**(code **)(*piVar1 + 0xd8))(piVar1,0);
  func_0x021b65e0(*(undefined4 *)(*(int *)(param_1 + 0xac) + 4));
  func_0x021b6214(*(undefined4 *)(*(int *)(param_1 + 0xac) + 4),1);
  func_0x021b65e0(*(undefined4 *)(*(int *)(param_1 + 100) + 4));
  func_0x021b65d8(*(undefined4 *)(*(int *)(param_1 + 0x8c) + 4));
  FUN_0215aaf4();
  return;
}

