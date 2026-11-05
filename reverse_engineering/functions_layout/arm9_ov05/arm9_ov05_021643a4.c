
int FUN_021643a4(int param_1,int param_2,int param_3,uint param_4)

{
  if ((*(uint *)(param_2 + param_3 * 4) & param_1 << (param_4 & 0x1f)) == 0) {
    param_1 = 0;
  }
  return param_1;
}

