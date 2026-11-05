
uint FUN_020049b8(int *param_1,uint param_2,int param_3)

{
  byte bVar1;
  
  if (param_3 == 0) {
    bVar1 = *(byte *)*param_1;
    if (bVar1 == 0) {
      param_1[1] = 1;
      return 0xffffffff;
    }
    *param_1 = (int)((byte *)*param_1 + 1);
    return (uint)bVar1;
  }
  if (param_3 != 1) {
    if (param_3 == 2) {
      return param_1[1];
    }
    return 0;
  }
  if (param_1[1] == 0) {
    *param_1 = *param_1 + -1;
  }
  else {
    param_1[1] = 0;
  }
  return param_2;
}

