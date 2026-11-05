
void FUN_02044aa4(int param_1,int param_2)

{
  *(int *)(param_1 + 0x70) = param_2;
  *(uint *)(param_1 + 0x68) =
       *(int *)(&DAT_0209445c + param_2 * 4) *
       (uint)*(ushort *)(param_1 + 0x2c) * (uint)*(ushort *)(param_1 + 0x2e) >> 3;
  return;
}

