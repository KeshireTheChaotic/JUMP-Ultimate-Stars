
void FUN_02083648(int param_1)

{
  *(uint *)(param_1 + 0x2c) = *(uint *)(param_1 + 0x2c) | 1;
  FUN_0207cb58(*(undefined4 *)(param_1 + 0x10));
  FUN_02037c24(DAT_0214be14 + 0xc,param_1);
  FUN_02037b98(DAT_0214be14 + 0x1c,param_1);
  FUN_02083c44(param_1);
  return;
}

