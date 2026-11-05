
void FUN_021b8128(int param_1)

{
  int iVar1;
  uint uVar2;
  undefined4 uVar3;
  undefined4 uVar4;
  uint uVar5;
  int iVar6;
  int *piVar7;
  uint uVar8;
  int local_24;
  int local_20;
  int local_1c;
  int local_18;
  
  piVar7 = *(int **)(param_1 + 0x38);
  for (uVar8 = 1; iVar1 = (**(code **)(*piVar7 + 0xac))(), uVar2 = uVar8, (int)uVar8 < iVar1;
      uVar8 = uVar8 + 1) {
    while( true ) {
      uVar2 = uVar2 + 1;
      uVar5 = (**(code **)(*piVar7 + 0xac))();
      if (uVar5 <= uVar2) break;
      iVar1 = (**(code **)(*piVar7 + 0xc0))(piVar7,uVar2);
      FUN_021ae0ac(&local_1c,*(undefined4 *)(iVar1 + 100));
      iVar1 = (**(code **)(*piVar7 + 0xc0))(piVar7,uVar8);
      FUN_021ae0ac(&local_18,*(undefined4 *)(iVar1 + 100));
      if (local_18 < local_1c) {
        uVar3 = (**(code **)(*piVar7 + 0xc0))(piVar7,uVar8);
        uVar4 = (**(code **)(*piVar7 + 0xc0))(piVar7,uVar2);
        (**(code **)(*piVar7 + 0xd0))(piVar7,uVar8,uVar4);
        (**(code **)(*piVar7 + 0xd0))(piVar7,uVar2,uVar3);
      }
    }
  }
  if (piVar7[0x36] != 0) {
    (**(code **)(**(int **)(piVar7[0x36] + 100) + 0x1c))();
  }
  for (uVar8 = 1; uVar2 = (**(code **)(*piVar7 + 0xac))(), uVar8 < uVar2; uVar8 = uVar8 + 1) {
    iVar1 = (**(code **)(*piVar7 + 0xc0))(piVar7,uVar8);
    iVar6 = FUN_021ada10();
    if (iVar6 != 0) {
      (**(code **)(**(int **)(iVar1 + 100) + 0x1c))();
    }
  }
  for (uVar8 = 0; iVar1 = (**(code **)(*piVar7 + 0x16c))(), uVar2 = uVar8, (int)uVar8 < iVar1;
      uVar8 = uVar8 + 1) {
    while( true ) {
      uVar2 = uVar2 + 1;
      uVar5 = (**(code **)(*piVar7 + 0x16c))();
      if (uVar5 <= uVar2) break;
      iVar1 = (**(code **)(*piVar7 + 0x170))(piVar7,uVar2);
      FUN_021ae0ac(&local_24,*(undefined4 *)(iVar1 + 100));
      iVar1 = (**(code **)(*piVar7 + 0x170))(piVar7,uVar8);
      FUN_021ae0ac(&local_20,*(undefined4 *)(iVar1 + 100));
      if (local_20 < local_24) {
        uVar3 = (**(code **)(*piVar7 + 0x170))(piVar7,uVar8);
        uVar4 = (**(code **)(*piVar7 + 0x170))(piVar7,uVar2);
        (**(code **)(*piVar7 + 0x174))(piVar7,uVar8,uVar4);
        (**(code **)(*piVar7 + 0x174))(piVar7,uVar2,uVar3);
      }
    }
  }
  for (uVar8 = 0; uVar2 = (**(code **)(*piVar7 + 0x16c))(), uVar8 < uVar2; uVar8 = uVar8 + 1) {
    iVar1 = (**(code **)(*piVar7 + 0x170))(piVar7,uVar8);
    iVar6 = FUN_021ada10();
    if (iVar6 != 0) {
      (**(code **)(**(int **)(iVar1 + 100) + 0x1c))();
    }
  }
  iVar1 = (**(code **)(*piVar7 + 0x154))();
  if (((iVar1 != 0) && (*(char *)(iVar1 + 0xba) != '\0')) && (*(int **)(iVar1 + 0x94) == piVar7)) {
    (**(code **)(**(int **)(iVar1 + 100) + 0x1c))();
  }
  return;
}

