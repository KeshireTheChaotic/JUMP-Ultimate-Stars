
int FUN_0205e984(int *param_1,int param_2,int param_3)

{
  int iVar1;
  
  *(int *)(param_2 + 8) = param_3;
  if (param_3 == 0) {
    iVar1 = *param_1;
    *param_1 = param_2;
  }
  else {
    iVar1 = *(int *)(param_3 + 0xc);
    *(int *)(param_3 + 0xc) = param_2;
  }
  *(int *)(param_2 + 0xc) = iVar1;
  if (iVar1 == 0) {
    param_1[1] = param_2;
  }
  else {
    *(int *)(iVar1 + 8) = param_2;
  }
  return param_2;
}

