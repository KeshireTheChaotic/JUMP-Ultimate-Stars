
bool FUN_0207ddd4(undefined4 param_1,int param_2,int param_3)

{
  if (param_2 < 0x4000) {
    return false;
  }
  if (0x3c000 < param_2) {
    return false;
  }
  if (param_3 < 0) {
    return false;
  }
  return param_3 < 0x20001;
}

