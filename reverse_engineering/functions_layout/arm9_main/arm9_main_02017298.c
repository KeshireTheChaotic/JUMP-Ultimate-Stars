
/* JUS-CLASS jus_Class_02096f04::~jus_Class_02096f04 [class-default] slot 0/1 of vtable 02096f04;
   resets vtables (destructor) */

undefined4 * jus_Class_02096f04::~jus_Class_02096f04(undefined4 *param_1)

{
  int iVar1;
  
  *param_1 = &vftable;
  (**(code **)(*(int *)param_1[8] + 0xc))();
  jus_Class_02096f88::jus_Class_02096f88(param_1);
  iVar1 = FUN_0201a9ec(param_1);
  if (iVar1 == 0) {
    FUN_0201a958(param_1,1);
  }
  return param_1;
}

