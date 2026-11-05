
bool FUN_02160f34(undefined4 param_1,int param_2)

{
  int iVar1;
  int iVar2;
  
  iVar2 = 0;
  for (iVar1 = 1; iVar1 < *(int *)(DAT_02172960 + 0x158); iVar1 = iVar1 + 1) {
    iVar2 = iVar2 + *(int *)(DAT_02172960 + iVar1 * 4 + 0x9c);
  }
  return (int)(uint)*(ushort *)(param_2 + 2) <= iVar2;
}

