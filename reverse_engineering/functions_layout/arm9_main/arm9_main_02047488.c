
void FUN_02047488(int param_1,undefined4 param_2,undefined4 param_3,undefined4 param_4)

{
  int iVar1;
  undefined4 uStack_10;
  
  iVar1 = *(int *)(param_1 + 4);
  uStack_10 = param_4;
  FUN_0200f69c(&uStack_10,1);
  *(int *)(param_1 + 4) = *(int *)(param_1 + 4) - iVar1;
  return;
}

