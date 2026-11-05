
undefined4 FUN_02178214(undefined4 param_1,undefined4 param_2)

{
  if (DAT_021a75a4 == 0) {
    return 0;
  }
  *(undefined4 *)(DAT_021a75a4 + 0x44) = param_1;
  *(undefined4 *)(DAT_021a75a4 + 0x48) = param_2;
  return 1;
}

