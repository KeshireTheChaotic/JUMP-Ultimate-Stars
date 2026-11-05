
void FUN_0219ae88(undefined4 param_1,undefined4 param_2,undefined4 param_3,undefined4 param_4)

{
  int iVar1;
  
  if (DAT_0214ccf8 == 0) {
    return;
  }
  iVar1 = FUN_021a1f34(DAT_0214ccf8 + 0x88,2,param_3,param_4,param_4);
  if ((iVar1 == 0) && (iVar1 = FUN_021a1f34(DAT_0214ccf8 + 0x88,3), iVar1 == 0)) {
    return;
  }
  if (*(int *)(DAT_0214ccf8 + 0x48) != 2 && *(int *)(DAT_0214ccf8 + 0x48) != 4) {
    return;
  }
  *(undefined1 *)(DAT_0214ccf8 + 0x57) = 0xff;
  iVar1 = FUN_0217e6b0();
  if (iVar1 == 0) {
    FUN_02176798();
    return;
  }
  return;
}

