
/* JUS-CLASS jus_Class_021d074c::vfunc_55 [class-virtual] slot 55 of vtable 021d074c (own slot, not
   inherited) */

void jus_Class_021d074c::vfunc_55
               (int param_1,undefined4 param_2,undefined4 param_3,undefined4 param_4)

{
  undefined4 uVar1;
  undefined4 uVar2;
  uint uVar3;
  int iVar4;
  uint uVar5;
  int iVar6;
  bool bVar7;
  int *piVar8;
  uint uVar9;
  int iStack_28;
  int iStack_24;
  int iStack_20;
  int iStack_1c;
  undefined4 uStack_18;
  
  uStack_18 = param_4;
  FUN_021b80f4();
  piVar8 = *(int **)(param_1 + 0x38);
  for (uVar9 = 1; iVar4 = (**(code **)(*piVar8 + 0xac))(), uVar5 = uVar9, (int)uVar9 < iVar4;
      uVar9 = uVar9 + 1) {
    while( true ) {
      uVar5 = uVar5 + 1;
      uVar3 = (**(code **)(*piVar8 + 0xac))();
      if (uVar3 <= uVar5) break;
      iVar4 = (**(code **)(*piVar8 + 0xc0))(piVar8,uVar5);
      FUN_021ae0ac(&iStack_28,*(undefined4 *)(iVar4 + 100));
      iVar4 = (**(code **)(*piVar8 + 0xc0))(piVar8,uVar9);
      FUN_021ae0ac(&iStack_24,*(undefined4 *)(iVar4 + 100));
      if (iStack_24 < iStack_28) {
        uVar1 = (**(code **)(*piVar8 + 0xc0))(piVar8,uVar9);
        uVar2 = (**(code **)(*piVar8 + 0xc0))(piVar8,uVar5);
        (**(code **)(*piVar8 + 0xd0))(piVar8,uVar9,uVar2);
        (**(code **)(*piVar8 + 0xd0))(piVar8,uVar5,uVar1);
      }
    }
  }
  if (piVar8[0x36] != 0) {
    (**(code **)(**(int **)(piVar8[0x36] + 100) + 0x1c))();
  }
  for (uVar9 = 1; uVar5 = (**(code **)(*piVar8 + 0xac))(), uVar9 < uVar5; uVar9 = uVar9 + 1) {
    iVar4 = (**(code **)(*piVar8 + 0xc0))(piVar8,uVar9);
    iVar6 = FUN_021ada10();
    if (iVar6 != 0) {
      (**(code **)(**(int **)(iVar4 + 100) + 0x1c))();
    }
  }
  for (uVar9 = 0; uVar9 < (uint)piVar8[0x56]; uVar9 = uVar9 + 1) {
    iVar4 = *(int *)(piVar8[0x55] + uVar9 * 4);
    if ((int)((uint)*(byte *)(*(int *)(iVar4 + 100) + 0x10) << 0x18) < 0) {
      FUN_021b80f4();
      FUN_021ae104(&iStack_1c,iVar4);
      if (*(int *)(iVar4 + 0xd8) != 0) {
        iStack_1c = iStack_1c + *(short *)(*(int *)(iVar4 + 0xd8) + 0x96) * -0x1000;
      }
      bVar7 = false;
      if ((-1 < iStack_1c) && (iStack_1c < piVar8[0x5f] * piVar8[0x60] * 0x1000)) {
        bVar7 = true;
      }
      if ((!bVar7) && (iVar6 = FUN_021ada10(*(undefined4 *)(iVar4 + 0x44)), iVar6 != 0)) {
        (**(code **)(**(int **)(iVar4 + 0x44) + 0xd8))(*(int **)(iVar4 + 0x44),0);
      }
    }
  }
  for (uVar9 = 0; uVar9 < (uint)piVar8[0x56]; uVar9 = uVar9 + 1) {
    iVar4 = *(int *)(piVar8[0x55] + uVar9 * 4);
    if ((int)((uint)*(byte *)(*(int *)(iVar4 + 100) + 0x10) << 0x18) < 0) {
      FUN_021b80f4();
      FUN_021ae104(&iStack_20,iVar4);
      if (*(int *)(iVar4 + 0xd8) != 0) {
        iStack_20 = iStack_20 + *(short *)(*(int *)(iVar4 + 0xd8) + 0x96) * -0x1000;
      }
      bVar7 = false;
      if ((-1 < iStack_20) && (iStack_20 < piVar8[0x5f] * piVar8[0x60] * 0x1000)) {
        bVar7 = true;
      }
      if (bVar7) {
        iVar6 = FUN_021ada10(*(undefined4 *)(iVar4 + 0x44));
        if (iVar6 == 0) {
          (**(code **)(**(int **)(iVar4 + 0x44) + 0xd8))(*(int **)(iVar4 + 0x44),1);
        }
        (**(code **)(**(int **)(iVar4 + 100) + 0x1c))();
      }
    }
  }
  return;
}

