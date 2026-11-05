
void FUN_0202ab8c(int param_1)

{
  FUN_02019f00(param_1 + 0x3c,*(undefined4 *)(param_1 + 0x30));
  if ((*(byte *)(param_1 + 0x24) & 7) >> 2 != 0) {
    FUN_02018ac8(param_1 + 0x3c,param_1 + 0x34);
    FUN_02018ac8(param_1 + 0x44,param_1 + 0x38);
    FUN_02018ac8(param_1 + 0x40,param_1 + 0x34);
    FUN_02018ac8(param_1 + 0x48,param_1 + 0x38);
  }
  *(undefined4 *)(param_1 + 0x4c) = *(undefined4 *)(param_1 + 0xc);
  *(undefined4 *)(param_1 + 0x50) = *(undefined4 *)(param_1 + 0x10);
  return;
}

