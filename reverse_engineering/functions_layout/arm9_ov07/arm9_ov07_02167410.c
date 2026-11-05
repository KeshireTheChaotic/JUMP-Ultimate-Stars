
void FUN_02167410(int param_1,int param_2)

{
  int iVar1;
  int iVar2;
  int iVar3;
  
  if (param_1 != 0) {
    *(undefined1 *)(DAT_0214ccf8 + 0x57) = 0xff;
    return;
  }
  if (param_2 == 1) {
    FUN_02069550(*(undefined4 *)(DAT_0214ccf8 + 0x14));
    for (iVar2 = 0; iVar2 < *(int *)(DAT_0214ccf8 + 0x44); iVar2 = iVar2 + 1) {
      iVar3 = iVar2 * 0xc;
      iVar1 = thunk_FUN_020024cc(*(int *)(DAT_0214ccf8 + 0x1c) + iVar3,
                                 *(int *)(DAT_0214ccf8 + 0x18) + iVar3,0xc);
      if (iVar1 == 0) {
        func_0x021a2928(*(undefined4 *)(DAT_0214ccf8 + 0x14),*(int *)(DAT_0214ccf8 + 0x18) + iVar3);
      }
    }
    func_0x0219a278();
  }
  *(undefined1 *)(DAT_0214ccf8 + 0x57) = 1;
  return;
}

