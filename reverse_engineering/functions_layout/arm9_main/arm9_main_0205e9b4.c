
int FUN_0205e9b4(int *param_1,int param_2)

{
  int iVar1;
  int iVar2;
  
  iVar2 = *(int *)(param_2 + 8);
  iVar1 = *(int *)(param_2 + 0xc);
  if (iVar2 == 0) {
    *param_1 = iVar1;
  }
  else {
    *(int *)(iVar2 + 0xc) = iVar1;
  }
  if (iVar1 == 0) {
    param_1[1] = iVar2;
  }
  else {
    *(int *)(iVar1 + 8) = iVar2;
  }
  return iVar2;
}

