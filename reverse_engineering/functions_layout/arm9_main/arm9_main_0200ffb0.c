
/* JUS-CLASS jus_Class_02095e30::vfunc_05 [class-virtual] slot 5 of vtable 02095e30 (own slot, not
   inherited) */

undefined4 jus_Class_02095e30::vfunc_05(int param_1,uint param_2)

{
  int iVar1;
  int *piVar2;
  undefined4 uVar3;
  
  if (param_2 < *(uint *)(param_1 + 0x28)) {
    iVar1 = FUN_0200ff9c();
    return *(undefined4 *)(iVar1 + (uint)*(ushort *)(iVar1 + param_2 * 2 + 0x12));
  }
  piVar2 = *(int **)(param_1 + 0x2c);
  if (piVar2 == (int *)0x0) {
    return 0;
  }
  uVar3 = (**(code **)(*piVar2 + 0x14))(piVar2,param_2 - *(uint *)(param_1 + 0x28));
  return uVar3;
}

