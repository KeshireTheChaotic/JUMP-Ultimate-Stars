
/* JUS-CLASS jus_Class_020940d0::vfunc_02 [class-virtual] slot 2 of vtable 020940d0 (own slot, not
   inherited) */

int jus_Class_020940d0::vfunc_02(int param_1)

{
  int *piVar1;
  
  piVar1 = (int *)FUN_02036430(*(undefined4 *)(param_1 + 4));
  if (piVar1[6] == 0) {
    (**(code **)(*piVar1 + 0x10))();
  }
  return piVar1[6];
}

