
void FUN_021579ac(int param_1,int param_2)

{
  int iVar1;
  
  for (iVar1 = 0; iVar1 < param_2; iVar1 = iVar1 + 1) {
    if (*(char *)(*(int *)(*(int *)(param_1 + 0x70) + 8) + iVar1 * 0x1c + 2) != '\0') {
      FUN_02157a3c(param_1,iVar1);
    }
  }
  return;
}

