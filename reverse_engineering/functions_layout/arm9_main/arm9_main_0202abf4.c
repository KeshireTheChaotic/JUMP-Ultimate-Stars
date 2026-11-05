
void FUN_0202abf4(int param_1)

{
  if ((*(byte *)(param_1 + 0x24) & 3) >> 1 == 0) {
    *(undefined4 *)(param_1 + 0x3c) = *(undefined4 *)(param_1 + 0x34);
    *(undefined4 *)(param_1 + 0x48) = *(undefined4 *)(param_1 + 0x38);
    *(undefined4 *)(param_1 + 0x44) = 0;
    *(undefined4 *)(param_1 + 0x40) = 0;
  }
  else if ((*(byte *)(param_1 + 0x24) & 7) >> 2 == 0) {
    FUN_02019f00(param_1 + 0x3c,*(undefined4 *)(param_1 + 0x30));
  }
  else {
    FUN_02019f00(param_1 + 0x3c,*(undefined4 *)(param_1 + 0x30));
    FUN_02018ac8(param_1 + 0x3c,param_1 + 0x34);
    FUN_02018ac8(param_1 + 0x44,param_1 + 0x38);
    FUN_02018ac8(param_1 + 0x40,param_1 + 0x34);
    FUN_02018ac8(param_1 + 0x48,param_1 + 0x38);
  }
  *(undefined4 *)(param_1 + 0x4c) = *(undefined4 *)(param_1 + 0xc);
  *(undefined4 *)(param_1 + 0x50) = *(undefined4 *)(param_1 + 0x10);
  return;
}

