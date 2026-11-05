
undefined4 FUN_021593e8(int param_1,int param_2)

{
  if (*(short *)(param_2 + 0x10) == 0) {
    *(undefined2 *)(param_2 + 0x10) = 1;
    *(undefined2 *)(param_1 + 0xbc) = 0x140;
  }
  if (*(short *)(param_2 + 0xe) == 0) {
    FUN_0215bf70();
  }
  return 1;
}

