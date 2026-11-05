
bool FUN_021a1b98(int *param_1,uint param_2)

{
  int iVar1;
  int iVar2;
  
  param_2 = param_2 & 0x7fff;
  if ((int)param_2 < *param_1) {
    param_2 = param_2 + 0x8000;
  }
  iVar2 = param_2 - *param_1;
  if ((iVar2 < 0) || (0x3f < iVar2)) {
    return false;
  }
  iVar1 = (int)((uint)*(byte *)(param_1 + 2) + iVar2) >> 0x1f;
  return -1 < (short)param_1[((((uint)*(byte *)(param_1 + 2) + iVar2) * 0x4000000 + iVar1 >> 0x1a |
                              iVar1 << 6) - iVar1) * 2 + 3];
}

