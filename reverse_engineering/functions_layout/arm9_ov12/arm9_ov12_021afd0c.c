
/* JUS-CLASS jus_Class_021d0674::~jus_Class_021d0674 [class-default] slot 0/1 of vtable 021d0674;
   resets vtables (destructor) */

undefined4 * jus_Class_021d0674::~jus_Class_021d0674(undefined4 *param_1)

{
  *param_1 = &vftable;
  if ((int *)param_1[2] != (int *)0x0) {
    (**(code **)(*(int *)param_1[2] + 4))();
  }
  FUN_0201c89c(param_1);
  return param_1;
}

