
undefined4 FUN_02176754(undefined4 param_1)

{
  int iVar1;
  
  if (((DAT_021a7410 == 0) || (iVar1 = FUN_0217575c(), iVar1 != 0)) ||
     ((*(int *)(DAT_021a7410 + 0x24) != 5 && (*(int *)(DAT_021a7410 + 0x24) != 6)))) {
    return 0xffffffff;
  }
  iVar1 = FUN_02176578(param_1);
  if (iVar1 == 0) {
    return 0xfffffffe;
  }
  FUN_0218a8a8();
  return 0;
}

