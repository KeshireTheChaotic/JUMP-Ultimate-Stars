
int FUN_02011434(int param_1,int param_2)

{
  return param_1 + (uint)*(ushort *)
                          (param_1 + (*(byte *)(param_1 + 6) - 2) * 2 + param_2 * 2 + 0x14);
}

