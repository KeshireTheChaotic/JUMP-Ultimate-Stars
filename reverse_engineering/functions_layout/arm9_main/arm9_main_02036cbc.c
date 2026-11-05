
/* JUS-CLASS jus_Class_0209c6bc::~jus_Class_0209c6bc [class-default] slot 0/1 of vtable 0209c6bc;
   resets vtables (destructor) */

undefined4 * jus_Class_0209c6bc::~jus_Class_0209c6bc(undefined4 *param_1)

{
  int iVar1;
  int iVar2;
  
  *param_1 = &vftable;
  iVar2 = param_1[0x1c];
  if ((iVar2 != 0) && (iVar1 = FUN_0201a9ec(iVar2), iVar1 == 0)) {
    FUN_0201a958(iVar2,1);
  }
  ALWidgetBase_0209c1e0::ALWidgetBase_0209c1e0(param_1);
  iVar2 = FUN_0201a9ec(param_1);
  if (iVar2 == 0) {
    FUN_0201a958(param_1,1);
  }
  return param_1;
}

