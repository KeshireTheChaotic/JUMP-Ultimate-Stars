
void FUN_021a1acc(uint *param_1,uint param_2)

{
  int iVar1;
  
  param_2 = param_2 & 0x7fff;
  if ((int)param_2 < (int)*param_1) {
    param_2 = param_2 + 0x8000;
  }
  iVar1 = param_2 - *param_1;
  while( true ) {
    if (0x3ffe < iVar1) {
      return;
    }
    if (iVar1 < 1) break;
    *(undefined2 *)(param_1 + (uint)(byte)param_1[2] * 2 + 3) = 0xffff;
    FUN_021a1ab0(param_1);
    iVar1 = iVar1 + -1;
    *param_1 = *param_1 + 1 & 0x7fff;
  }
  return;
}

