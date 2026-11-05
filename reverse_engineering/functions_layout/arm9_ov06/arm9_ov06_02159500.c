
undefined4 FUN_02159500(int param_1,int param_2,undefined4 param_3,undefined4 param_4)

{
  int iVar1;
  
  iVar1 = FUN_0215986c(param_1,param_2,0x1d,param_4,param_4);
  if (iVar1 == 0) {
    FUN_020783cc(*(undefined4 *)(param_1 + 0x1b4),(int)*(short *)(*(int *)(param_2 + 4) + 4));
    return 1;
  }
  return 0;
}

