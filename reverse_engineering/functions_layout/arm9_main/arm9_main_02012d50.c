
/* JUS-CLASS jus_TagAGEC::vfunc_22 [class-virtual] slot 22 of vtable 02097418 (own slot, not
   inherited) */

void jus_TagAGEC::vfunc_22(int param_1)

{
  if (*(int *)(param_1 + 0x2c) < 0) {
    return;
  }
  if (*(int *)(param_1 + 0x2c) == 0) {
    FUN_02027560(*(undefined4 *)(param_1 + 0x1c));
  }
  *(int *)(param_1 + 0x2c) = *(int *)(param_1 + 0x2c) + -1;
  return;
}

