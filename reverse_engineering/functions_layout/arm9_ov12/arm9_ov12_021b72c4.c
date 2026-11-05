
void FUN_021b72c4(int *param_1,int *param_2,int param_3,undefined4 param_4)

{
  int iVar1;
  undefined1 auStack_28 [4];
  undefined4 uStack_24;
  
  uStack_24 = param_4;
  FUN_0200f69c(auStack_28,1);
  iVar1 = (*param_2 + param_2[1] * 8) - param_3;
  FUN_02002450(param_3,param_3 + 8,(((int)(iVar1 + ((uint)(iVar1 >> 2) >> 0x1d)) >> 3) + -1) * 8);
  param_2[1] = param_2[1] + -1;
  *param_1 = param_3;
  return;
}

