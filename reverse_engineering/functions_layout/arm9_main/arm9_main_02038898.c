
/* JUS-CLASS jus_Class_02095c74::vfunc_34 [class-virtual] slot 34 of vtable 02095c74 (own slot, not
   inherited) */

void jus_Class_02095c74::vfunc_34(int *param_1,undefined4 param_2,int *param_3,int param_4)

{
  int local_20;
  int local_1c;
  int local_18;
  int iStack_14;
  
  local_20 = param_3[2];
  iStack_14 = param_4;
  FUN_02018ac8(&local_20,param_4 + 8);
  local_1c = param_3[1];
  FUN_02018ac8(&local_1c,param_4 + 4);
  local_18 = *param_3;
  FUN_02018ac8(&local_18,param_4);
  *param_1 = local_18 + local_1c;
  *param_1 = local_18 + local_1c + local_20;
  return;
}

