
/* JUS-CLASS ALFont_021d4f60::vfunc_06 [class-virtual] slot 6 of vtable 021d4f60 (own slot, not
   inherited) */

undefined4 ALFont_021d4f60::vfunc_06(int param_1)

{
  int *piVar1;
  int iVar2;
  undefined4 uVar3;
  int *piVar4;
  
  if (*(int *)(param_1 + 0x28) == 0) {
    piVar1 = (int *)(**(code **)(*DAT_020a0dfc + 0xc))(DAT_020a0dfc,0x38383838,0x100,0x100);
    if (piVar1[0xe] == 0) {
      (**(code **)(*piVar1 + 0x14))();
    }
    piVar4 = *(int **)(piVar1[0xe] + 4);
    piVar1 = (int *)(**(code **)(*piVar4 + 0x3c))();
    (**(code **)(*piVar1 + 0x3c))(piVar1,0);
    piVar1 = (int *)(**(code **)(*piVar4 + 0x3c))();
    iVar2 = (**(code **)(*piVar1 + 100))();
    if ((iVar2 != 0) && (iVar2 = (**(code **)(**(int **)(param_1 + 0x30) + 100))(), iVar2 != 0)) {
      piVar1 = (int *)(**(code **)(*piVar4 + 0x3c))();
      piVar1 = (int *)(**(code **)(*piVar1 + 100))();
      uVar3 = (**(code **)(**(int **)(param_1 + 0x30) + 100))();
      (**(code **)(*piVar1 + 0x14))(piVar1,uVar3);
    }
    FUN_02036064(piVar4,*(undefined4 *)(param_1 + 0x50),*(undefined4 *)(param_1 + 0x6c));
    *(int **)(param_1 + 0x28) = piVar4;
  }
  return *(undefined4 *)(param_1 + *(int *)(param_1 + 100) * 4 + 0x28);
}

