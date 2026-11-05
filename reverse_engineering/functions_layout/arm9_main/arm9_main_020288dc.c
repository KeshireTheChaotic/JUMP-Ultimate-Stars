
void FUN_020288dc(int *param_1,int param_2)

{
  *param_1 = param_2;
  *(int **)(param_2 + 0xdc) = param_1;
  return;
}

