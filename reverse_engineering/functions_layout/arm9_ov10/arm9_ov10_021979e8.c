
undefined4 FUN_021979e8(int param_1,int param_2,int param_3)

{
  ushort *puVar1;
  ushort *puVar2;
  
  param_3 = param_3 + -1;
  if (-1 < param_3) {
    puVar2 = (ushort *)(param_2 + param_3 * 2);
    puVar1 = (ushort *)(param_1 + param_3 * 2);
    do {
      if (*puVar2 < *puVar1) {
        return 1;
      }
      if (*puVar1 < *puVar2) {
        return 0xffffffff;
      }
      puVar2 = puVar2 + -1;
      puVar1 = puVar1 + -1;
      param_3 = param_3 + -1;
    } while (-1 < param_3);
  }
  return 0;
}

