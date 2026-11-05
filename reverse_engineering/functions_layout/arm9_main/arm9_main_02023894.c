
undefined4 FUN_02023894(int param_1,undefined4 param_2,int param_3,undefined4 param_4)

{
  int iVar1;
  
  iVar1 = FUN_0201c170(param_1,*(undefined4 *)(param_1 + 0x68),param_2,param_3,param_4);
  if (iVar1 == 0) {
    return 0;
  }
  if (param_3 < 0) {
    param_3 = 0;
  }
  FUN_020239b0(param_1,iVar1,param_3);
  return 1;
}

