
void FUN_02019828(int param_1,ushort param_2)

{
  *(ushort *)(param_1 + 0x10) = param_2 & 0x7fff;
  *(undefined2 *)(param_1 + 0x12) = 0xff;
  return;
}

