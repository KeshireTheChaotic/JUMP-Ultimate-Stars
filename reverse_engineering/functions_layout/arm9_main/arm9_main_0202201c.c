
void FUN_0202201c(int param_1,int *param_2)

{
  int *piVar1;
  
  piVar1 = *(int **)(param_1 + 100);
  if (param_2 == piVar1) {
    return;
  }
  if (piVar1 != DAT_020a0fec && piVar1 != (int *)0x0) {
    (**(code **)(*piVar1 + 4))();
  }
  *(int **)(param_1 + 100) = param_2;
  return;
}

