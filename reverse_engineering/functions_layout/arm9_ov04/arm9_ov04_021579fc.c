
void FUN_021579fc(int param_1)

{
  if (param_1 == 0) {
    return;
  }
  if (*(int *)(param_1 + 0x1c) != 0) {
    FUN_021500f0();
  }
  if (*(int *)(param_1 + 0xc) != 0) {
    FUN_0206ae98();
  }
  if (*(int *)(param_1 + 0x10) != 0) {
    FUN_0206ae98();
  }
  FUN_0201b244(param_1);
  return;
}

