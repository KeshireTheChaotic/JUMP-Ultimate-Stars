
void FUN_0215cdcc(int param_1)

{
  *(char *)(param_1 + 0x4d5) = *(char *)(param_1 + 0x4d5) + '\x01';
  if (*(char *)(param_1 + 0x4d5) < 8) {
    FUN_0215cf68(param_1,(int)*(char *)(param_1 + 0x4d5),8);
    return;
  }
  FUN_0215ceec();
  *(undefined4 *)(param_1 + 0x20c) = 0;
  *(undefined4 *)(param_1 + 0x210) = 0;
  *(undefined1 *)(param_1 + 0x4df) = 0;
  return;
}

