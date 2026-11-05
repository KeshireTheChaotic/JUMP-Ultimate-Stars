
/* JUS-CLASS jus_TagDUMY_Derived_02094a7c::~jus_TagDUMY_Derived_02094a7c [class-derived] slot 0/1 of
   vtable 02094a7c; resets vtables (destructor) */

undefined4 * jus_TagDUMY_Derived_02094a7c::~jus_TagDUMY_Derived_02094a7c(undefined4 *param_1)

{
  *param_1 = &vftable;
  if ((int *)param_1[9] != (int *)0x0) {
    (**(code **)(*(int *)param_1[9] + 0xc))();
  }
  jus_TagDUMY::jus_TagDUMY(param_1);
  return param_1;
}

