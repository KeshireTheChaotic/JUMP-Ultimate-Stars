
/* JUS-CLASS jus_Class_02095a08::jus_Class_02095a08 [class-default] stores vtable 02095a08 into
   *this (constructor) */

int * jus_Class_02095a08::jus_Class_02095a08(int *param_1,int param_2,int param_3)

{
  undefined1 auStack_18 [4];
  undefined4 local_14;
  
  local_14 = 0x80000;
  jus_Class_02094370::jus_Class_02094370(param_1,&local_14);
  *param_1 = (int)&vftable;
  *(undefined2 *)(param_1 + 4) = *(undefined2 *)(param_2 + 0x10);
  *(byte *)((int)param_1 + 0x11) = *(byte *)((int)param_1 + 0x11) & 0xfe;
  jus_Class_02094c34::jus_Class_02094c34(param_1 + 5);
  param_1[0xd] = *(int *)(param_2 + 0x34);
  param_1[0xe] = param_3;
  param_1[0xf] = 0;
  DAT_020a0fb4 = DAT_020a0fb4 + 1;
  FUN_02011990(auStack_18,param_2);
  (**(code **)(*param_1 + 0x10))(param_1,auStack_18);
  FUN_02019d4c(param_1 + 5,param_2 + 0x14);
  FUN_02014ae0(param_1);
  return param_1;
}

