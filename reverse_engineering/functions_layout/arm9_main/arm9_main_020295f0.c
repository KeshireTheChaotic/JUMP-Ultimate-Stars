
/* JUS-CLASS jus_Class_02093f04::~jus_Class_02093f04 [class-default] slot 0/1 of vtable 02093f04;
   resets vtables (destructor) */

int * jus_Class_02093f04::~jus_Class_02093f04(int *param_1)

{
  int *piVar1;
  int iVar2;
  
  *param_1 = (int)&vftable;
  iVar2 = param_1[1];
  piVar1 = param_1;
  if (iVar2 != 0) {
    *(undefined4 *)(iVar2 + 0x18) = 0;
    piVar1 = (int *)param_1[1];
  }
  if (iVar2 != 0 && piVar1 != (int *)0x0) {
    (**(code **)(*piVar1 + 4))();
  }
  return param_1;
}

