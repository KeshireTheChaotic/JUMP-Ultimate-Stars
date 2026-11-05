
undefined4 FUN_021515a0(undefined4 param_1,undefined4 param_2,undefined4 param_3,undefined4 param_4)

{
  FUN_020783cc(*(undefined4 *)(*(int *)(DAT_02172960 + 0xdc) + 0x1b4),0x80,param_3,param_4,param_4);
  if ((*(uint *)(*(int *)(*(int *)(*(int *)(DAT_02172960 + 0xe0) + 0x1a8) + 0x10) + 0x40) & 0x2000)
      == 0) {
    return 0;
  }
  return 1;
}

