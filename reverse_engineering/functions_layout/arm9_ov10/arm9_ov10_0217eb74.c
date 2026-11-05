
undefined4 FUN_0217eb74(int param_1,undefined4 param_2)

{
  undefined8 uVar1;
  
  if (DAT_021a7d10 == 0) {
    return 0;
  }
  *(undefined4 *)(DAT_021a7d10 + param_1 * 0x30 + 0x2c) = param_2;
  uVar1 = FUN_02054b44();
  *(undefined8 *)(DAT_021a7d10 + param_1 * 0x30 + 0x24) = uVar1;
  return 1;
}

