
void FUN_0214dfb0(int param_1)

{
  int iVar1;
  
  DAT_020a0f10 = DAT_020a0f10 + 1;
  iVar1 = FUN_0207382c();
  if (iVar1 != 0) {
    if ((*(int *)(DAT_02172960 + 0x164) == 0) && (iVar1 = FUN_0214f950(), iVar1 == 0)) {
      *(undefined4 *)(DAT_02172960 + 0x164) = 4;
    }
    FUN_02028384(*(undefined4 *)(param_1 + 4),&LAB_0214dffc_1);
  }
  return;
}

