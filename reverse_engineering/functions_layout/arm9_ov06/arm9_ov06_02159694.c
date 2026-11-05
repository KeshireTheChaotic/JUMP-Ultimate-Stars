
undefined4 FUN_02159694(undefined4 param_1,int param_2,undefined4 param_3,undefined4 param_4)

{
  short sVar1;
  int iVar2;
  
  iVar2 = FUN_0215986c(param_1,param_2,0x19,param_4,param_4);
  if (iVar2 != 0) {
    return 0;
  }
  sVar1 = *(short *)(param_2 + 0x10);
  *(short *)(param_2 + 0x10) = sVar1 + 1;
  if (0x6e < sVar1) {
    *(undefined2 *)(param_2 + 0x10) = 0;
    FUN_0215bea8(param_1);
  }
  return 1;
}

