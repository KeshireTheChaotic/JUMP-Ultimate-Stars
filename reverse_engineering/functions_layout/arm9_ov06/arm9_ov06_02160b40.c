
bool FUN_02160b40(int param_1,int param_2)

{
  return *(ushort *)(param_2 + 2) <= *(ushort *)(param_1 + (uint)*(byte *)(param_2 + 1) * 2 + 0x6e);
}

