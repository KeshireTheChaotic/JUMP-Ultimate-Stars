
void FUN_021a1b3c(int *param_1,short *param_2,undefined4 param_3,undefined4 param_4)

{
  int iVar1;
  int iVar2;
  
  iVar2 = (int)*param_2;
  if (iVar2 < *param_1) {
    iVar2 = iVar2 + 0x8000;
  }
  iVar2 = iVar2 - *param_1;
  if (iVar2 < 0) {
    return;
  }
  if (iVar2 < 0x40) {
    iVar1 = (int)((uint)*(byte *)(param_1 + 2) + iVar2) >> 0x1f;
    FUN_02051890(param_2,param_1 + 3 +
                         ((((uint)*(byte *)(param_1 + 2) + iVar2) * 0x4000000 + iVar1 >> 0x1a |
                          iVar1 << 6) - iVar1) * 2,8,param_1 + 3,param_4);
    return;
  }
  return;
}

