
/* JUS-CLASS jus_Class_02095d50::vfunc_51 [class-virtual] slot 51 of vtable 02095d50 (own slot, not
   inherited) */

void jus_Class_02095d50::vfunc_51(int param_1,undefined4 param_2)

{
  short sVar1;
  int *piVar2;
  
  *(char *)(param_1 + 0x48) = (char)param_2;
  for (piVar2 = *(int **)(*(int *)(param_1 + 0x38) + 0x4c); piVar2 != (int *)0x0;
      piVar2 = (int *)piVar2[0x13]) {
    sVar1 = (**(code **)(*piVar2 + 0x9c))();
    if (sVar1 == 0x5053) {
      (**(code **)(*(int *)piVar2[0x19] + 0x5c))((int *)piVar2[0x19],param_2);
    }
  }
  return;
}

