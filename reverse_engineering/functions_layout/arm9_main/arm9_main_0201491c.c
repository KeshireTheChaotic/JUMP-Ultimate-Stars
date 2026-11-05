
/* JUS-CLASS jus_Class_02095a08::~jus_Class_02095a08 [class-default] slot 0/1 of vtable 02095a08;
   resets vtables (destructor) */

int * jus_Class_02095a08::~jus_Class_02095a08(int *param_1)

{
  int iVar1;
  
  *param_1 = (int)&vftable;
  DAT_020a0fb4 = DAT_020a0fb4 + -1;
  (**(code **)(*param_1 + 0x18))(param_1,0);
  jus_Class_02094c34::~jus_Class_02094c34(param_1 + 5);
  iVar1 = FUN_0201a9ec(param_1);
  if (iVar1 == 0) {
    FUN_0201a958(param_1,1);
  }
  return param_1;
}

