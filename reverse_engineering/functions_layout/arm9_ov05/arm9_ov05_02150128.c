
void FUN_02150128(int param_1,int param_2)

{
  int *piVar1;
  
  if (param_2 == 0) {
    piVar1 = *(int **)(*(int *)(param_1 + 0x1a0) + 4);
    (**(code **)(*piVar1 + 0xd8))(piVar1,0);
    return;
  }
  FUN_02023894(*(undefined4 *)(*(int *)(param_1 + 0x1a0) + 4),0x51001e,0);
  (**(code **)(**(int **)(*(int *)(*(int *)(param_1 + 0x1a0) + 4) + 0x68) + 0x6c))();
  piVar1 = *(int **)(*(int *)(param_1 + 0x1a0) + 4);
  (**(code **)(*piVar1 + 0xd8))(piVar1,1);
  return;
}

