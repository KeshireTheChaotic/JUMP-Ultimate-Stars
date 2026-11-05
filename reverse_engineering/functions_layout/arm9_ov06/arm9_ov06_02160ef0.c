
undefined4 FUN_02160ef0(void)

{
  int iVar1;
  undefined4 uVar2;
  int iVar3;
  
  uVar2 = 1;
  iVar3 = 1;
  while (iVar3 < *(int *)(DAT_02172960 + 0x158)) {
    iVar1 = iVar3 * 4;
    iVar3 = iVar3 + 1;
    if (*(int *)(DAT_02172960 + iVar1 + 0x6c) != 0) {
      uVar2 = 0;
    }
  }
  return uVar2;
}

