
/* JUS-CLASS jus_Class_02094220::~jus_Class_02094220 [class-default] slot 0/1 of vtable 02094220;
   resets vtables (destructor) */

undefined4 * jus_Class_02094220::~jus_Class_02094220(undefined4 *param_1)

{
  *param_1 = &vftable;
  if ((int *)param_1[2] != (int *)0x0) {
    (**(code **)(*(int *)param_1[2] + 4))();
  }
  return param_1;
}

