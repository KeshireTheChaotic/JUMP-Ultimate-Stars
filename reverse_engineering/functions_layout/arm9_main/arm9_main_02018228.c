
int FUN_02018228(short *param_1)

{
  int iVar1;
  int iVar2;
  
  iVar2 = (int)*param_1;
  iVar1 = (int)param_1[2];
  if (iVar2 < iVar1) {
    iVar1 = iVar1 - iVar2;
  }
  else {
    iVar1 = iVar2 - iVar1;
  }
  return iVar1;
}

