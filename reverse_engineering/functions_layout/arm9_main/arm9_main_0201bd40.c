
/* JUS-CLASS jus_Class_0209cef8::~jus_Class_0209cef8 [class-default] slot 0/1 of vtable 0209cef8;
   resets vtables (destructor) */

int * jus_Class_0209cef8::~jus_Class_0209cef8(int *param_1)

{
  int iVar1;
  
  *param_1 = (int)&vftable;
  (**(code **)(*param_1 + 0x70))();
  if ((int *)param_1[0x11] != (int *)0x0) {
    (**(code **)(*(int *)param_1[0x11] + 0xc))();
  }
  jus_Class_02097558::jus_Class_02097558(param_1);
  iVar1 = FUN_0201a9ec(param_1);
  if (iVar1 == 0) {
    FUN_0201a958(param_1,1);
  }
  return param_1;
}

