
bool FUN_0205c018(int param_1,int param_2,int param_3)

{
  sbyte *psVar1;
  uint uVar2;
  int iVar3;
  
  uVar2 = 0;
  iVar3 = 0;
  if (0 < param_2) {
    do {
      *(undefined1 *)(param_1 + iVar3 + 0x4c) = *(undefined1 *)(param_3 + iVar3);
      psVar1 = (sbyte *)(param_3 + iVar3);
      iVar3 = iVar3 + 1;
      uVar2 = uVar2 | 1 << *psVar1;
    } while (iVar3 < param_2);
  }
  iVar3 = FUN_0205b0e0(uVar2);
  if (iVar3 != 0) {
    *(int *)(param_1 + 0x48) = param_2;
    *(uint *)(param_1 + 0x44) = uVar2;
  }
  return iVar3 != 0;
}

