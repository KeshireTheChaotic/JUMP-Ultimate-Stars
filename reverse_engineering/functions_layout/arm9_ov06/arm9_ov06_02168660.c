
void FUN_02168660(int param_1,int param_2)

{
  int *piVar1;
  
  param_1 = param_2 * 0x28 + param_1;
  if (*(int *)(param_1 + 8) != 0) {
    piVar1 = *(int **)(*(int *)(param_1 + 8) + 4);
    (**(code **)(*piVar1 + 0xd8))(piVar1,0);
  }
  if (*(int *)(param_1 + 0xc) != 0) {
    piVar1 = *(int **)(*(int *)(param_1 + 0xc) + 4);
    (**(code **)(*piVar1 + 0xd8))(piVar1,0);
  }
  if (*(int *)(param_1 + 0x10) != 0) {
    piVar1 = *(int **)(*(int *)(param_1 + 0x10) + 4);
    (**(code **)(*piVar1 + 0xd8))(piVar1,0);
  }
  *(undefined1 *)(param_1 + 0x26) = 1;
  return;
}

