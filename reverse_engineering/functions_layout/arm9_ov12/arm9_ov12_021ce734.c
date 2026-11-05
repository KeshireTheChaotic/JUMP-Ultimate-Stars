
void FUN_021ce734(int param_1,short *param_2,uint param_3)

{
  uint uVar1;
  
  uVar1 = 0;
  if (param_3 != 0) {
    do {
      *param_2 = (short)*(char *)(param_1 + uVar1) << 8;
      param_2 = param_2 + 1;
      uVar1 = uVar1 + 1;
    } while (uVar1 < param_3);
  }
  return;
}

