
/* JUS-CLASS jus_Class_0209b410::~jus_Class_0209b410 [class-default] slot 0/1 of vtable 0209b410;
   resets vtables (destructor) */

undefined4 * jus_Class_0209b410::~jus_Class_0209b410(undefined4 *param_1)

{
  *param_1 = &vftable;
  if ((int *)param_1[0x17] != (int *)0x0) {
    (**(code **)(*(int *)param_1[0x17] + 0xc))();
  }
  jus_Class_02095a08::jus_Class_02095a08(param_1);
  return param_1;
}

