
void FUN_0201b4d0(int *param_1,int param_2,uint param_3)

{
  int iVar1;
  
  *(uint *)(param_2 + 0xc) = param_3;
  if (*param_1 == 0) {
    if (param_2 != 0) {
      param_2 = param_2 + 4;
    }
    FUN_02037b54(param_1,param_2);
    return;
  }
  iVar1 = *param_1 + -4;
  while ((iVar1 != 0 && (param_3 < *(uint *)(iVar1 + 0xc)))) {
    iVar1 = *(int *)(iVar1 + 4);
    if (iVar1 != 0) {
      iVar1 = iVar1 + -4;
    }
  }
  if (iVar1 == 0) {
    if (param_2 != 0) {
      param_2 = param_2 + 4;
    }
    FUN_02037b98(param_1,param_2);
    return;
  }
  if (param_2 != 0) {
    param_2 = param_2 + 4;
  }
  FUN_02037bd8(param_1,*(undefined4 *)(iVar1 + 8),param_2);
  return;
}

