
undefined4 FUN_0206a42c(ushort *param_1)

{
  int iVar1;
  
  iVar1 = FUN_02069e64(0x20,0x20,param_1);
  if (iVar1 == 0) {
    return 0;
  }
  DAT_020afc00 = (uint)*param_1 * 8 + -0x400;
  return 1;
}

