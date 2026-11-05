
/* JUS-CLASS ALWidgetBase_021d2c98::ALWidgetBase_021d2c98 [class-source-file] stores vtable 021d2c98
   into *this (constructor) */

undefined4 * ALWidgetBase_021d2c98::ALWidgetBase_021d2c98(undefined4 *param_1)

{
  undefined4 uVar1;
  
  ALDrawLinkImp_021d2e58_Derived_021d2a88::ALDrawLinkImp_021d2e58_Derived_021d2a88();
  *param_1 = &vftable;
  FUN_021b8c34(param_1,0x10,0);
  FUN_0202b3c8(6);
  uVar1 = FUN_021acab4();
  param_1[2] = uVar1;
  FUN_021b87e0(param_1,param_1[2]);
  (**(code **)(**(int **)(param_1[2] + 4) + 0xd8))(*(int **)(param_1[2] + 4),1);
  return param_1;
}

