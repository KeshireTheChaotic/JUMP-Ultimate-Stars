
void FUN_02176404(undefined4 param_1,undefined4 param_2,int param_3)

{
  if (*(int **)(param_3 + 0x1c) != (int *)0x0) {
    (**(code **)(**(int **)(param_3 + 0x1c) + 8))();
    *(undefined4 *)(param_3 + 0x1c) = 0;
  }
  FUN_0201b244(param_3);
  return;
}

