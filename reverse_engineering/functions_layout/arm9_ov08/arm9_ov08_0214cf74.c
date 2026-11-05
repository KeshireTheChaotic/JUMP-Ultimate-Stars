
/* WARNING: Globals starting with '_' overlap smaller symbols at the same address */

undefined4 FUN_0214cf74(undefined4 param_1,undefined4 param_2,undefined4 param_3)

{
  int iVar1;
  
  DAT_0216af40 = FUN_0214ce2c();
  DAT_0216af44 = FUN_0214ce2c(param_2);
  DAT_0216af48 = FUN_0214ce2c(param_3);
  iVar1 = func_0x02193680(&DAT_0216af30);
  if (iVar1 < 0) {
    return 0xffffffff;
  }
  while (_DAT_021a8538 == 0) {
    FUN_02052ea0(100);
  }
  return 0;
}

