
/* JUS-CLASS ALWidgetBase_0209c1e0_Derived_0209bc04::vfunc_06 [class-virtual] slot 6 of vtable
   0209bc04 (own slot, not inherited) */

undefined4 * ALWidgetBase_0209c1e0_Derived_0209bc04::vfunc_06(undefined4 param_1)

{
  undefined4 *puVar1;
  
  puVar1 = (undefined4 *)FUN_0201a228(0x6c);
  if (puVar1 != (undefined4 *)0x0) {
    ALWidgetBase_0209c1e0::ALWidgetBase_0209c1e0(puVar1,param_1);
    *puVar1 = &vftable;
  }
  return puVar1;
}

