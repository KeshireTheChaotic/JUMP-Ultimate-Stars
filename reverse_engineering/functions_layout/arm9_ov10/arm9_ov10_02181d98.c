
undefined4 FUN_02181d98(int *param_1,undefined4 param_2)

{
  int iVar1;
  int local_8 [2];
  
  if ((param_1 == (int *)0x0) || (*param_1 == 0)) {
    return 0;
  }
  if (*(int *)(*param_1 + 0x108) != 0) {
    return 0;
  }
  iVar1 = FUN_021875f8(param_1,param_2,local_8);
  if ((iVar1 == 0) || (*(int *)(local_8[0] + 8) == 0)) {
    return 0;
  }
  return 1;
}

