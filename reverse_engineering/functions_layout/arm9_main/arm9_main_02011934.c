
void FUN_02011934(int param_1,int *param_2,undefined4 param_3,int param_4)

{
  int local_10;
  
  local_10 = param_4;
  FUN_02011990(&local_10,param_1);
  if (*param_2 == local_10) {
    return;
  }
  if (*(char *)(param_1 + 0x29) == '\0') {
    *(short *)(param_1 + 6) = (short)(*param_2 >> 4);
    return;
  }
  FUN_0201199c(param_1);
  *(short *)(param_1 + 6) = (short)(*param_2 >> 4);
  FUN_020119ec(param_1);
  return;
}

