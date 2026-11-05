
undefined4 FUN_02181ddc(int *param_1,undefined4 param_2,undefined4 *param_3)

{
  int iVar1;
  int local_10 [2];
  
  if ((param_1 == (int *)0x0) || (*param_1 == 0)) {
    return 2;
  }
  if (*(int *)(*param_1 + 0x108) != 0) {
    *param_3 = 0;
    return 0;
  }
  iVar1 = FUN_021875f8(param_1,param_2,local_10);
  if ((iVar1 == 0) || (*(undefined4 **)(local_10[0] + 8) == (undefined4 *)0x0)) {
    *param_3 = 0xffffffff;
  }
  else {
    *param_3 = **(undefined4 **)(local_10[0] + 8);
  }
  return 0;
}

