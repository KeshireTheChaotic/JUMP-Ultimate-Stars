
int FUN_02001908(int param_1,int param_2)

{
  undefined4 uVar1;
  int extraout_r1;
  
  if (param_2 - param_1 != 0) {
    uVar1 = FUN_02001940();
    FUN_0200d12c(uVar1,param_2 - param_1);
    param_1 = extraout_r1 + param_1;
  }
  return param_1;
}

