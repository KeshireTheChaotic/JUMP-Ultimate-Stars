
uint FUN_0214d190(uint param_1,int param_2,int param_3,int param_4,int param_5)

{
  int iVar1;
  
  if (param_4 == 0) {
    FUN_0214d154(0,param_5);
  }
  iVar1 = 0;
  if (0 < param_3) {
    do {
      param_1 = param_1 >> 8 ^
                *(uint *)(param_5 + ((param_1 ^ *(byte *)(param_2 + iVar1)) & 0xff) * 4);
      iVar1 = iVar1 + 1;
    } while (iVar1 < param_3);
  }
  return param_1;
}

