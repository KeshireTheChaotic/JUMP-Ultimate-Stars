
int FUN_0214dbac(undefined4 *param_1,undefined4 *param_2,int param_3,ushort *param_4)

{
  uint in_r12;
  int in_lr;
  
  while( true ) {
    param_1[1] = (uint)*param_4 + in_r12 * 0x400;
    param_1 = param_1 + 2;
    if (param_3 == 0) break;
    in_lr = in_lr + 1;
    *param_1 = *param_2;
    param_4 = (ushort *)*param_2;
    param_3 = param_3 + -1;
    in_r12 = (uint)(byte)param_4[3];
    param_2 = param_2 + 2;
  }
  return in_lr;
}

