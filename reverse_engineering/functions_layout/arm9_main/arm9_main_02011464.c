
int FUN_02011464(int param_1,int param_2)

{
  return param_1 + ((int)*(short *)(param_1 + (uint)(*(byte *)(param_1 + 0xc) >> 1) * 2 +
                                    param_2 * 2 + 0xe) / 2 + 2) * 2;
}

