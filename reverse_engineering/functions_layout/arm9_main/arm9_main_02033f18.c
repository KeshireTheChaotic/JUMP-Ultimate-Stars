
/* JUS-CLASS jus_TagDUMY_Derived_02094a7c::vfunc_05 [class-virtual] slot 5 of vtable 02094a7c (own
   slot, not inherited) */

int jus_TagDUMY_Derived_02094a7c::vfunc_05(int *param_1,undefined4 param_2,int param_3)

{
  int iVar1;
  
  iVar1 = (**(code **)(*param_1 + 0x2c))(param_1,0);
  FUN_02051890(iVar1 + param_1[2],param_2,param_3);
  param_1[2] = param_1[2] + param_3;
  return param_3;
}

