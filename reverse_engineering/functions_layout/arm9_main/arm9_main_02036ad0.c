
/* JUS-CLASS jus_Class_0209c6bc::jus_Class_0209c6bc [class-default] stores vtable 0209c6bc into
   *this (constructor) */

undefined4 * jus_Class_0209c6bc::jus_Class_0209c6bc(undefined4 *param_1)

{
  int *piVar1;
  
  ALWidgetBase_0209c1e0::ALWidgetBase_0209c1e0();
  *param_1 = &vftable;
  param_1[0x1b] = 0;
  param_1[0x1c] = 0;
  param_1[0x1d] = 0;
  param_1[0x1e] = 0;
  (**(code **)(*(int *)param_1[5] + 0xc))();
  piVar1 = DAT_020a0d80;
  param_1[5] = DAT_020a0d80;
  (**(code **)(*piVar1 + 8))();
  return param_1;
}

