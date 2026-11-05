
void FUN_02029c68(int param_1,undefined4 param_2,int param_3,int param_4)

{
  MIi_CpuCopy16(param_2,*(int *)(param_1 + 0x10) + param_3 * 2,param_4 << 1);
  FUN_02029dc4(param_1);
  *(undefined1 *)(param_1 + 0x1c) = 1;
  *(undefined1 *)(param_1 + 0xf) = 0;
  return;
}

