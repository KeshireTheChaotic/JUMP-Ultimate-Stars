
/* JUS-CLASS jus_Class_020966d0::vfunc_11 [class-virtual] slot 11 of vtable 020966d0 (own slot, not
   inherited) */

void jus_Class_020966d0::vfunc_11(int *param_1,int *param_2)

{
  param_1[0xe] = *param_2;
  if (*(byte *)(param_1 + 9) != (*(byte *)(param_1 + 9) | 4)) {
    (**(code **)(*param_1 + 0x18))();
  }
  *(byte *)(param_1 + 9) = *(byte *)(param_1 + 9) | 0x34;
  return;
}

