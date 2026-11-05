
/* JUS-CLASS jus_TagALMT::vfunc_11 [class-virtual] slot 11 of vtable 02094cd4 (own slot, not
   inherited) */

uint jus_TagALMT::vfunc_11(int param_1,undefined4 param_2,undefined4 param_3,undefined4 param_4)

{
  int iVar1;
  int iVar2;
  uint uVar3;
  int *piVar4;
  
  if (*(int **)(param_1 + 0x1c) == (int *)0x0) {
    piVar4 = *(int **)(param_1 + 0x28);
    iVar1 = (**(code **)(*piVar4 + 0x2c))(piVar4,0,*(code **)(*piVar4 + 0x2c),param_4,param_4);
    iVar2 = (**(code **)(*piVar4 + 0x28))();
    return (uint)*(byte *)(iVar1 + iVar2 + 6);
  }
  uVar3 = (**(code **)(**(int **)(param_1 + 0x1c) + 0x2c))();
  return uVar3;
}

