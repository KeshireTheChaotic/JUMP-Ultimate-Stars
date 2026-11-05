
undefined4 FUN_02160a48(undefined4 param_1,undefined4 param_2,undefined4 param_3,undefined4 param_4)

{
  int iVar1;
  int iVar2;
  
  iVar1 = FUN_02074310(DAT_021709ec,param_2,1,param_4,param_4);
  if (iVar1 != 0) {
    iVar1 = FUN_02074310(DAT_021709f0,param_2,1);
    if (iVar1 != 0) {
      return 0;
    }
    iVar1 = 0;
    while( true ) {
      if (0x13 < iVar1) {
        return 1;
      }
      iVar2 = FUN_02074310((&PTR_DAT_02170a34)[iVar1],param_3,1);
      if (iVar2 == 0) break;
      iVar1 = iVar1 + 1;
    }
    FUN_02074268(param_3,(&PTR_DAT_02170a34)[iVar1] + 2,1);
    return 2;
  }
  iVar1 = 0;
  while( true ) {
    if (0x32 < iVar1) {
      return 1;
    }
    iVar2 = FUN_02074310((&PTR_DAT_02170afc)[iVar1],param_3,1);
    if (iVar2 == 0) break;
    iVar1 = iVar1 + 1;
  }
  FUN_02074268(param_3,(&PTR_DAT_02170afc)[iVar1] + 2,1);
  return 2;
}

