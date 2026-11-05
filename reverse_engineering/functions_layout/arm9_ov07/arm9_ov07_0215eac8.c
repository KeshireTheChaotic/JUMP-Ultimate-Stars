
void FUN_0215eac8(int param_1,undefined4 param_2)

{
  int iVar1;
  
  *(undefined4 *)(param_1 + 0x50f4) = param_2;
  iVar1 = *(int *)(param_1 + 0x50f0);
  if (iVar1 == 1) {
    return;
  }
  if (iVar1 == *(int *)(param_1 + 0x50f4)) {
    return;
  }
  FUN_0215f994(param_1,iVar1,0);
  return;
}

