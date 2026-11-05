
/* JUS-CLASS jus_Class_02099efc::vfunc_09 [class-virtual] slot 9 of vtable 02099efc (own slot, not
   inherited) */

void jus_Class_02099efc::vfunc_09(undefined4 param_1,int param_2,undefined2 *param_3)

{
  int *piVar1;
  
  piVar1 = *(int **)(param_2 + 0x50);
  *(undefined2 *)((int)piVar1 + 0x26) = *param_3;
  (**(code **)(*piVar1 + 0x14))();
  return;
}

