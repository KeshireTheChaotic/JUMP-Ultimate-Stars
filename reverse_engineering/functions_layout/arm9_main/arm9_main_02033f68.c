
/* JUS-CLASS jus_TagDUMY_Derived_02094a7c::vfunc_11 [class-virtual] slot 11 of vtable 02094a7c (own
   slot, not inherited) */

int jus_TagDUMY_Derived_02094a7c::vfunc_11
              (int param_1,int param_2,undefined4 param_3,undefined4 param_4)

{
  int *piVar1;
  int iVar2;
  
  piVar1 = *(int **)(param_1 + 0x24);
  if (piVar1 == (int *)0x0) {
    iVar2 = *(int *)(param_1 + 0x20);
  }
  else {
    iVar2 = (**(code **)(*piVar1 + 0x2c))(piVar1,0,*(code **)(*piVar1 + 0x2c),param_4,param_4);
    iVar2 = iVar2 + *(int *)(param_1 + 0x2c);
    *(int *)(param_1 + 0x20) = iVar2;
  }
  return iVar2 + param_2;
}

