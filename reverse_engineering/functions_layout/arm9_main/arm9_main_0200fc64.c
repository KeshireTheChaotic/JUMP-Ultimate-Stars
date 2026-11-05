
/* JUS-CLASS jus_Class_02095ea0::vfunc_12 [class-virtual] slot 12 of vtable 02095ea0 (own slot, not
   inherited) */

undefined2 jus_Class_02095ea0::vfunc_12(int param_1,int param_2)

{
  int iVar1;
  int iVar2;
  
  iVar1 = (**(code **)(**(int **)(param_1 + 0x1c) + 0x2c))(*(int **)(param_1 + 0x1c),0);
  iVar2 = iVar1 + param_2 * 0x10;
  if ((*(uint *)(iVar2 + 0x1c) & 0x80000000) == 0) {
    return 0;
  }
  return *(undefined2 *)(iVar1 + (*(int *)(iVar2 + 0x14) + -2) * 2);
}

