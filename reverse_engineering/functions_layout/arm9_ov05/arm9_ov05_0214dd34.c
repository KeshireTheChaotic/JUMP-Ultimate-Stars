
int FUN_0214dd34(undefined4 *param_1,undefined4 *param_2,int param_3)

{
  int in_r12;
  
  for (; param_3 != 0; param_3 = param_3 + -1) {
    in_r12 = in_r12 + 1;
    *param_1 = *param_2;
    param_1[1] = (uint)*(ushort *)*param_2;
    param_1 = param_1 + 2;
    param_2 = param_2 + 2;
  }
  return in_r12;
}

