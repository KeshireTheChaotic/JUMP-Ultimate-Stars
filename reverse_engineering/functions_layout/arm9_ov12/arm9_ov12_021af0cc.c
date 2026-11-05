
/* JUS-CLASS ALWidgetImp_021d0f9c::ALWidgetImp_021d0f9c [class-source-file] stores vtable 021d0f9c
   into *this (constructor) */

undefined4 * ALWidgetImp_021d0f9c::ALWidgetImp_021d0f9c(undefined4 *param_1)

{
  int *piVar1;
  
  ALWidgetBaseImp::ALWidgetBaseImp();
  *param_1 = &vftable;
  piVar1 = (int *)param_1[0x27];
  if (piVar1 != (int *)0x0) {
    (**(code **)(*piVar1 + 0x184))(piVar1,param_1);
  }
  return param_1;
}

