
/* JUS-CLASS jus_TagCNTR::vfunc_03 [class-virtual] slot 3 of vtable 02095560 (own slot, not
   inherited) */

undefined * jus_TagCNTR::vfunc_03(int param_1,int param_2)

{
  undefined *puVar1;
  
  if (*(int *)(param_1 + 4) == 0) {
    puVar1 = &DAT_02093bd8;
  }
  else {
    puVar1 = (undefined *)(*(int *)(param_1 + 0x10) + param_2 * 4);
  }
  return puVar1;
}

