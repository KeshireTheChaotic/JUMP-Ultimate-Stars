
int FUN_02017a80(int param_1,int param_2)

{
  return *(int *)(param_1 + 0xc) + (param_2 * (uint)*(ushort *)(param_1 + 8) >> 1);
}

