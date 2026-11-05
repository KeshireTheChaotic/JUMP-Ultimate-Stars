
int FUN_02179000(int param_1,undefined4 param_2,int param_3)

{
  int iVar1;
  
  if (param_1 == 0) {
    return 0;
  }
  if (param_1 == 1) {
    param_3 = -1;
    iVar1 = 9;
  }
  else if (param_1 == 2) {
    param_3 = -0x32;
    iVar1 = 6;
  }
  else {
    iVar1 = param_1;
    if (param_1 == 3) {
      param_3 = -0x1e;
      iVar1 = 6;
    }
  }
  FUN_0217d118(iVar1,param_3 + -86000);
  return param_1;
}

