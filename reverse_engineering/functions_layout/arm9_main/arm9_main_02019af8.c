
void FUN_02019af8(int param_1,ushort param_2,int param_3)

{
  *(ushort *)(param_1 + 0x1c + param_3 * 2) =
       *(ushort *)(param_1 + 0x1c + param_3 * 2) & 0xffe7 | (param_2 & 3) << 3;
  return;
}

