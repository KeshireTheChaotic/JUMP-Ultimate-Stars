
void FUN_0215cd30(int param_1,undefined4 param_2,undefined4 param_3,undefined4 param_4,char param_5)

{
  *(undefined4 *)(param_1 + 0x20c) = param_2;
  *(undefined4 *)(param_1 + 0x210) = param_3;
  *(char *)(param_1 + 0x4df) = (char)param_4;
  *(undefined1 *)(param_1 + 0x4d5) = 4;
  *(code **)(param_1 + 0x4b4) = FUN_0215cdcc;
  if (param_5 == '\0') {
    return;
  }
  FUN_02073f24(0x11,0,8,4,param_4);
  return;
}

