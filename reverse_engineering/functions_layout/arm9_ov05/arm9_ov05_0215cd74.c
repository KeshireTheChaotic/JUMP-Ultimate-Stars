
void FUN_0215cd74(int param_1)

{
  *(char *)(param_1 + 0x4d5) = *(char *)(param_1 + 0x4d5) + -1;
  if (*(char *)(param_1 + 0x4d5) < 5) {
    FUN_0215cf68(param_1,4,8);
    *(undefined4 *)(param_1 + 0x20c) = 0;
    *(undefined4 *)(param_1 + 0x210) = 0;
    *(undefined1 *)(param_1 + 0x4df) = 0;
    *(code **)(param_1 + 0x4b4) = FUN_0215ce14;
    return;
  }
  FUN_0215cf68(param_1,(int)*(char *)(param_1 + 0x4d5),8);
  return;
}

