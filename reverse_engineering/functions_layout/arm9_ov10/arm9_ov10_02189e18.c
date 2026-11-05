
void FUN_02189e18(int *param_1,int param_2,int param_3)

{
  if ((param_2 != 0) && (param_3 != 0)) {
    if (param_3 == -1) {
      param_3 = FUN_02004b04(param_2);
    }
    if (param_1[1] < param_1[2] + param_3) {
      FUN_02002068(s__buffer_>len___len__<__buffer_>s_021a65f0,s_gt2Buffer_c_021a65c0,0,0x40);
    }
    FUN_02002434(*param_1 + param_1[2],param_2,param_3);
    param_1[2] = param_1[2] + param_3;
  }
  return;
}

