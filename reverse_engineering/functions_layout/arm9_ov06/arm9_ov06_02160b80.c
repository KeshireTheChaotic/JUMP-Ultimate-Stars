
bool FUN_02160b80(int param_1,int param_2)

{
  return *(short *)(param_1 + (uint)*(byte *)(param_2 + 1) * 2 + 0x6e) == 0;
}

