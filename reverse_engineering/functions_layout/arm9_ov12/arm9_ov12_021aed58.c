
int FUN_021aed58(int param_1,int param_2)

{
  int iVar1;
  int iVar2;
  
  iVar1 = -1;
  if (param_2 == -1) {
    return -1;
  }
  if (-1 < (int)((uint)*(byte *)(*(int *)(*(int *)(*(int *)(param_1 + 0x154) + param_2 * 4) + 100) +
                                0x10) << 0x18)) {
    return -1;
  }
  for (iVar2 = 0; iVar2 <= param_2; iVar2 = iVar2 + 1) {
    if ((int)((uint)*(byte *)(*(int *)(*(int *)(*(int *)(param_1 + 0x154) + iVar2 * 4) + 100) + 0x10
                             ) << 0x18) < 0) {
      iVar1 = iVar1 + 1;
    }
  }
  return iVar1;
}

