
/* JUS-CLASS jus_Class_0209c808::vfunc_06 [class-virtual] slot 6 of vtable 0209c808 (own slot, not
   inherited) */

undefined4 * jus_Class_0209c808::vfunc_06(undefined4 param_1)

{
  undefined4 *puVar1;
  
  puVar1 = (undefined4 *)jus_AllocDebug(0x7c);
  if (puVar1 != (undefined4 *)0x0) {
    jus_Class_0209c6bc::jus_Class_0209c6bc(puVar1,param_1);
    *puVar1 = &vftable;
  }
  return puVar1;
}

