
/* JUS-CLASS jus_TagDUMY_Derived_02094a34::~jus_TagDUMY_Derived_02094a34 [class-derived] slot 0/1 of
   vtable 02094a34; resets vtables (destructor) */

int * jus_TagDUMY_Derived_02094a34::~jus_TagDUMY_Derived_02094a34(int *param_1)

{
  int iVar1;
  
  *param_1 = (int)&vftable;
  (**(code **)(*param_1 + 0x38))();
  jus_TagDUMY::jus_TagDUMY(param_1);
  iVar1 = FUN_0201a9ec(param_1);
  if (iVar1 == 0) {
    FUN_0201a958(param_1,1);
  }
  return param_1;
}

