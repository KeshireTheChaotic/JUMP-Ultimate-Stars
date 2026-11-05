
void FUN_02168590(int param_1,int param_2)

{
  int iVar1;
  
  for (iVar1 = 0; iVar1 < *(int *)(param_1 + 0xac); iVar1 = iVar1 + 1) {
    if ((param_2 == 0) || (*(char *)(iVar1 * 0x28 + param_1 + 0x26) != '\0')) {
      FUN_02168660(param_1,iVar1);
    }
    else {
      FUN_021685f0(param_1,iVar1);
    }
  }
  return;
}

