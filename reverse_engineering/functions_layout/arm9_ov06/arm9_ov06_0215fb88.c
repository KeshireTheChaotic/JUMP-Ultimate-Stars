
void FUN_0215fb88(int param_1)

{
  *(short *)(param_1 + 0x5a) = **(short **)(DAT_02172984 + 0xc) << 8;
  *(short *)(param_1 + 0x5e) = *(short *)(*(int *)(DAT_02172984 + 0xc) + 4) << 8;
  *(short *)(param_1 + 0x60) = *(short *)(*(int *)(DAT_02172984 + 0xc) + 8) << 8;
  *(short *)(param_1 + 0x5c) = *(short *)(*(int *)(DAT_02172984 + 0xc) + 0xc) << 8;
  *(short *)(param_1 + 0x62) = *(short *)(*(int *)(DAT_02172984 + 0xc) + 0x10) << 8;
  *(undefined2 *)(param_1 + 0x56) = *(undefined2 *)(param_1 + 0x5a);
  *(undefined2 *)(param_1 + 0x58) = *(undefined2 *)(param_1 + 0x5c);
  *(undefined4 *)(param_1 + 0xc) = 0;
  *(undefined2 *)(param_1 + 0x12) = 0x1b0;
  *(undefined2 *)(param_1 + 0x10) = 0;
  *(undefined2 *)(param_1 + 0x14) = 0;
  return;
}

