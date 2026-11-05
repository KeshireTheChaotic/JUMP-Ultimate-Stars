
int FUN_0215716c(int param_1)

{
  int iVar1;
  
  iVar1 = *(int *)(param_1 + 0x304);
  if (iVar1 == 0) {
    iVar1 = FUN_02071f54();
    return iVar1;
  }
  if (iVar1 == 1) {
    return *(int *)(param_1 + 0x2c4) + *(int *)(param_1 + 700) + *(int *)(param_1 + 0x2c0);
  }
  if (iVar1 == 2) {
    iVar1 = FUN_020720d8();
    return iVar1;
  }
  return 0;
}

