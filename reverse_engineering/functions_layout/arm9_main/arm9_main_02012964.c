
void FUN_02012964(int *param_1,int *param_2,undefined4 param_3,undefined4 param_4)

{
  int local_18;
  int local_14;
  undefined4 uStack_10;
  
  uStack_10 = param_4;
  FUN_02011990(&local_14,param_1);
  if (*param_2 != local_14) {
    (**(code **)(*param_1 + 0x5c))();
    local_18 = *param_2;
    (**(code **)(*param_1 + 0x10))(param_1,&local_18);
    FUN_02027edc(param_1);
  }
  return;
}

