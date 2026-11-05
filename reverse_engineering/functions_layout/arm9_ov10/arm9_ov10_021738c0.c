
undefined4 FUN_021738c0(undefined4 param_1,undefined4 param_2,undefined4 param_3,int param_4)

{
  int iVar1;
  int iVar2;
  
  iVar1 = FUN_02173920();
  if (iVar1 == 0) {
    return 0;
  }
  iVar2 = FUN_02004b04();
  if (iVar2 < param_4) {
    FUN_02004b18(param_3,iVar1);
    return 1;
  }
  return 0;
}

