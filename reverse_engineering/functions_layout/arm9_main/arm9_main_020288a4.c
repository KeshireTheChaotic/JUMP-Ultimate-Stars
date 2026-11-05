
void FUN_020288a4(int *param_1)

{
  if (*(int *)(param_1[0xd] + 0x224) != 0) {
    return;
  }
  if ((short)param_1[1] == 1) {
    FUN_02028868();
    return;
  }
  (**(code **)(*param_1 + 0xc))();
  return;
}

