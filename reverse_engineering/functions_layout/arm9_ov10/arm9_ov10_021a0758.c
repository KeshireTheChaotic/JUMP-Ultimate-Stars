
void FUN_021a0758(int param_1,uint param_2)

{
  *(byte *)(param_1 + 5) = *(byte *)(param_1 + 5) | (byte)(1 << (param_2 & 0xff));
  return;
}

