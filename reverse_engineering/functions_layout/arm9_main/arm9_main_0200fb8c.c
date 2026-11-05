
/* JUS-CLASS jus_Class_02095ea0::vfunc_05 [class-virtual] slot 5 of vtable 02095ea0 (own slot, not
   inherited) */

undefined4 jus_Class_02095ea0::vfunc_05(int param_1,uint param_2)

{
  int iVar1;
  int *piVar2;
  undefined4 uVar3;
  
  if (param_2 < *(uint *)(param_1 + 0x28)) {
    iVar1 = (**(code **)(**(int **)(param_1 + 0x1c) + 0x2c))(*(int **)(param_1 + 0x1c),0);
    return *(undefined4 *)(iVar1 + param_2 * 0x10 + 0x10);
  }
  piVar2 = *(int **)(param_1 + 0x2c);
  if (piVar2 == (int *)0x0) {
    return 0;
  }
  uVar3 = (**(code **)(*piVar2 + 0x14))(piVar2,param_2 - *(uint *)(param_1 + 0x28));
  return uVar3;
}

