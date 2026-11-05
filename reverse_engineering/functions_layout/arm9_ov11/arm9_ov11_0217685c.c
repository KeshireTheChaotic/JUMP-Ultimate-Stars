
void FUN_0217685c(int param_1)

{
  FUN_02037c24(DAT_02183a38 + 0x30,param_1);
  FUN_02037b98(DAT_02183a38 + 8,param_1);
  *(short *)(param_1 + 0x14) =
       (short)((int)*(short *)(param_1 + 0xc) - (int)*(short *)(param_1 + 8) >> 1);
  *(short *)(param_1 + 0x16) =
       (short)((int)*(short *)(param_1 + 0xe) - (int)*(short *)(param_1 + 10) >> 1);
  *(short *)(param_1 + 0x10) = *(short *)(param_1 + 8) + *(short *)(param_1 + 0x14);
  *(short *)(param_1 + 0x12) = *(short *)(param_1 + 10) + *(short *)(param_1 + 0x16);
  return;
}

