
void FUN_0218140c(int *param_1,undefined *param_2,int *param_3)

{
  int iVar1;
  
  if (param_2 == (undefined *)0x0) {
    param_2 = &DAT_021a4d38;
  }
  iVar1 = FUN_02004b04(param_2);
  iVar1 = iVar1 + 1;
  FUN_02002434(*param_1,param_2,iVar1);
  *param_3 = *param_3 + iVar1;
  *param_1 = *param_1 + iVar1;
  return;
}

