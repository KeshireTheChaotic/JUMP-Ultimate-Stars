
/* JUS-CLASS jus_Class_0209cef8::jus_Class_0209cef8 [class-default] stores vtable 0209cef8 into
   *this (constructor) */

int * jus_Class_0209cef8::jus_Class_0209cef8(int *param_1,int *param_2,int *param_3)

{
  byte bVar1;
  byte bVar2;
  byte bVar3;
  int iVar4;
  
  jus_Class_0209b010::jus_Class_0209b010();
  *param_1 = (int)&vftable;
  *(undefined2 *)((int)param_1 + 0x2a) = *(undefined2 *)((int)param_2 + 0x2a);
  *(short *)(param_1 + 0xb) = (short)param_2[0xb];
  *(undefined2 *)((int)param_1 + 0x2e) = *(undefined2 *)((int)param_2 + 0x2e);
  *(short *)(param_1 + 0xc) = (short)param_2[0xc];
  bVar3 = *(byte *)((int)param_1 + 0x32);
  *(byte *)((int)param_1 + 0x32) = bVar3 & 0xfe;
  bVar1 = *(byte *)((int)param_2 + 0x32) & 2;
  *(byte *)((int)param_1 + 0x32) = bVar3 & 0xfc | bVar1;
  bVar2 = *(byte *)((int)param_2 + 0x32) & 4;
  *(byte *)((int)param_1 + 0x32) = bVar3 & 0xf8 | bVar1 | bVar2 | 8;
  *(byte *)((int)param_1 + 0x32) =
       bVar3 & 0xe8 | bVar1 | bVar2 | 8 | *(byte *)((int)param_2 + 0x32) & 0x10;
  param_1[0xd] = param_2[0xd];
  param_1[0xe] = param_2[0xe];
  param_1[0xf] = param_2[0xf];
  param_1[0x11] = param_2[0x11];
  if (param_3 != (int *)0x0) {
    FUN_02037ed8(param_3 + 7,param_1 + 8);
    (**(code **)(*param_1 + 100))(param_1,param_3);
    (**(code **)(*param_3 + 0x80))(param_3,param_1);
  }
  iVar4 = (**(code **)(*param_2 + 0x68))();
  if (iVar4 != 0) {
    (**(code **)(*param_1 + 0x70))();
  }
  return param_1;
}

