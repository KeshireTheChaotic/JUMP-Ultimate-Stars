
/* JUS-CLASS jus_Class_02095ea0::~jus_Class_02095ea0 [class-default] slot 0/1 of vtable 02095ea0;
   resets vtables (destructor) */

undefined4 * jus_Class_02095ea0::~jus_Class_02095ea0(undefined4 *param_1)

{
  int iVar1;
  
  *param_1 = &vftable;
  if ((int *)param_1[0xb] != (int *)0x0) {
    (**(code **)(*(int *)param_1[0xb] + 0xc))();
  }
  jus_Class_02095b3c::jus_Class_02095b3c(param_1);
  iVar1 = FUN_0201a9ec(param_1);
  if (iVar1 == 0) {
    FUN_0201a958(param_1,1);
  }
  return param_1;
}

