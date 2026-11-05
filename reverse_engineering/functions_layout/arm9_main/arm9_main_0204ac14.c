
/* JUS-CLASS jus_TagNDGR_0209bd30::vfunc_06 [class-virtual] slot 6 of vtable 0209bd30 (own slot, not
   inherited) */

undefined4 * jus_TagNDGR_0209bd30::vfunc_06(undefined4 param_1)

{
  undefined4 *puVar1;
  
  puVar1 = (undefined4 *)FUN_0201a228(0x78);
  if (puVar1 != (undefined4 *)0x0) {
    jus_TagNDGR_0209c0b4::jus_TagNDGR_0209c0b4(puVar1,param_1);
    *puVar1 = &vftable;
  }
  return puVar1;
}

