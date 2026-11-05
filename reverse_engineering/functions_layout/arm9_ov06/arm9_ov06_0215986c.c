
undefined4 FUN_0215986c(int param_1,int param_2,undefined4 param_3,undefined4 param_4)

{
  int iVar1;
  
  iVar1 = FUN_02158eb0(param_1 + 0x120,param_3,param_3,param_4,param_4);
  if (iVar1 == 0) {
    return 0;
  }
  *(undefined2 *)(param_2 + 0xe) = 0;
  *(undefined1 *)(param_2 + 0x15) = 0;
  FUN_0215f6e4(param_1,0x230015,1);
  FUN_0207342c(0x7a,0x2b);
  FUN_0207342c(0x7a,0x56);
  return 1;
}

