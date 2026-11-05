
void FUN_020265d0(int *param_1,int *param_2,int param_3,undefined4 param_4)

{
  int iVar1;
  undefined1 auStack_28 [4];
  undefined4 local_24;
  
  local_24 = param_4;
  FUN_0200f69c(auStack_28,1);
  iVar1 = FUN_0200d12c((param_2[1] * 0xc + *param_2) - param_3);
  FUN_02002450(param_3,param_3 + 0xc,(iVar1 + -1) * 0xc);
  param_2[1] = param_2[1] + -1;
  *param_1 = param_3;
  return;
}

