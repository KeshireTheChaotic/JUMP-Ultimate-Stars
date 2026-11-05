
char * FUN_0200d940(char *param_1,uint *param_2)

{
  uint uVar1;
  uint uVar2;
  
  uVar1 = (uint)*param_1;
  if ((uVar1 & 1) == 0) {
    *param_2 = (int)uVar1 >> 1;
    return param_1 + 1;
  }
  uVar2 = (uint)(byte)param_1[1];
  if ((uVar1 & 2) == 0) {
    *param_2 = uVar2 | ((int)uVar1 >> 2) << 8;
    return param_1 + 2;
  }
  if ((uVar1 & 4) == 0) {
    *param_2 = (uint)(byte)param_1[2] | uVar2 << 8 | ((int)uVar1 >> 3) << 0x10;
    return param_1 + 3;
  }
  *param_2 = (uint)(byte)param_1[3] |
             uVar2 << 0x10 | ((int)uVar1 >> 3) << 0x18 | (uint)(byte)param_1[2] << 8;
  return param_1 + 4;
}

