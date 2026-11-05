
undefined4 FUN_02176654(uint param_1)

{
  undefined4 uVar1;
  
  if (DAT_021a7410 == 0) {
    return 0;
  }
  if ((*(uint *)(DAT_021a7410 + 0x63c) & 1 << (param_1 & 0xff)) == 0) {
    return 0;
  }
  uVar1 = FUN_0217647c();
  return uVar1;
}

