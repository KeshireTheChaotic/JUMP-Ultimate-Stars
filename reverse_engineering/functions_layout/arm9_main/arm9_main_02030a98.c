
void FUN_02030a98(int param_1,int *param_2)

{
  if (param_2 == (int *)0x0) {
    (**(code **)(**(int **)(param_1 + 0x24) + 0xc))();
    *(undefined4 *)(param_1 + 0x24) = DAT_020a0c88;
    return;
  }
  (**(code **)(*param_2 + 8))();
  (**(code **)(**(int **)(param_1 + 0x24) + 0xc))();
  *(int **)(param_1 + 0x24) = param_2;
  return;
}

