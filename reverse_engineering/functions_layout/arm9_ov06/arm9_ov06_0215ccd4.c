
undefined4 FUN_0215ccd4(int param_1)

{
  int iVar1;
  
  iVar1 = FUN_02078660(*(undefined4 *)(param_1 + 0x1b4),0,1);
  if ((iVar1 == 0) &&
     (iVar1 = FUN_0214fd84(DAT_02172960,(int)*(char *)(param_1 + 0x1e0)), iVar1 != 0)) {
    FUN_0215cd2c(param_1);
    return 1;
  }
  return 0;
}

