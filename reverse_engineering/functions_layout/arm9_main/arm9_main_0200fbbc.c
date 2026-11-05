
/* JUS-CLASS jus_Class_02095ea0::vfunc_06 [class-virtual] slot 6 of vtable 02095ea0 (own slot, not
   inherited) */

int jus_Class_02095ea0::vfunc_06(int param_1,uint param_2)

{
  int iVar1;
  int *piVar2;
  
  if (*(uint *)(param_1 + 0x28) <= param_2) {
    piVar2 = *(int **)(param_1 + 0x2c);
    if (piVar2 == (int *)0x0) {
      return 0;
    }
    iVar1 = (**(code **)(*piVar2 + 0x18))(piVar2,param_2 - *(uint *)(param_1 + 0x28));
    return iVar1;
  }
  iVar1 = (**(code **)(**(int **)(param_1 + 0x1c) + 0x2c))(*(int **)(param_1 + 0x1c),0);
  if ((*(uint *)(iVar1 + (param_2 * 4 + 3) * 4 + 0x10) & 0x80000000) == 0) {
    return 0;
  }
  return iVar1 + *(int *)(iVar1 + (param_2 * 4 + 1) * 4 + 0x10) + -0x22;
}

