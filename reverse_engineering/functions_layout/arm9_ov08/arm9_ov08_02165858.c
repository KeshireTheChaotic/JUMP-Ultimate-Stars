
undefined4 FUN_02165858(int param_1,int param_2,int param_3)

{
  int iVar1;
  int iVar2;
  
  iVar1 = FUN_02004b04();
  iVar2 = FUN_02004b04(param_2);
  if ((iVar1 < param_3) || (iVar2 < param_3)) {
    return 0;
  }
  iVar1 = FUN_020024cc(param_1 + (iVar1 - param_3),param_2 + (iVar2 - param_3),param_3);
  if (iVar1 == 0) {
    return 1;
  }
  return 0;
}

