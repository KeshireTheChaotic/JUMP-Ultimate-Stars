
/* JUS-CLASS jus_Class_02095c74::vfunc_35 [class-virtual] slot 35 of vtable 02095c74 (own slot, not
   inherited) */

void jus_Class_02095c74::vfunc_35
               (undefined4 param_1,undefined4 param_2,int *param_3,undefined4 param_4)

{
  int local_20;
  int local_1c;
  int local_18;
  int local_14;
  undefined4 uStack_10;
  
  local_20 = param_3[2];
  uStack_10 = param_4;
  FUN_02018ac8(&local_20,param_3 + 2);
  local_1c = param_3[1];
  FUN_02018ac8(&local_1c,param_3 + 1);
  local_18 = *param_3;
  FUN_02018ac8(&local_18,param_3);
  local_14 = local_18 + local_1c + local_20;
  FUN_02038984(param_1,&local_14);
  return;
}

