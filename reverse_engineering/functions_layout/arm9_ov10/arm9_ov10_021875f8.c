
undefined4 FUN_021875f8(int *param_1,undefined4 param_2,int *param_3)

{
  int iVar1;
  undefined4 local_28 [8];
  
  local_28[0] = param_2;
  iVar1 = FUN_020014e4(*(undefined4 *)(*param_1 + 0x428),local_28);
  if (param_3 != (int *)0x0) {
    *param_3 = iVar1;
  }
  if (iVar1 == 0) {
    return 0;
  }
  return 1;
}

