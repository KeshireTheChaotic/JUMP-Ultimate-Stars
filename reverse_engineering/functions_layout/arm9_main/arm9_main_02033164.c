
/* JUS-CLASS jus_Class_020945d4::jus_Class_020945d4 [class-default] stores vtable 020945d4 into
   *this (constructor) */

undefined4 * jus_Class_020945d4::jus_Class_020945d4(undefined4 *param_1)

{
  *param_1 = &vftable;
  if (param_1[5] != 0) {
    FUN_0203254c(&DAT_020a1d44,param_1);
  }
  DAT_020a1058 = DAT_020a1058 + -1;
  if ((int *)param_1[8] != (int *)0x0) {
    (**(code **)(*(int *)param_1[8] + 0xc))();
  }
  if ((int *)param_1[7] != (int *)0x0) {
    (**(code **)(*(int *)param_1[7] + 4))();
  }
  jus_Class_020941f0::jus_Class_020941f0(param_1);
  return param_1;
}

