
void FUN_021790fc(int param_1)

{
  if (*(int **)(param_1 + 0x30) != (int *)0x0) {
    (**(code **)(**(int **)(param_1 + 0x30) + 8))();
    *(undefined4 *)(param_1 + 0x30) = 0;
  }
  FUN_0201b244(param_1);
  return;
}

