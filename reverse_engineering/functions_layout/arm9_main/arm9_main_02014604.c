
/* JUS-CLASS jus_Class_02095a08::jus_Class_02095a08 [class-default] stores vtable 02095a08 into
   *this (constructor) */

int * jus_Class_02095a08::jus_Class_02095a08(int *param_1,int param_2,int param_3)

{
  int local_18 [2];
  
  local_18[1] = 0x80000;
  jus_Class_02094370::jus_Class_02094370(param_1,local_18 + 1);
  *param_1 = (int)&vftable;
  *(ushort *)(param_1 + 4) = (ushort)param_3 | (ushort)(param_3 << 7) | 0x7e;
  jus_Class_02094c34::jus_Class_02094c34(param_1 + 5);
  param_1[0xd] = DAT_020a0dd0;
  param_1[0xe] = param_2;
  param_1[0xf] = 0;
  DAT_020a0fb4 = DAT_020a0fb4 + 1;
  local_18[0] = (uint)DAT_02093bc6 << 0xc;
  (**(code **)(*param_1 + 0x10))(param_1,local_18);
  if (param_3 != 0) {
    FUN_02014ae0(param_1);
  }
  return param_1;
}

