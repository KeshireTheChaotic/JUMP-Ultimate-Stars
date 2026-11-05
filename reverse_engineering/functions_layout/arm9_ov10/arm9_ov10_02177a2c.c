
undefined4 FUN_02177a2c(undefined4 param_1,undefined4 param_2)

{
  int iVar1;
  undefined4 uVar2;
  int iVar3;
  int local_10;
  
  local_10 = 0;
  if ((DAT_021a75a4 == 0) || (iVar1 = FUN_02176f90(), iVar1 == 0)) {
    return 0;
  }
  uVar2 = FUN_02177558();
  iVar1 = FUN_02069718(uVar2,param_1);
  if ((0 < iVar1) &&
     (iVar3 = FUN_02181ddc(*(undefined4 *)(DAT_021a75a4 + 4),iVar1,&local_10), iVar3 != 0)) {
    return 0;
  }
  if ((iVar1 < 1) || (local_10 == -1)) {
    return 0;
  }
  iVar1 = FUN_02181e2c(*(undefined4 *)(DAT_021a75a4 + 4),local_10,param_2);
  if (iVar1 == 0) {
    return 1;
  }
  return 0;
}

