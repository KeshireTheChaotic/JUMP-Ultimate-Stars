
/* JUS-CLASS jus_TagDLST::vfunc_24 [class-virtual] slot 24 of vtable 0209ac78 (own slot, not
   inherited) */

undefined4 * jus_TagDLST::vfunc_24(int param_1)

{
  undefined4 *puVar1;
  
  puVar1 = (undefined4 *)FUN_0201a228(0x48);
  if (puVar1 != (undefined4 *)0x0) {
    jus_TagDLSE::jus_TagDLSE(puVar1,param_1);
    *puVar1 = &vftable;
    puVar1[0x11] = *(undefined4 *)(param_1 + 0x44);
  }
  return puVar1;
}

