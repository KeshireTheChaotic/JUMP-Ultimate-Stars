
/* JUS-CLASS jus_Class_02095ea0::vfunc_07 [class-virtual] slot 7 of vtable 02095ea0 (own slot, not
   inherited) */

int jus_Class_02095ea0::vfunc_07(int param_1)

{
  int iVar1;
  
  if (*(int **)(param_1 + 0x2c) == (int *)0x0) {
    return *(int *)(param_1 + 0x28);
  }
  iVar1 = (**(code **)(**(int **)(param_1 + 0x2c) + 0x1c))();
  return *(int *)(param_1 + 0x28) + iVar1;
}

