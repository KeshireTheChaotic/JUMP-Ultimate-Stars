
/* JUS-CLASS jus_TagDUMY_Derived_02094a34::vfunc_07 [class-virtual] slot 7 of vtable 02094a34 (own
   slot, not inherited) */

undefined4 jus_TagDUMY_Derived_02094a34::vfunc_07(int param_1)

{
  if (*(int *)(param_1 + 0xc) == -1) {
    *(int *)(param_1 + 0xc) =
         *(int *)(*(int *)(param_1 + 0x24) + 0x28) - *(int *)(*(int *)(param_1 + 0x24) + 0x24);
  }
  return *(undefined4 *)(param_1 + 0xc);
}

