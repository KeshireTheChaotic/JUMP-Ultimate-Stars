
/* JUS-CLASS jus_Class_02097558::~jus_Class_02097558 [class-default] slot 0/1 of vtable 02097558;
   resets vtables (destructor) */

int * jus_Class_02097558::~jus_Class_02097558(int *param_1)

{
  int *piVar1;
  
  *param_1 = (int)&vftable;
  DAT_020a0d48 = DAT_020a0d48 + -1;
  (**(code **)(*param_1 + 0x70))();
  piVar1 = (int *)param_1[7];
  if (piVar1 != (int *)0x0) {
    FUN_02037f58(piVar1 + 7,param_1 + 8);
    (**(code **)(*piVar1 + 0x84))(piVar1,param_1);
    (**(code **)(*param_1 + 0x50))(param_1,0);
  }
  FUN_0201199c(param_1);
  ALCollision_02094f78::ALCollision_02094f78(param_1);
  return param_1;
}

