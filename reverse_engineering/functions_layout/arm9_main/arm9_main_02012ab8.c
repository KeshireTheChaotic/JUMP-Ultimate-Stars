
/* JUS-CLASS jus_Class_02094924::vfunc_10 [class-virtual] slot 10 of vtable 02094924 (own slot, not
   inherited) */

void jus_Class_02094924::vfunc_10(void)

{
  int *piVar1;
  
  piVar1 = DAT_020a16ec;
  for (DAT_020a0d28 = (int *)DAT_020a16ec[3]; DAT_020a0d28 != (int *)0x0;
      DAT_020a0d28 = (int *)DAT_020a0d28[3]) {
    (**(code **)(*piVar1 + 0x58))();
    piVar1 = DAT_020a0d28;
  }
  DAT_020a0d28 = (int *)0x0;
  return;
}

