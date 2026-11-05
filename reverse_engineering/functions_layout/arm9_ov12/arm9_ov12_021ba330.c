
int * FUN_021ba330(int *param_1,undefined4 param_2,undefined4 param_3,undefined4 param_4)

{
  int iVar1;
  undefined4 uStack_10;
  
  if (*param_1 != 0) {
    iVar1 = param_1[1];
    uStack_10 = param_4;
    FUN_0200f69c(&uStack_10,1);
    param_1[1] = param_1[1] - iVar1;
    FUN_0201b244(*param_1);
  }
  return param_1;
}

