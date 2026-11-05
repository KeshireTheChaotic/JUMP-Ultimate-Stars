
undefined4 FUN_0215bbd0(int param_1)

{
  int iVar1;
  
  iVar1 = FUN_0215bc10(*(undefined4 *)(param_1 + 0x1a0));
  if (iVar1 == 0) {
    FUN_0207cec8(*(undefined4 *)(*(int *)(param_1 + 0x1a8) + 0x10),0x10000000);
    *(byte *)(param_1 + 0x11d) = *(byte *)(param_1 + 0x11d) & 0xfb;
    return 1;
  }
  return 0;
}

