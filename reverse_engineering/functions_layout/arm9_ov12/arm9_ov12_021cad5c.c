
/* JUS-CLASS ALFont_021d4ed0::vfunc_05 [class-virtual] slot 5 of vtable 021d4ed0 (own slot, not
   inherited) */

undefined4 ALFont_021d4ed0::vfunc_05(int param_1,uint param_2)

{
  if (*(int *)(param_1 + 0x10) == 0) {
    return 0;
  }
  if (*(int *)(param_1 + 0x10) == *(int *)(param_1 + 0xc)) {
    return 0;
  }
  if (param_2 < 0x100) {
    return 1;
  }
  return 0;
}

