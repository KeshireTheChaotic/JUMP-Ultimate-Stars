
bool FUN_02160e1c(undefined4 param_1,int param_2)

{
  int iVar1;
  int iVar2;
  int iVar3;
  
  iVar2 = 1;
  iVar3 = -9999;
  while (iVar2 < *(int *)(DAT_02172960 + 0x158)) {
    iVar1 = *(int *)(DAT_02172960 + iVar2 * 4 + 0x1c);
    iVar2 = iVar2 + 1;
    if (iVar3 <= iVar1) {
      iVar3 = iVar1;
    }
  }
  return (int)(uint)*(ushort *)(param_2 + 2) <= *(int *)(DAT_02172960 + 0x1c) - iVar3;
}

