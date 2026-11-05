
void FUN_021c3508(int param_1,byte param_2)

{
  *(byte *)(param_1 + 0xa9) = *(byte *)(param_1 + 0xa9) & 0xfb | (param_2 & 1) << 2;
  FUN_021c3430(param_1,*(undefined1 *)(param_1 + 0xa7));
  *(undefined2 *)(param_1 + 0xa4) = 0xf0;
  return;
}

