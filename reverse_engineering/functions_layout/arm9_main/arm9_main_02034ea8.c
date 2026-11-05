
/* JUS-CLASS jus_Class_02094b9c::jus_Class_02094b9c [class-default] stores vtable 02094b9c into
   *this (constructor) */

int * jus_Class_02094b9c::jus_Class_02094b9c(int *param_1,int param_2)

{
  int iVar1;
  
  *param_1 = (int)&vftable;
  iVar1 = *(int *)(param_2 + 4);
  *param_1 = (int)&jus_TagNRML::vftable;
  param_1[1] = iVar1;
  if (*(char *)(param_2 + 0xc) == '\0') {
    (**(code **)(*param_1 + 0x40))(param_1,param_1[1],*(undefined4 *)(param_2 + 8));
  }
  else {
    (**(code **)(*param_1 + 0x44))(param_1,param_1[1],*(undefined4 *)(param_2 + 8));
  }
  return param_1;
}

