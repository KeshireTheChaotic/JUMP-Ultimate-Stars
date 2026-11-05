
/* JUS-CLASS jus_Class_02096f04::~jus_Class_02096f04 [class-default] slot 0/1 of vtable 02096f04;
   resets vtables (destructor) */

undefined4 * jus_Class_02096f04::~jus_Class_02096f04(undefined4 *param_1)

{
  *param_1 = &vftable;
  (**(code **)(*(int *)param_1[8] + 0xc))();
  jus_Class_02096f88::jus_Class_02096f88(param_1);
  return param_1;
}

