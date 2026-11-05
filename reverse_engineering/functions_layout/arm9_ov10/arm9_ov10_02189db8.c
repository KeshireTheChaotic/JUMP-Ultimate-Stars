
void FUN_02189db8(int *param_1,int param_2,int param_3)

{
  if (param_2 == -1) {
    param_2 = param_1[2] - param_3;
  }
  if (param_1[2] < param_2) {
    FUN_02002068(s_start_<__buffer_>len_021a65a8,s_gt2Buffer_c_021a65c0,0,0x4f);
  }
  if (param_1[2] - param_2 < param_3) {
    FUN_02002068(s_shortenBy_<__(buffer_>len___star_021a65cc,s_gt2Buffer_c_021a65c0,0,0x50);
  }
  FUN_02002450(*param_1 + param_2,*param_1 + param_2 + param_3,(param_1[2] - param_2) - param_3);
  param_1[2] = param_1[2] - param_3;
  return;
}

