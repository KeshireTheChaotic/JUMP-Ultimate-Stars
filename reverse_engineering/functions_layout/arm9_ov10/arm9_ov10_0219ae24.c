
void FUN_0219ae24(undefined4 param_1,undefined4 param_2,undefined4 param_3,undefined4 param_4)

{
  int iVar1;
  
  if (DAT_0214ccf8 == 0) {
    return;
  }
  iVar1 = FUN_021a1f34(DAT_0214ccf8 + 0x88,1,param_3,param_4,param_4);
  if (iVar1 == 0) {
    return;
  }
  iVar1 = *(int *)(DAT_0214ccf8 + 0x48);
  if (iVar1 != 3 && iVar1 != 2) {
    return;
  }
  if (iVar1 == 2) {
    FUN_0217e6b0();
    return;
  }
  *(undefined1 *)(DAT_0214ccf8 + 0x57) = 0xff;
  FUN_02176798();
  return;
}

