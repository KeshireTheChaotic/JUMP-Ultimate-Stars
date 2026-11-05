
void FUN_02079dfc(int param_1)

{
  *(byte *)(param_1 + 0xe) = *(byte *)(param_1 + 0xe) & 0xc0 | 0x3f;
  *(byte *)(param_1 + 0xf) = *(byte *)(param_1 + 0xf) & 0xc0 | 0x3f;
  *(undefined2 *)(param_1 + 0xc) = 0xffff;
  *(byte *)(param_1 + 0xe) = *(byte *)(param_1 + 0xe) & 0x7f;
  *(byte *)(param_1 + 0xf) = *(byte *)(param_1 + 0xf) | 0x80;
  return;
}

