
void FUN_02156ec0(int param_1)

{
  int *piVar1;
  
  if (*(int *)(param_1 + 0x418) == 0) {
    return;
  }
  piVar1 = *(int **)(*(int *)(param_1 + 0x418) + 4);
  (**(code **)(*piVar1 + 0xd8))(piVar1,0);
  (**(code **)(**(int **)(param_1 + 0x418) + 8))();
  *(undefined4 *)(param_1 + 0x418) = 0;
  return;
}

