
int FUN_021ad6b4(int param_1)

{
  int iVar1;
  int iVar2;
  
  iVar2 = (int)*(short *)(param_1 + 2);
  iVar1 = (int)*(short *)(param_1 + 6);
  if (iVar2 < iVar1) {
    iVar1 = iVar1 - iVar2;
  }
  else {
    iVar1 = iVar2 - iVar1;
  }
  return iVar1;
}

