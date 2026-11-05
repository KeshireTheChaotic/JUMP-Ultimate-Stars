
/* JUS-CLASS ALTextDS_021d4a2c::vfunc_41 [class-virtual] slot 41 of vtable 021d4a2c (own slot, not
   inherited) */

void ALTextDS_021d4a2c::vfunc_41(int param_1,uint param_2,undefined4 param_3,undefined4 param_4)

{
  int iVar1;
  int *piVar2;
  undefined4 uVar3;
  uint uVar4;
  uint uVar5;
  uint uVar6;
  
                    /* JUS-TAG source_file_inferred="ALTextDS.cpp" */
  if (*(byte *)(param_1 + 0x172) == param_2) {
    return;
  }
  *(char *)(param_1 + 0x172) = (char)param_2;
  iVar1 = (**(code **)(**(int **)(*(int *)(param_1 + 0x54) + 0x30) + 0x18))();
  piVar2 = *(int **)(*(int *)(param_1 + 0x54) + 0x30);
  if (iVar1 != 1) {
    (**(code **)(*piVar2 + 0x2c))(piVar2,0,0,*(code **)(*piVar2 + 0x2c),param_4);
    piVar2 = *(int **)(param_1 + 0x17c);
    if (piVar2 == (int *)0x0) {
      return;
    }
    piVar2 = (int *)(**(code **)(*piVar2 + 0x40))(piVar2,0,&DAT_02093c3c);
    if (*(char *)(param_1 + 0x172) == '\0') {
      (**(code **)(*piVar2 + 0x40))(piVar2,1);
    }
    else {
      (**(code **)(*piVar2 + 0x40))(piVar2,0);
    }
    (**(code **)(**(int **)(param_1 + 0x17c) + 0x4c))(*(int **)(param_1 + 0x17c),piVar2);
    return;
  }
  uVar3 = (**(code **)(*piVar2 + 0x2c))(piVar2,0,0);
  piVar2 = (int *)(**(code **)(**(int **)(param_1 + 0x17c) + 0x40))
                            (*(int **)(param_1 + 0x17c),0,&DAT_02093c3c);
  for (uVar5 = 0; uVar5 < *(ushort *)((int)piVar2 + 10); uVar5 = uVar5 + 1) {
    for (uVar6 = 0; uVar6 < *(ushort *)(piVar2 + 2); uVar6 = uVar6 + 1) {
      uVar4 = (**(code **)(**(int **)(*(int *)(param_1 + 0x54) + 0x30) + 0x18))();
      if (uVar4 < 2) {
        if (param_2 == 0) {
          iVar1 = (**(code **)(*piVar2 + 0x2c))(piVar2,uVar6,uVar5);
          (**(code **)(*piVar2 + 0x30))(piVar2,uVar6,uVar5,iVar1 + 1);
        }
        else {
          iVar1 = (**(code **)(*piVar2 + 0x2c))(piVar2,uVar6,uVar5);
          (**(code **)(*piVar2 + 0x30))(piVar2,uVar6,uVar5,iVar1 + -1);
        }
      }
      else {
        (**(code **)(*piVar2 + 0x30))(piVar2,uVar6,uVar5,uVar3);
      }
    }
  }
  (**(code **)(**(int **)(param_1 + 0x17c) + 0x4c))(*(int **)(param_1 + 0x17c),piVar2);
  return;
}

