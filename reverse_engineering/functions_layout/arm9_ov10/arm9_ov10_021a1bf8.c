
int * FUN_021a1bf8(int *param_1,uint param_2)

{
  int iVar1;
  int *piVar2;
  int iVar3;
  
  param_2 = param_2 & 0x7fff;
  if ((int)param_2 < *param_1) {
    param_2 = param_2 + 0x8000;
  }
  iVar3 = param_2 - *param_1;
  if ((iVar3 < 0) || (0x3f < iVar3)) {
    return (int *)0x0;
  }
  iVar1 = (int)((uint)*(byte *)(param_1 + 2) + iVar3) >> 0x1f;
  iVar1 = (((uint)*(byte *)(param_1 + 2) + iVar3) * 0x4000000 + iVar1 >> 0x1a | iVar1 << 6) - iVar1;
  piVar2 = param_1 + iVar1 * 2 + 3;
  if ((short)param_1[iVar1 * 2 + 3] < 0) {
    piVar2 = (int *)0x0;
  }
  return piVar2;
}

