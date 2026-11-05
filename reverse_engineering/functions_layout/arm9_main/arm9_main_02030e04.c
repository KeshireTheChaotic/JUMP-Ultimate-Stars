
/* JUS-CLASS jus_Class_02093e24::~jus_Class_02093e24 [class-default] slot 0/1 of vtable 02093e24;
   resets vtables (destructor) */

undefined4 * jus_Class_02093e24::~jus_Class_02093e24(undefined4 *param_1)

{
  *param_1 = &vftable;
  if ((int *)param_1[1] != (int *)0x0) {
    (**(code **)(*(int *)param_1[1] + 4))();
  }
  return param_1;
}

