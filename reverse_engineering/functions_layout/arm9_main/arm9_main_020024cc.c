
undefined4 FUN_020024cc(byte *param_1,byte *param_2,int param_3)

{
  while( true ) {
    if (param_3 == 0) {
      return 0;
    }
    if (*param_1 != *param_2) break;
    param_3 = param_3 + -1;
    param_2 = param_2 + 1;
    param_1 = param_1 + 1;
  }
  if (*param_1 < *param_2) {
    return 0xffffffff;
  }
  return 1;
}

