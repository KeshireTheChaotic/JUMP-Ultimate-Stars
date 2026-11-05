
void FUN_02154f8c(int *param_1,int param_2,undefined4 param_3,undefined4 param_4)

{
  int iVar1;
  int extraout_r1;
  
  if (param_1 == (int *)0x0) {
    return;
  }
  if ((399 < param_2) || (param_2 == 0)) {
    FUN_02154f40(*param_1,1,param_3,param_4,param_4);
    return;
  }
  FUN_02028330(*(undefined4 *)(*(int *)*param_1 + 4));
  FUN_0200d12c(param_2,0x32);
  iVar1 = FUN_0200d12c((0x31 - extraout_r1) * 0x3c,0x32);
  if (0x1d < iVar1) {
    iVar1 = 0x3b - iVar1;
  }
  *(char *)(*param_1 + 0x11) = (char)iVar1;
  return;
}

