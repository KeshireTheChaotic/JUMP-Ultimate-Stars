
int FUN_021898c4(int param_1,int param_2,int param_3)

{
  int iVar1;
  int *piVar2;
  int iVar3;
  
  if (DAT_021a7d30 == 0) {
    return -1;
  }
  iVar3 = 0;
  iVar1 = FUN_0200131c();
  if (0 < iVar1) {
    do {
      piVar2 = (int *)FUN_020012d8(DAT_021a7d30,iVar3);
      if (((*piVar2 == param_1) && (piVar2[1] == param_2)) && (piVar2[2] == param_3)) {
        return iVar3;
      }
      iVar3 = iVar3 + 1;
      iVar1 = FUN_0200131c(DAT_021a7d30);
    } while (iVar3 < iVar1);
  }
  return -1;
}

