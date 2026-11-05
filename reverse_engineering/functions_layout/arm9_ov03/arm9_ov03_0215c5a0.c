
void FUN_0215c5a0(int param_1)

{
  int iVar1;
  int iVar2;
  
  iVar2 = *(int *)(*(int *)(param_1 + 4) + 0x10);
  DAT_020a0f10 = DAT_020a0f10 + 1;
  iVar1 = FUN_0207382c();
  if (iVar1 == 0) {
    return;
  }
  iVar1 = *(int *)(iVar2 + 0xbc);
  if (iVar1 != 2) {
    if (iVar1 != 3) {
      if (iVar1 != 4) goto LAB_0215c618;
      FUN_02028384(*(undefined4 *)(*(int *)(iVar2 + 0x84) + 4),&LAB_0215cde8);
    }
    FUN_02028384(*(undefined4 *)(*(int *)(iVar2 + 0x80) + 4),&LAB_0215cdd8);
  }
  FUN_02028384(*(undefined4 *)(*(int *)(iVar2 + 0x60) + 4),&LAB_0215cdc8);
LAB_0215c618:
  FUN_02028384(*(undefined4 *)(*(int *)(iVar2 + 0x5c) + 4),FUN_0215cd8c);
  FUN_02028384(*(undefined4 *)(param_1 + 4),&LAB_0215c650);
  return;
}

