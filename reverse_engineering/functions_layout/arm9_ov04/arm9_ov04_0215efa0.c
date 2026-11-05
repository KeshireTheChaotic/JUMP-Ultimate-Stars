
undefined4 FUN_0215efa0(int param_1,int param_2,int param_3,int param_4)

{
  int in_r12;
  
  while( true ) {
    if (param_2 == param_3) {
      return 1;
    }
    param_4 = param_4 + 1;
    if (in_r12 <= param_4) break;
    param_3 = (int)*(char *)(param_1 + param_4 * 4);
  }
  return 0;
}

