
int FUN_02185b64(int *param_1,undefined4 param_2,undefined4 param_3)

{
  int iVar1;
  int iVar2;
  
  iVar2 = *param_1;
  iVar1 = FUN_02183b94(param_1,iVar2 + 0x440,param_2);
  if ((iVar1 == 0) && (iVar1 = FUN_02183b94(param_1,iVar2 + 0x440,param_3), iVar1 == 0)) {
    iVar1 = 0;
  }
  return iVar1;
}

