
void FUN_0219afb0(undefined4 param_1,undefined4 param_2,undefined4 param_3,undefined4 param_4)

{
  int iVar1;
  
  if (DAT_0214ccf8 == 0) {
    return;
  }
  iVar1 = FUN_021a1f34(DAT_0214ccf8 + 0x88,1,param_3,param_4,param_4);
  if (((iVar1 == 0) && (iVar1 = FUN_021a1f34(DAT_0214ccf8 + 0x88,2), iVar1 == 0)) &&
     (iVar1 = FUN_021a1f34(DAT_0214ccf8 + 0x88,4), iVar1 == 0)) {
    return;
  }
  if (*(int *)(DAT_0214ccf8 + 0x48) != 3 && *(int *)(DAT_0214ccf8 + 0x48) != 4) {
    return;
  }
  iVar1 = FUN_021a1f34(DAT_0214ccf8 + 0x88,2);
  if (iVar1 == 0) {
    iVar1 = FUN_021a1f34(DAT_0214ccf8 + 0x88,4);
    if (iVar1 == 0) goto LAB_0219b06c;
    FUN_021766fc();
    iVar1 = FUN_0219b644();
    if (iVar1 == 0) goto LAB_0219b06c;
  }
  FUN_0217e6b0();
LAB_0219b06c:
  *(undefined1 *)(DAT_0214ccf8 + 0x57) = 0xff;
  FUN_02176798();
  return;
}

