
void FUN_020538f4(int *param_1,int param_2)

{
  int iVar1;
  int iVar2;
  
  for (iVar2 = *param_1; (iVar2 != 0 && (*(uint *)(iVar2 + 0x70) <= *(uint *)(param_2 + 0x70)));
      iVar2 = *(int *)(iVar2 + 0x80)) {
    if (iVar2 == param_2) {
      return;
    }
  }
  if (iVar2 == 0) {
    iVar2 = param_1[1];
    if (iVar2 == 0) {
      *param_1 = param_2;
    }
    else {
      *(int *)(iVar2 + 0x80) = param_2;
    }
    *(int *)(param_2 + 0x7c) = iVar2;
    *(undefined4 *)(param_2 + 0x80) = 0;
    param_1[1] = param_2;
    return;
  }
  iVar1 = *(int *)(iVar2 + 0x7c);
  if (iVar1 == 0) {
    *param_1 = param_2;
  }
  else {
    *(int *)(iVar1 + 0x80) = param_2;
  }
  *(int *)(param_2 + 0x7c) = iVar1;
  *(int *)(param_2 + 0x80) = iVar2;
  *(int *)(iVar2 + 0x7c) = param_2;
  return;
}

