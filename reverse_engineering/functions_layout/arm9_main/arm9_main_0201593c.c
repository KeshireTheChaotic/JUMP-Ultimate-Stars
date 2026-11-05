
/* JUS-CLASS ALWidgetImp_020958dc::vfunc_07 [class-virtual] slot 7 of vtable 020958dc (own slot, not
   inherited) */

void ALWidgetImp_020958dc::vfunc_07(int param_1)

{
  int iVar1;
  int iVar2;
  uint uVar3;
  int *piVar4;
  uint uVar5;
  
  piVar4 = *(int **)(param_1 + 0x38);
  for (uVar5 = 1; uVar3 = (**(code **)(*piVar4 + 0xac))(), uVar5 < uVar3; uVar5 = uVar5 + 1) {
    iVar1 = (**(code **)(*piVar4 + 0xc0))(piVar4,uVar5);
    iVar2 = FUN_02014d6c(*(undefined4 *)(iVar1 + 100));
    if (iVar2 != 0) {
      (**(code **)(**(int **)(iVar1 + 100) + 0x1c))();
    }
  }
  return;
}

