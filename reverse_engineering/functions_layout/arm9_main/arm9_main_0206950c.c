
undefined4 FUN_0206950c(undefined4 param_1)

{
  int iVar1;
  int iVar2;
  bool bVar3;
  
                    /* JUS-TAG strings=["[SDK+NINTENDO:DWC1.2.30004.060825.1845_DWC_1_2_PLUS4]"] */
  FUN_02000b54(s__SDK_NINTENDO_DWC1_2_30004_06082_02000b94);
  iVar1 = FUN_0206a6e8(param_1);
  iVar2 = FUN_0206a938();
  bVar3 = iVar2 != 0;
  if (bVar3) {
    FUN_0206aaf4(param_1);
  }
  if (iVar1 < 0) {
    if (bVar3) {
      return 2;
    }
    return 3;
  }
  if (bVar3) {
    return 1;
  }
  return 0;
}

