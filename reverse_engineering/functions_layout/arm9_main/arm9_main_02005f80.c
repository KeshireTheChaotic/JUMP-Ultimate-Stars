
ushort * FUN_02005f80(ushort *param_1,uint param_2,int param_3)

{
  while( true ) {
    if (param_3 == 0) {
      return (ushort *)0x0;
    }
    if (*param_1 == param_2) break;
    param_1 = param_1 + 1;
    param_3 = param_3 + -1;
  }
  return param_1;
}

