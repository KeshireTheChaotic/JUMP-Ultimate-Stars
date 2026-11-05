
/* JUS-CLASS jus_Class_02094d7c::jus_Class_02094d7c [class-default] stores vtable 02094d7c into
   *this (constructor) */

undefined4 * jus_Class_02094d7c::jus_Class_02094d7c(undefined4 *param_1,int *param_2)

{
  jus_Class_020941f0::jus_Class_020941f0();
  *param_1 = &vftable;
  param_1[7] = 0;
  param_1[8] = 0;
  param_1[9] = 0;
  param_1[10] = param_2;
  if (param_2 != (int *)0x0) {
    (**(code **)(*param_2 + 8))();
  }
  DAT_020a0e44 = DAT_020a0e44 + 1;
  return param_1;
}

