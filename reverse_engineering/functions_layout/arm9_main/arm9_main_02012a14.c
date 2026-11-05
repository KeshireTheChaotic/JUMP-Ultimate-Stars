
/* JUS-CLASS jus_Class_02094964::vfunc_10 [class-virtual] slot 10 of vtable 02094964 (own slot, not
   inherited) */

void jus_Class_02094964::vfunc_10(void)

{
  int *piVar1;
  
  piVar1 = *(int **)(*(int *)(DAT_020a1094 + 4) + 0xc);
  DAT_020a0d28 = (int *)piVar1[3];
  while (piVar1 != &DAT_020a16e0) {
    (**(code **)(*piVar1 + 0x58))();
    piVar1 = DAT_020a0d28;
    DAT_020a0d28 = (int *)DAT_020a0d28[3];
  }
  DAT_020a0d28 = (int *)0x0;
  return;
}

