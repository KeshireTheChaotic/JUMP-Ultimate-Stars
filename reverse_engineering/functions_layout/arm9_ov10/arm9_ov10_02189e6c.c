
void FUN_02189e6c(int *param_1,undefined4 param_2)

{
  int iVar1;
  
  if (param_1[1] < param_1[2] + 2) {
    FUN_02002068(s__buffer_>len___2__<__buffer_>siz_021a6614,s_gt2Buffer_c_021a65c0,0,0x2e);
  }
  iVar1 = param_1[2];
  param_1[2] = iVar1 + 1;
  *(char *)(*param_1 + iVar1) = (char)((uint)param_2 >> 8);
  iVar1 = param_1[2];
  param_1[2] = iVar1 + 1;
  *(char *)(*param_1 + iVar1) = (char)param_2;
  return;
}

