
byte * FUN_0201f6bc(byte *param_1,int param_2)

{
  return param_1 + ((int)*(short *)(param_1 +
                                   param_2 * 2 +
                                   (2 - ((uint)*param_1 + (uint)param_1[1] & 1) & 1) +
                                   (uint)*param_1 + (uint)param_1[1] + 2) & 0xfffffffe);
}

