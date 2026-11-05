
void FUN_0215a55c(int param_1)

{
  uint uVar1;
  
  if (*(int **)(param_1 + 4) != (int *)0x0) {
    (**(code **)(**(int **)(param_1 + 4) + 0xc))();
  }
  for (uVar1 = 0; uVar1 < 2; uVar1 = uVar1 + 1) {
    if (*(int *)(param_1 + uVar1 * 4 + 8) != 0) {
      FUN_0206ae98();
    }
  }
  FUN_0201b244(param_1);
  return;
}

