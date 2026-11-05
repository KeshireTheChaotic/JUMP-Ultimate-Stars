
undefined4 FUN_021597f8(int param_1,undefined4 param_2)

{
  int iVar1;
  
  iVar1 = FUN_02087724();
  if (iVar1 == 2) {
    return 1;
  }
  iVar1 = FUN_0215986c(param_1,param_2,0x20);
  if (iVar1 != 0) {
    return 0;
  }
  if (*(char *)(param_1 + 0x1eb) != '\0') {
    FUN_0214e2f4(1 << (uint)*(byte *)(param_1 + 0x1e0));
    FUN_0214e35c(0xfffffff0);
  }
  return 1;
}

