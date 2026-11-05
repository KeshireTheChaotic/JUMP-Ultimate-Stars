
/* JUS-CLASS jus_Class_02095940::vfunc_21 [class-virtual] slot 21 of vtable 02095940 (own slot, not
   inherited) */

undefined4 * jus_Class_02095940::vfunc_21(int param_1,undefined4 param_2)

{
  undefined4 *puVar1;
  
  puVar1 = (undefined4 *)jus_AllocDebug(0x44);
  if (puVar1 != (undefined4 *)0x0) {
    jus_Class_02095a08::jus_Class_02095a08(puVar1,param_1,param_2);
    *puVar1 = &vftable;
    puVar1[0x10] = *(undefined4 *)(param_1 + 0x40);
  }
  return puVar1;
}

