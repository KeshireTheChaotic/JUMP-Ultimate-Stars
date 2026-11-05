
/* JUS-CLASS jus_Class_02095c74::vfunc_41 [class-virtual] slot 41 of vtable 02095c74 (own slot, not
   inherited) */

void jus_Class_02095c74::vfunc_41(undefined4 param_1,undefined4 param_2,int *param_3,int *param_4)

{
  int local_28;
  int local_24;
  int local_20;
  int local_1c;
  int local_18;
  int local_14;
  int local_10;
  int *piStack_c;
  
  local_10 = *param_3 - *param_4;
  local_14 = param_3[1] - param_4[1];
  local_28 = param_3[2] - param_4[2];
  local_18 = local_28;
  piStack_c = param_4;
  FUN_02018ac8(&local_28,&local_18);
  local_24 = local_14;
  FUN_02018ac8(&local_24,&local_14);
  local_20 = local_10;
  FUN_02018ac8(&local_20,&local_10);
  local_1c = local_20 + local_24 + local_28;
  FUN_02038984(param_1,&local_1c);
  return;
}

