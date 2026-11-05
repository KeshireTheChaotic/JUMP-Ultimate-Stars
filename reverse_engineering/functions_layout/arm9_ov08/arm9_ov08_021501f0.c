
undefined4 FUN_021501f0(undefined4 *param_1)

{
  int iVar1;
  
  *param_1 = DAT_0216d188;
  if (DAT_0216afd8 == -1) {
    param_1[1] = 0xffffffff;
  }
  else {
    iVar1 = FUN_021504d4();
    param_1[1] = DAT_0216afd8 - iVar1;
  }
  param_1[2] = DAT_0216d1c8;
  return 1;
}

