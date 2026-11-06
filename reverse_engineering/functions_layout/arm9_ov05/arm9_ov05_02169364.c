
void FUN_02169364(int param_1,undefined4 param_2,undefined4 param_3)

{
  *(undefined4 *)(param_1 + 0x10) = param_2;
  *(undefined4 *)(param_1 + 0x14) = param_3;
  FUN_02169624(param_1,*(undefined4 *)(param_1 + 100));
  return;
}

