
byte * FUN_0201f6f4(byte *param_1,int param_2)

{
  uint uVar1;
  
  uVar1 = (uint)*param_1 + (uint)param_1[1];
  return param_1 + ((int)*(short *)(param_1 +
                                   (param_2 + (uint)*param_1) * 2 + (2 - (uVar1 & 1) & 1) + uVar1 +
                                   2) & 0xfffffffe);
}

