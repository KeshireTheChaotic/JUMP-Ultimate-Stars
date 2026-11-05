
/* JUS-CLASS jus_Class_02095d50::vfunc_53 [class-virtual] slot 53 of vtable 02095d50 (own slot, not
   inherited) */

void jus_Class_02095d50::vfunc_53(int param_1,undefined2 param_2)

{
  short sVar1;
  int *piVar2;
  
  *(undefined2 *)(param_1 + 0x4a) = param_2;
  for (piVar2 = *(int **)(*(int *)(param_1 + 0x38) + 0x4c); piVar2 != (int *)0x0;
      piVar2 = (int *)piVar2[0x13]) {
    sVar1 = (**(code **)(*piVar2 + 0x9c))();
    if (sVar1 == 0x5053) {
      *(undefined2 *)(piVar2[0x19] + 0x4a) = param_2;
    }
  }
  return;
}

