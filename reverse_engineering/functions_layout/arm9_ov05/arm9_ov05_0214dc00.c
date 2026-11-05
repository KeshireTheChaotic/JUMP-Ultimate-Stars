
int FUN_0214dc00(undefined4 *param_1,undefined4 *param_2,int param_3,int param_4)

{
  int in_lr;
  
  while( true ) {
    param_1[1] = param_4;
    param_1 = param_1 + 2;
    if (param_3 == 0) break;
    in_lr = in_lr + 1;
    *param_1 = *param_2;
    param_3 = param_3 + -1;
    param_4 = (uint)*(ushort *)*param_2 + (char)((ushort *)*param_2)[4] * 0x400;
    param_2 = param_2 + 2;
  }
  return in_lr;
}

