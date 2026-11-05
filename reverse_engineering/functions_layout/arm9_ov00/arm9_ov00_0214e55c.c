
undefined4 FUN_0214e55c(int param_1)

{
  if (*(byte *)(param_1 + 0x59) <= *(byte *)(param_1 + 0x5b)) {
    return 0;
  }
  if ((*(byte *)(param_1 + 0x56) & 4) != 0) {
    FUN_020428dc(DAT_020a0f64,FUN_0214e61c,param_1);
    *(byte *)(param_1 + 0x56) = *(byte *)(param_1 + 0x56) & 0xfb;
  }
  return 1;
}

