
int FUN_0216e730(int param_1,int *param_2)

{
  int iVar1;
  int iVar2;
  int iVar3;
  
  iVar1 = *(int *)(param_1 + 0x10);
  iVar3 = *(int *)(*(int *)(iVar1 + 0x5c) + 0xc);
  iVar2 = iVar3 - *(int *)(iVar1 + 0x88);
  iVar1 = iVar3 + *(int *)(iVar1 + 0x8c);
  if (*param_2 < iVar3) {
    return iVar2 + 0x400;
  }
  if (iVar3 < *param_2) {
    return iVar1 + -0x400;
  }
  if (iVar1 - iVar3 < iVar3 - iVar2) {
    iVar1 = iVar1 + -0x400;
  }
  else {
    iVar1 = iVar2 + 0x400;
  }
  return iVar1;
}

