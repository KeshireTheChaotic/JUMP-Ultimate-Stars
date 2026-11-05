
undefined4 FUN_0200aa6c(int param_1,uint param_2)

{
  if ((param_2 & 0x7ff00000) == 0) {
    if (((param_2 & 0xfffff) == 0) && (param_1 == 0)) {
      return 3;
    }
    return 5;
  }
  if ((param_2 & 0x7ff00000) != 0x7ff00000) {
    return 4;
  }
  if (((param_2 & 0xfffff) == 0) && (param_1 == 0)) {
    return 2;
  }
  return 1;
}

