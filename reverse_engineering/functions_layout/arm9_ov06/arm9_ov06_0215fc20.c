
void FUN_0215fc20(int param_1,uint param_2)

{
  if ((*(uint *)(param_1 + 0xc) & 1 << (param_2 & 0xff)) == 0) {
    *(uint *)(param_1 + 0xc) = *(uint *)(param_1 + 0xc) | 1 << (param_2 & 0xff);
    param_1 = param_1 + param_2 * 2;
    *(short *)(param_1 + 0x16) = *(short *)(*(int *)(DAT_02172984 + 0xc) + param_2 * 4) << 8;
    *(undefined2 *)(param_1 + 0x36) =
         *(undefined2 *)(*(int *)(DAT_02172984 + 0xc) + param_2 * 4 + 2);
    return;
  }
  return;
}

