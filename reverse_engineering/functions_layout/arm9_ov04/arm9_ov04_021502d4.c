
void FUN_021502d4(int param_1,undefined4 param_2)

{
  if (param_1 == 0) {
    return;
  }
  *(undefined4 *)(param_1 + 0x28) = param_2;
  *(undefined4 *)(param_1 + 0x2c) = param_2;
  FUN_021503b4();
  return;
}

