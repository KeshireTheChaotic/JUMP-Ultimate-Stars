
/* JUS-CLASS jus_Class_02094484::vfunc_05 [class-virtual] slot 5 of vtable 02094484 (own slot, not
   inherited) */

void jus_Class_02094484::vfunc_05(int param_1)

{
  undefined4 *puVar1;
  
  puVar1 = (undefined4 *)jus_AllocDebug(8);
  if (puVar1 != (undefined4 *)0x0) {
    *puVar1 = &DAT_02093cc4;
    puVar1[1] = param_1;
  }
  *(undefined4 **)(param_1 + 0x25c) = puVar1;
  return;
}

