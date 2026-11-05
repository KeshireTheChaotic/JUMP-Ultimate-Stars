
/* JUS-CLASS jus_Class_020941a8::~jus_Class_020941a8 [class-default] slot 0/1 of vtable 020941a8;
   resets vtables (destructor) */

undefined4 * jus_Class_020941a8::~jus_Class_020941a8(undefined4 *param_1)

{
  int iVar1;
  
  *param_1 = &vftable;
  (**(code **)(*(int *)param_1[2] + 0xc))();
  iVar1 = FUN_0201a9ec(param_1);
  if (iVar1 == 0) {
    FUN_0201a958(param_1,1);
  }
  return param_1;
}

