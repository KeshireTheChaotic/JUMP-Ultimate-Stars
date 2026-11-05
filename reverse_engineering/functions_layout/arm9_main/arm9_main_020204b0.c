
/* JUS-CLASS jus_TagALMT::vfunc_12 [class-virtual] slot 12 of vtable 02094cd4 (own slot, not
   inherited) */

undefined4 jus_TagALMT::vfunc_12(int param_1,int param_2)

{
  int iVar1;
  int iVar2;
  undefined4 uVar3;
  int *piVar4;
  
  if (*(int **)(param_1 + 0x1c) == (int *)0x0) {
    piVar4 = *(int **)(param_1 + 0x28);
    iVar1 = (**(code **)(*piVar4 + 0x2c))(piVar4,0);
    iVar2 = (**(code **)(*piVar4 + 0x28))();
    return *(undefined4 *)(iVar1 + iVar2 + param_2 * 4 + 0xc);
  }
  uVar3 = (**(code **)(**(int **)(param_1 + 0x1c) + 0x30))();
  return uVar3;
}

