
void FUN_02028868(int *param_1)

{
  if (*(int *)(param_1[0xd] + 0x224) != 0) {
    return;
  }
  if (*(char *)((int)param_1 + 0x29) < '\0') {
    (**(code **)(*param_1 + 0xc))();
    return;
  }
  FUN_02027560();
  return;
}

