
void FUN_02020910(int param_1)

{
  int *piVar1;
  
  piVar1 = *(int **)(param_1 + 4);
  (**(code **)(*piVar1 + 8))();
  FUN_02020ccc(piVar1);
  return;
}

