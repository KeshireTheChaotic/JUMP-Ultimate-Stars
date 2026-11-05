
/* JUS-CLASS jus_Class_020945fc::~jus_Class_020945fc [class-default] slot 0/1 of vtable 020945fc;
   resets vtables (destructor) */

int * jus_Class_020945fc::~jus_Class_020945fc(int *param_1)

{
  int iVar1;
  int iVar2;
  
  *param_1 = (int)&vftable;
  (**(code **)(*param_1 + 0x1c))();
  iVar2 = param_1[2];
  iVar1 = FUN_0201a9ec(iVar2);
  if (iVar1 == 0) {
    FUN_0201a958(iVar2,1);
  }
  if ((int *)param_1[7] != (int *)0x0) {
    (**(code **)(*(int *)param_1[7] + 4))();
  }
  iVar1 = FUN_0201a9ec(param_1);
  if (iVar1 == 0) {
    FUN_0201a958(param_1,1);
  }
  return param_1;
}

