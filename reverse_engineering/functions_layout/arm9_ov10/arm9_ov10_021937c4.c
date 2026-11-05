
undefined4 FUN_021937c4(int param_1,int param_2,uint param_3)

{
  if (param_1 == 0) {
    return 0xffffffff;
  }
  if (param_2 == 3) {
    if (*(char *)(param_1 + 0x72) == '\x01') {
      return 0;
    }
    return 4;
  }
  if (param_2 == 4) {
    if ((param_3 & 4) == 0) {
      *(undefined1 *)(param_1 + 0x72) = 1;
    }
    else {
      *(undefined1 *)(param_1 + 0x72) = 0;
    }
  }
  return 0;
}

