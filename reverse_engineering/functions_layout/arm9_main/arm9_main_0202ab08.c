
/* JUS-CLASS jus_Class_020966d0::vfunc_19 [class-virtual] slot 19 of vtable 020966d0 (own slot, not
   inherited) */

void jus_Class_020966d0::vfunc_19(int *param_1)

{
  byte bVar1;
  
  if (DAT_02093be8 == param_1[2]) {
    bVar1 = *(byte *)(param_1 + 9);
  }
  else {
    (**(code **)(*param_1 + 0x50))();
    bVar1 = *(byte *)(param_1 + 9);
  }
  *(byte *)(param_1 + 9) = bVar1 | 8;
  return;
}

