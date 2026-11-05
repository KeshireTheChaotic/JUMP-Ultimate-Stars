
/* JUS-CLASS jus_TagIPMV::vfunc_24 [class-virtual] slot 24 of vtable 0209ade8 (own slot, not
   inherited) */

undefined4 * jus_TagIPMV::vfunc_24(undefined4 param_1)

{
  undefined4 *puVar1;
  
  puVar1 = (undefined4 *)jus_AllocDebug(0x4c);
  if (puVar1 != (undefined4 *)0x0) {
    jus_TagIPCT::jus_TagIPCT(puVar1,param_1);
    *puVar1 = &vftable;
  }
  return puVar1;
}

