
undefined4 FUN_0214e1f8(undefined4 param_1,int param_2,int *param_3,undefined4 param_4)

{
  int iVar1;
  
  iVar1 = FUN_0214cdc4(*(undefined2 *)(param_2 + 0xc));
  if (iVar1 == 0) {
    *param_3 = *param_3 + 1;
    return param_1;
  }
  if (*(char *)(param_2 + 0x1b) != '\x11') {
    *param_3 = *param_3 + 1;
    return param_1;
  }
  iVar1 = FUN_0214de0c(param_2 + 0xc);
  if (0 < iVar1) {
    *param_3 = *param_3 + 1;
    return param_1;
  }
  iVar1 = FUN_0214cdc4(*(undefined2 *)(param_2 + 0x12));
  if (iVar1 == 0x1010) {
    param_1 = FUN_0214e0e8(param_1,param_2,param_3,param_4);
  }
  else if (iVar1 == 0x2010) {
    param_1 = FUN_0214dfe0(param_1,param_2,param_3,param_4);
  }
  else if (iVar1 == 0x3010) {
    param_1 = FUN_0214df1c(param_1,param_2,param_3,param_4);
  }
  return param_1;
}

