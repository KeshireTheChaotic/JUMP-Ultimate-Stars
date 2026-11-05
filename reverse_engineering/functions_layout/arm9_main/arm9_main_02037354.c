
/* JUS-CLASS ScreenInstance_Derived_02093d14::vfunc_49 [class-virtual] slot 49 of vtable 02093d14
   (own slot, not inherited) */

void ScreenInstance_Derived_02093d14::vfunc_49(undefined4 param_1,int param_2,int *param_3)

{
  int iVar1;
  int iVar2;
  int iVar3;
  int *piVar4;
  
  iVar1 = (**(code **)(*param_3 + 0x2c))(param_3,0);
  iVar2 = (**(code **)(*param_3 + 0x28))();
  iVar1 = iVar1 + iVar2;
  piVar4 = *(int **)(param_2 + 100);
  (**(code **)(*piVar4 + 0xa8))(piVar4,*(undefined2 *)(iVar1 + 0x10),*(undefined2 *)(iVar1 + 0x12));
  (**(code **)(*piVar4 + 0xa4))(piVar4,*(undefined2 *)(iVar1 + 0x14),*(undefined2 *)(iVar1 + 0x16));
  for (iVar2 = 0; iVar2 < (int)(uint)*(ushort *)(iVar1 + 0x16); iVar2 = iVar2 + 1) {
    for (iVar3 = 0; iVar3 < (int)(uint)*(ushort *)(iVar1 + 0x14); iVar3 = iVar3 + 1) {
      if (*(int *)(iVar1 + 0x1c + (iVar2 * (uint)*(ushort *)(iVar1 + 0x14) + iVar3) * 4) != -1) {
        (**(code **)(*piVar4 + 0xac))(piVar4,iVar3,iVar2);
      }
    }
  }
  *(bool *)(piVar4 + 0x1d) = (*(byte *)(iVar1 + 6) & 1) != 0;
  *(bool *)((int)piVar4 + 0x75) = (*(byte *)(iVar1 + 6) & 0x10) != 0;
  return;
}

