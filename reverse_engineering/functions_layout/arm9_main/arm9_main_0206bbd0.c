
void FUN_0206bbd0(int param_1,undefined2 param_2,undefined2 param_3,int param_4)

{
  *(undefined2 *)(param_1 + 8) = param_2;
  *(undefined2 *)(param_1 + 10) = param_3;
  if (param_4 == 0) {
    *(byte *)(param_1 + 0x14) = *(byte *)(param_1 + 0x14) & 0xfe;
    return;
  }
  *(byte *)(param_1 + 0x14) = *(byte *)(param_1 + 0x14) | 1;
  return;
}

