
undefined4 FUN_020673ec(uint param_1)

{
  if ((param_1 & 1) != 0) {
    return DAT_020afbf4;
  }
  if ((param_1 & 2) != 0) {
    return DAT_020afbe8;
  }
  if ((param_1 & 4) != 0) {
    return DAT_020afbec;
  }
  if ((param_1 & 8) != 0) {
    return DAT_020afbf0;
  }
  if ((param_1 & 0x10) == 0) {
    return 0;
  }
  return DAT_020afbe4;
}

