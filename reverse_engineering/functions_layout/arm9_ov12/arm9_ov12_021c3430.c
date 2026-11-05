
void FUN_021c3430(int *param_1,undefined1 param_2,undefined4 param_3,undefined4 param_4)

{
  if (-1 < (int)((uint)*(byte *)((int)param_1 + 0xa9) << 0x1f)) {
    FUN_02028384(*(undefined4 *)(*param_1 + 4),0x21c3a25,param_3,param_4,param_4);
    FUN_02028330(*(undefined4 *)(*param_1 + 4));
  }
  *(undefined1 *)((int)param_1 + 0xa7) = param_2;
  *(byte *)((int)param_1 + 0xa9) = *(byte *)((int)param_1 + 0xa9) & 0xfe | 1;
  *(byte *)((int)param_1 + 0xa9) = *(byte *)((int)param_1 + 0xa9) | 2;
  *(undefined2 *)(param_1 + 0x29) = 0;
  return;
}

