
int FUN_02155824(int param_1)

{
  int iVar1;
  
  if (*(int *)(param_1 + 0x3c4) != 0) {
    return *(int *)(param_1 + 0x3c4);
  }
  if (*(int *)(param_1 + 0x3c8) == 0) {
    iVar1 = 0;
  }
  else {
    iVar1 = *(int *)(*(int *)(param_1 + 0x3c8) + 0x34);
  }
  return iVar1;
}

