
int FUN_021895ec(int param_1,int param_2)

{
  int iVar1;
  int iVar2;
  int iVar3;
  
  iVar1 = FUN_02189924();
  iVar2 = param_2;
  while ((0 < iVar2 && (iVar1 != 0))) {
    DAT_021a64d0 = &DAT_021a64d4;
    iVar3 = iVar1 - param_1;
    FUN_02189a28(param_1,iVar3);
    FUN_02189644(param_1,iVar3);
    iVar2 = iVar2 - (iVar3 + 7);
    param_1 = iVar1 + 7;
    if (0 < iVar2) {
      iVar1 = FUN_02189924(param_1,iVar2);
    }
  }
  return param_2 - iVar2;
}

