
void FUN_0201a160(int *param_1,int *param_2,int param_3)

{
  int local_20;
  int local_1c;
  int local_18;
  int local_14;
  
  *param_1 = *param_2;
  param_1[2] = param_2[2];
  local_18 = param_2[2];
  FUN_02018ac8(&local_18,param_3 + 4);
  local_14 = *param_2;
  FUN_02018ac8(&local_14,param_3);
  param_1[4] = local_14 + local_18 + param_2[4];
  param_1[1] = param_2[1];
  param_1[3] = param_2[3];
  local_20 = param_2[3];
  FUN_02018ac8(&local_20,param_3 + 4);
  local_1c = param_2[1];
  FUN_02018ac8(&local_1c,param_3);
  param_1[5] = local_1c + local_20 + param_2[5];
  return;
}

