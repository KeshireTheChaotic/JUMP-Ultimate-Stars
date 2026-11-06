
void FUN_02063ad4(int param_1,undefined2 param_2)

{
  *(uint *)(param_1 + 0xc) = *(uint *)(param_1 + 0xc) | 4;
  *(undefined4 *)(param_1 + 0x30) = *(undefined4 *)(param_1 + 8);
  *(undefined4 *)(param_1 + 0x38) = 0;
  *(undefined2 *)(param_1 + 0x36) = 0;
  *(undefined2 *)(param_1 + 0x34) = param_2;
  FUN_020633d8(param_1,2);
  return;
}

