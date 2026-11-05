
/* JUS-CLASS jus_Class_02095c74::vfunc_42 [class-virtual] slot 42 of vtable 02095c74 (own slot, not
   inherited) */

void jus_Class_02095c74::vfunc_42(int *param_1,undefined4 param_2,int *param_3,int *param_4)

{
  int local_20;
  int local_1c;
  int local_18;
  int local_14;
  int local_10;
  int local_c;
  
  local_c = *param_3 - *param_4;
  local_10 = param_3[1] - param_4[1];
  local_20 = param_3[2] - param_4[2];
  local_14 = local_20;
  FUN_02018ac8(&local_20,&local_14);
  local_1c = local_10;
  FUN_02018ac8(&local_1c,&local_10);
  local_18 = local_c;
  FUN_02018ac8(&local_18,&local_c);
  *param_1 = local_18 + local_1c;
  *param_1 = local_18 + local_1c + local_20;
  return;
}

