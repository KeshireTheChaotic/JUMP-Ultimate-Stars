
/* JUS-CLASS jus_Class_02095c74::vfunc_31 [class-virtual] slot 31 of vtable 02095c74 (own slot, not
   inherited) */

void jus_Class_02095c74::vfunc_31
               (undefined4 param_1,undefined4 *param_2,undefined4 *param_3,int param_4)

{
  undefined4 local_20;
  undefined4 local_1c;
  undefined4 local_18;
  int iStack_14;
  
  local_18 = *param_3;
  iStack_14 = param_4;
  FUN_02018ac8(&local_18,param_4);
  *param_2 = local_18;
  local_1c = param_3[1];
  FUN_02018ac8(&local_1c,param_4 + 4);
  param_2[1] = local_1c;
  local_20 = param_3[2];
  FUN_02018ac8(&local_20,param_4 + 8);
  param_2[2] = local_20;
  return;
}

