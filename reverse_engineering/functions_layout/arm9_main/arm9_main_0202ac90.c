
/* JUS-CLASS jus_Class_020966d0::vfunc_21 [class-virtual] slot 21 of vtable 020966d0 (own slot, not
   inherited) */

void jus_Class_020966d0::vfunc_21(int *param_1,int param_2)

{
  FUN_0202a490();
  if (param_2 == 0) {
    return;
  }
  if ((*(byte *)(param_2 + 0x24) & 0x7f) >> 6 != 0) {
    FUN_0202a55c(param_1);
  }
  (**(code **)(*param_1 + 0x14))();
  return;
}

