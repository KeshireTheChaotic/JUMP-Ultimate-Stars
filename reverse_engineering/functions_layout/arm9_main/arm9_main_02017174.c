
/* JUS-CLASS jus_Class_02096f04::jus_Class_02096f04 [class-default] stores vtable 02096f04 into
   *this (constructor) */

undefined4 *
jus_Class_02096f04::jus_Class_02096f04
          (undefined4 *param_1,undefined4 param_2,undefined4 param_3,int *param_4)

{
  jus_Class_02096f88::jus_Class_02096f88();
  *param_1 = &vftable;
  param_1[8] = param_4;
  (**(code **)(*param_4 + 8))();
  return param_1;
}

