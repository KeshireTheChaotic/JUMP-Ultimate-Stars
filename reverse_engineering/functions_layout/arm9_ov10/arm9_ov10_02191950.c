
int FUN_02191950(int param_1)

{
  int iVar1;
  
  iVar1 = *(int *)(param_1 + 100);
  if (iVar1 == 0) {
    iVar1 = *(int *)(param_1 + 0x68);
  }
  return iVar1;
}

