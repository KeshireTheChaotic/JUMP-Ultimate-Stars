
int FUN_0214dd18(undefined4 *param_1,undefined4 *param_2,int param_3,undefined4 param_4)

{
  int in_r12;
  
  while( true ) {
    in_r12 = in_r12 + 1;
    *param_1 = param_4;
    param_3 = param_3 + -1;
    param_1[1] = (uint)*(ushort *)*param_2;
    param_1 = param_1 + 2;
    if (param_3 == 0) break;
    param_4 = param_2[2];
    param_2 = param_2 + 2;
  }
  return in_r12;
}

