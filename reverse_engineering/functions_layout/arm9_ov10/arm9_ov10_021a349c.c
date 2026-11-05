
void FUN_021a349c(int *param_1)

{
  if (DAT_021abd8c == *(int *)(param_1[1] + 0x10)) {
    DAT_021abd8c = 0;
  }
  (**(code **)(*param_1 + 8))();
  return;
}

