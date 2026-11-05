
undefined4 FUN_02150f68(int param_1)

{
  if (param_1 < 0xf) {
    if (param_1 < 0xb) {
      if ((param_1 < 7) && (1 < param_1)) {
        if (param_1 == 2) {
          return 1;
        }
        if (param_1 == 6) {
          return 1;
        }
      }
    }
    else if (((param_1 == 0xb) || (param_1 == 0xd)) || (param_1 == 0xe)) {
      return 1;
    }
  }
  else if (param_1 < 0x1b) {
    if (param_1 == 0x1a) {
      return 1;
    }
  }
  else if (param_1 == 0x1d) {
    return 1;
  }
  return 0;
}

