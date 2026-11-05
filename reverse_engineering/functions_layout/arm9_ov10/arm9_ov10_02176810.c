
undefined4 FUN_02176810(undefined4 param_1,undefined4 param_2)

{
  if (DAT_021a7410 == 0) {
    return 0;
  }
  *(undefined4 *)(DAT_021a7410 + 0x90) = param_1;
  *(undefined4 *)(DAT_021a7410 + 0x94) = param_2;
  return 1;
}

