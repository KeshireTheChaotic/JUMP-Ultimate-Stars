
void FUN_02189eac(int *param_1,undefined1 param_2)

{
  int iVar1;
  
  if (param_1[1] <= param_1[2]) {
    FUN_02002068(s_buffer_>len_<_buffer_>size_021a6638,s_gt2Buffer_c_021a65c0,0,0x23);
  }
  iVar1 = param_1[2];
  param_1[2] = iVar1 + 1;
  *(undefined1 *)(*param_1 + iVar1) = param_2;
  return;
}

