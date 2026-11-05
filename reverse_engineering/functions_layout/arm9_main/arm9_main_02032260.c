
void FUN_02032260(int param_1,int *param_2,undefined4 param_3,int param_4)

{
  int local_10;
  
  local_10 = param_4;
  FUN_02011990(&local_10,param_1);
  if (local_10 == *param_2) {
    return;
  }
  FUN_0201cdb4(DAT_020a0cec,param_1);
  *(short *)(param_1 + 6) = (short)(*param_2 >> 4);
  FUN_0201cca0(DAT_020a0cec,param_1);
  return;
}

