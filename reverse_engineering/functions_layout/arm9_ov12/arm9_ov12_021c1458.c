
int FUN_021c1458(int param_1,int param_2)

{
  int iVar1;
  uint uVar2;
  int iVar3;
  
  if (DAT_021d5284 == 0) {
    return 0;
  }
  uVar2 = (uint)*(byte *)(param_1 + 2);
  if (DAT_021d528c < (int)uVar2) {
    return 0;
  }
  iVar3 = (param_2 + -1) * 0x20;
  FUN_02051890(param_1 + 3,DAT_021d5284 + iVar3 + DAT_021d5288 * uVar2);
  iVar1 = (param_2 + -1) * 4;
  *(uint *)(DAT_021d5284 + 0x1e0 + iVar1) = *(uint *)(DAT_021d5284 + 0x1e0 + iVar1) | 1 << uVar2;
  iVar1 = FUN_021c1408(param_2);
  if (iVar1 == 0) {
    return 0;
  }
  return DAT_021d5284 + iVar3;
}

