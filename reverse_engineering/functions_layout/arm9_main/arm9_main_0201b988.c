
/* JUS-CLASS jus_Class_0209cef8::jus_Class_0209cef8 [class-default] stores vtable 0209cef8 into
   *this (constructor) */

int * jus_Class_0209cef8::jus_Class_0209cef8(int *param_1,int *param_2)

{
  byte bVar1;
  undefined4 local_10;
  
  local_10 = 0xc0000;
  jus_Class_0209b010::jus_Class_0209b010(param_1,DAT_020a0c8c,&local_10);
  *param_1 = (int)&vftable;
  *(undefined2 *)((int)param_1 + 0x2a) = 0;
  *(undefined2 *)(param_1 + 0xb) = 0;
  *(undefined2 *)((int)param_1 + 0x2e) = 0;
  *(undefined2 *)(param_1 + 0xc) = 0;
  bVar1 = *(byte *)((int)param_1 + 0x32);
  *(byte *)((int)param_1 + 0x32) = bVar1 & 0xfe;
  *(byte *)((int)param_1 + 0x32) = bVar1 & 0xfa | 2;
  *(byte *)((int)param_1 + 0x32) = bVar1 & 0xe2 | 2;
  param_1[0xd] = 0x1000;
  param_1[0xe] = 0;
  param_1[0xf] = 0;
  param_1[0x11] = 0;
  if (param_2 != (int *)0x0) {
    FUN_02037ed8(param_2 + 7,param_1 + 8);
    (**(code **)(*param_1 + 100))(param_1,param_2);
    (**(code **)(*param_2 + 0x80))(param_2,param_1);
  }
  (**(code **)(*param_1 + 0x70))();
  return param_1;
}

