
/* JUS-CLASS jus_Class_021d1b18::~jus_Class_021d1b18 [class-default] slot 0/1 of vtable 021d1b18;
   resets vtables (destructor) */

undefined4 * jus_Class_021d1b18::~jus_Class_021d1b18(undefined4 *param_1)

{
  *param_1 = &vftable;
  if ((int *)param_1[8] != (int *)0x0) {
    (**(code **)(*(int *)param_1[8] + 4))();
  }
  PropBindInstance_02095200::PropBindInstance_02095200(param_1);
  return param_1;
}

