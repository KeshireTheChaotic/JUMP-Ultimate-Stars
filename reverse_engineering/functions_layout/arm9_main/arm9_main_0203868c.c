
/* JUS-CLASS jus_Class_02095c74::vfunc_32 [class-virtual] slot 32 of vtable 02095c74 (own slot, not
   inherited) */

void jus_Class_02095c74::vfunc_32(undefined4 param_1,int *param_2,int *param_3,int param_4)

{
  int local_28;
  int local_24;
  int local_20;
  int local_1c;
  int local_18;
  int local_14;
  
  local_18 = param_3[2];
  FUN_02018ac8(&local_18,param_4 + 4);
  local_14 = param_3[1];
  FUN_02018ac8(&local_14,param_4 + 8);
  *param_2 = local_14 - local_18;
  local_20 = *param_3;
  FUN_02018ac8(&local_20,param_4 + 8);
  local_1c = param_3[2];
  FUN_02018ac8(&local_1c,param_4);
  param_2[1] = local_1c - local_20;
  local_28 = param_3[1];
  FUN_02018ac8(&local_28,param_4);
  local_24 = *param_3;
  FUN_02018ac8(&local_24,param_4 + 4);
  param_2[2] = local_24 - local_28;
  return;
}

