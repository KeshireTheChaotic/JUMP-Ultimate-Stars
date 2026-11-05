
void FUN_02030ebc(int *param_1)

{
  if (param_1 == (int *)0x0) {
    return;
  }
  (**(code **)(*param_1 + 4))();
  return;
}

