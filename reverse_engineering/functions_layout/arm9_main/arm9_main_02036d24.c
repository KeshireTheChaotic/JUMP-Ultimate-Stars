
/* JUS-CLASS jus_Class_0209c6bc::jus_Class_0209c6bc [class-default] stores vtable 0209c6bc into
   *this (constructor) */

undefined4 * jus_Class_0209c6bc::jus_Class_0209c6bc(undefined4 *param_1)

{
  int iVar1;
  int iVar2;
  
  *param_1 = &vftable;
  iVar2 = param_1[0x1c];
  if ((iVar2 != 0) && (iVar1 = FUN_0201a9ec(iVar2), iVar1 == 0)) {
    FUN_0201a958(iVar2,1);
  }
  ALWidgetBase_0209c1e0::ALWidgetBase_0209c1e0(param_1);
  return param_1;
}

