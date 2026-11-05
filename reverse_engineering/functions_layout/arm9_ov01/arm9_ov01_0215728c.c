
undefined4 FUN_0215728c(int param_1,int param_2)

{
  int iVar1;
  
  iVar1 = *(int *)(param_1 + 0x304);
  if (iVar1 == 0) {
    return 0;
  }
  if (iVar1 == 1) {
    return *(undefined4 *)(*(int *)(param_1 + 0x2b8) + param_2 * 4);
  }
  if (iVar1 == 2) {
    return 2;
  }
  return 0;
}

