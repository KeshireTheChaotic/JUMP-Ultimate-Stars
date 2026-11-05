
/* JUS-CLASS jus_Class_02095a08::jus_Class_02095a08 [class-default] stores vtable 02095a08 into
   *this (constructor) */

int * jus_Class_02095a08::jus_Class_02095a08(int *param_1)

{
  int local_10 [2];
  
  local_10[1] = 0x80000;
  jus_Class_02094370::jus_Class_02094370(param_1,local_10 + 1);
  *param_1 = (int)&vftable;
  *(undefined2 *)(param_1 + 4) = 0x7e;
  jus_Class_02094c34::jus_Class_02094c34(param_1 + 5);
  param_1[0xd] = DAT_020a0dd0;
  param_1[0xe] = DAT_020a0ee0;
  param_1[0xf] = 0;
  DAT_020a0fb4 = DAT_020a0fb4 + 1;
  local_10[0] = (uint)DAT_02093bc6 << 0xc;
  (**(code **)(*param_1 + 0x10))(param_1,local_10);
  return param_1;
}

