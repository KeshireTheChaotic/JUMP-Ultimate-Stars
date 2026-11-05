
/* JUS-CLASS jus_Class_02095ea0::jus_Class_02095ea0 [class-default] stores vtable 02095ea0 into
   *this (constructor) */

undefined4 * jus_Class_02095ea0::jus_Class_02095ea0(undefined4 *param_1)

{
  *param_1 = &vftable;
  if ((int *)param_1[0xb] != (int *)0x0) {
    (**(code **)(*(int *)param_1[0xb] + 0xc))();
  }
  jus_Class_02095b3c::jus_Class_02095b3c(param_1);
  return param_1;
}

