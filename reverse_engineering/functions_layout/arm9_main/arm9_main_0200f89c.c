
/* JUS-CLASS jus_Class_02095ea0::jus_Class_02095ea0 [class-default] stores vtable 02095ea0 into
   *this (constructor) */

int * jus_Class_02095ea0::jus_Class_02095ea0
                (int *param_1,undefined4 param_2,undefined1 param_3,int param_4)

{
  jus_Class_02095b3c::jus_Class_02095b3c();
  *param_1 = (int)&vftable;
  param_1[0xb] = 0;
  *(undefined1 *)(param_1 + 0xc) = param_3;
  if (param_4 != 0) {
    (**(code **)(*param_1 + 0x60))();
  }
  return param_1;
}

