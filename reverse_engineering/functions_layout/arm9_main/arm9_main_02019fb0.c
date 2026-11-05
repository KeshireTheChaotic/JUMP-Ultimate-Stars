
void FUN_02019fb0(int *param_1,int *param_2,int param_3)

{
  int local_40;
  int local_3c;
  int local_38;
  int local_34;
  int local_30;
  int local_2c;
  int local_28;
  int local_24;
  int local_20;
  int local_1c;
  int local_18;
  int local_14;
  
  local_18 = param_2[2];
  FUN_02018ac8(&local_18,param_3 + 4);
  local_14 = *param_2;
  FUN_02018ac8(&local_14,param_3);
  *param_1 = local_14 + local_18;
  local_20 = param_2[2];
  FUN_02018ac8(&local_20,param_3 + 0xc);
  local_1c = *param_2;
  FUN_02018ac8(&local_1c,param_3 + 8);
  param_1[2] = local_1c + local_20;
  local_28 = param_2[2];
  FUN_02018ac8(&local_28,param_3 + 0x14);
  local_24 = *param_2;
  FUN_02018ac8(&local_24,param_3 + 0x10);
  param_1[4] = local_24 + local_28 + param_2[4];
  local_30 = param_2[3];
  FUN_02018ac8(&local_30,param_3 + 4);
  local_2c = param_2[1];
  FUN_02018ac8(&local_2c,param_3);
  param_1[1] = local_2c + local_30;
  local_38 = param_2[3];
  FUN_02018ac8(&local_38,param_3 + 0xc);
  local_34 = param_2[1];
  FUN_02018ac8(&local_34,param_3 + 8);
  param_1[3] = local_34 + local_38;
  local_40 = param_2[3];
  FUN_02018ac8(&local_40,param_3 + 0x14);
  local_3c = param_2[1];
  FUN_02018ac8(&local_3c,param_3 + 0x10);
  param_1[5] = local_3c + local_40 + param_2[5];
  return;
}

