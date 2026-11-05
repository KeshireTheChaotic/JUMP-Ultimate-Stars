
/* JUS-CLASS jus_Class_02093ee4::~jus_Class_02093ee4 [class-default] slot 0/1 of vtable 02093ee4;
   resets vtables (destructor) */

undefined4 * jus_Class_02093ee4::~jus_Class_02093ee4(undefined4 *param_1)

{
  int iVar1;
  
  *param_1 = &vftable;
  if ((int *)param_1[1] != (int *)0x0) {
    (**(code **)(*(int *)param_1[1] + 0xc))();
  }
  iVar1 = FUN_0201a9ec(param_1);
  if (iVar1 == 0) {
    FUN_0201a958(param_1,1);
  }
  return param_1;
}

