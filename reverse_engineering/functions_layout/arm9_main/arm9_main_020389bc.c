
/* JUS-CLASS jus_Class_02095c74::vfunc_36 [class-virtual] slot 36 of vtable 02095c74 (own slot, not
   inherited) */

void jus_Class_02095c74::vfunc_36(int *param_1,undefined4 param_2,int *param_3)

{
  int local_18;
  int local_14;
  int local_10;
  
  local_18 = param_3[2];
  FUN_02018ac8(&local_18,param_3 + 2);
  local_14 = param_3[1];
  FUN_02018ac8(&local_14,param_3 + 1);
  local_10 = *param_3;
  FUN_02018ac8(&local_10,param_3);
  *param_1 = local_10 + local_14;
  *param_1 = local_10 + local_14 + local_18;
  return;
}

