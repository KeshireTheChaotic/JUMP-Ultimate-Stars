
undefined4 FUN_02159434(int param_1)

{
  int iVar1;
  
  iVar1 = FUN_02087724();
  if (iVar1 == 2) {
    return 1;
  }
  if (*(char *)(param_1 + 0x1eb) == '\0') {
    iVar1 = FUN_02158eb0(*(int *)(DAT_02172960 + *(int *)(DAT_02172960 + 0x15c) * 4 + 0xdc) + 0x120,
                         0x23);
    if (iVar1 != 0) {
      FUN_021594bc(param_1);
      return 1;
    }
    FUN_0214e2d8(1 << (uint)*(byte *)(param_1 + 0x1e0));
  }
  return 1;
}

