
bool FUN_02160b60(int param_1,int param_2)

{
  return *(ushort *)(param_1 + (uint)*(byte *)(param_2 + 1) * 2 + 0x6e) <= *(ushort *)(param_2 + 2);
}

