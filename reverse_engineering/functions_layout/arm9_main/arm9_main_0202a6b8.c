
/* JUS-CLASS jus_Class_02096408::jus_Class_02096408 [class-default] stores vtable 02096408 into
   *this (constructor) */

undefined4 *
jus_Class_02096408::jus_Class_02096408
          (undefined4 *param_1,int *param_2,undefined4 param_3,undefined4 param_4)

{
  undefined4 uVar1;
  undefined4 local_18;
  undefined4 local_14;
  undefined4 uStack_10;
  
  uStack_10 = param_4;
  jus_Class_0209647c::jus_Class_0209647c();
  *param_1 = &vftable;
  uVar1 = (**(code **)(*param_2 + 0x60))();
  param_1[0xc] = uVar1;
  (**(code **)(*param_2 + 0x34))(&local_14);
  param_1[0xd] = local_14;
  (**(code **)(*param_2 + 0x38))(&local_18);
  param_1[0xe] = local_18;
  return param_1;
}

