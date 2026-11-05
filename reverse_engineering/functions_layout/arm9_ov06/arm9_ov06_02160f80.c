
undefined4 FUN_02160f80(undefined4 param_1,int param_2)

{
  int iVar1;
  undefined4 uVar2;
  int iVar3;
  
  uVar2 = 1;
  iVar3 = 1;
  while (iVar3 < *(int *)(DAT_02172960 + 0x158)) {
    iVar1 = iVar3 * 4;
    iVar3 = iVar3 + 1;
    if (*(int *)(DAT_02172960 + iVar1 + 0x9c) < (int)(uint)*(ushort *)(param_2 + 2)) {
      uVar2 = 0;
    }
  }
  return uVar2;
}

