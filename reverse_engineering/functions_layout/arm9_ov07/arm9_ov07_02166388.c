
void FUN_02166388(int param_1)

{
  int iVar1;
  
  iVar1 = FUN_02069880(*(undefined4 *)(DAT_0214ccf8 + 0x14));
  if (iVar1 == 0) {
    thunk_FUN_020699d4(*(undefined4 *)(DAT_0214ccf8 + 0x14),0x414a554a);
    iVar1 = thunk_FUN_020697c0(*(undefined4 *)(DAT_0214ccf8 + 0x14));
    if (iVar1 != 0) {
      thunk_FUN_02069784(*(undefined4 *)(DAT_0214ccf8 + 0x14));
    }
  }
  iVar1 = FUN_02069864(*(undefined4 *)(DAT_0214ccf8 + 0x14));
  if (iVar1 == 0) {
    FUN_02028384(*(undefined4 *)(param_1 + 4),0x21663f1);
    return;
  }
  FUN_02028384(*(undefined4 *)(param_1 + 4),0x2166439);
  return;
}

