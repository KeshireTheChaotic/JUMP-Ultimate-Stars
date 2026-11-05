
undefined4 FUN_0205c3bc(uint param_1)

{
  undefined4 uVar1;
  
  if (param_1 < *(uint *)(*(int *)(DAT_020ae050 + 0x84) + 8)) {
    uVar1 = *(undefined4 *)(*(int *)(DAT_020ae050 + 0x84) + param_1 * 0x10 + 0x14);
  }
  else {
    uVar1 = 0;
  }
  return uVar1;
}

