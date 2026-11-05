
/* JUS-CLASS jus_Class_02096658::jus_Class_02096658 [class-default] stores vtable 02096658 into
   *this (constructor) */

undefined4 * jus_Class_02096658::jus_Class_02096658(undefined4 *param_1)

{
  *param_1 = &vftable;
  FUN_0201cdb4(DAT_020a0cec,param_1);
  if ((int *)param_1[0x22] != (int *)0x0) {
    (**(code **)(*(int *)param_1[0x22] + 4))();
  }
  jus_Class_02093eb4::~jus_Class_02093eb4(param_1 + 0x23);
  return param_1;
}

