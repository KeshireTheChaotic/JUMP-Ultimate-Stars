
/* JUS-CLASS jus_Class_0209b18c::vfunc_02 [class-virtual] slot 2 of vtable 0209b18c (own slot, not
   inherited) */

undefined4 * jus_Class_0209b18c::vfunc_02(undefined4 *param_1)

{
  int iVar1;
  
  *param_1 = &vftable;
  if ((int *)param_1[9] != (int *)0x0) {
    (**(code **)(*(int *)param_1[9] + 4))();
  }
  iVar1 = FUN_0201a9ec(param_1);
  if (iVar1 == 0) {
    FUN_0201a958(param_1,1);
  }
  return param_1;
}

