
/* JUS-CLASS jus_Class_02095b3c::jus_Class_02095b3c [class-default] stores vtable 02095b3c into
   *this (constructor) */

undefined4 * jus_Class_02095b3c::jus_Class_02095b3c(undefined4 *param_1)

{
  *param_1 = &vftable;
  if ((int *)param_1[7] != (int *)0x0) {
    (**(code **)(*(int *)param_1[7] + 0xc))();
    FUN_0203254c(&DAT_020a1de0,param_1);
  }
  DAT_020a0d08 = DAT_020a0d08 + -1;
  jus_Class_020941f0::jus_Class_020941f0(param_1);
  return param_1;
}

