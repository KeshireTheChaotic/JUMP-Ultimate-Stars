
undefined1 FUN_0207de4c(undefined4 param_1,int param_2,int param_3)

{
  if (param_2 < 0x4000) {
    return 2;
  }
  if (0x3c000 < param_2) {
    return 2;
  }
  if (param_3 < 0) {
    return 3;
  }
  return 0x20000 < param_3;
}

