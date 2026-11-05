
/* JUS-CLASS jus_Class_02095e30::vfunc_06 [class-virtual] slot 6 of vtable 02095e30 (own slot, not
   inherited) */

int jus_Class_02095e30::vfunc_06(int param_1,uint param_2)

{
  int iVar1;
  int *piVar2;
  uint uVar3;
  
  if (*(uint *)(param_1 + 0x28) <= param_2) {
    piVar2 = *(int **)(param_1 + 0x2c);
    if (piVar2 == (int *)0x0) {
      return 0;
    }
    iVar1 = (**(code **)(*piVar2 + 0x18))(piVar2,param_2 - *(uint *)(param_1 + 0x28));
    return iVar1;
  }
  iVar1 = FUN_0200ff9c();
  uVar3 = (uint)*(ushort *)(iVar1 + param_2 * 2 + 0x12);
  if ((*(uint *)(iVar1 + uVar3 + 0xc) & 0x80000000) == 0) {
    return 0;
  }
  return iVar1 + uVar3 + 0x12;
}

