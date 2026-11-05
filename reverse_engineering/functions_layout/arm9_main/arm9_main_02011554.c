
int * FUN_02011554(undefined4 param_1,int *param_2,undefined4 param_3,undefined4 param_4)

{
  byte bVar1;
  byte bVar2;
  byte bVar3;
  short sVar4;
  int iVar5;
  int iVar6;
  uint uVar7;
  int *piVar8;
  int iVar9;
  undefined4 uVar10;
  undefined4 uVar11;
  int *piVar12;
  uint uVar13;
  uint uVar14;
  uint uVar15;
  uint uVar16;
  int iVar17;
  int iVar18;
  uint auStack_418 [256];
  undefined4 uStack_18;
  
  uStack_18 = param_4;
  iVar5 = (**(code **)(*param_2 + 0x2c))(param_2,0);
  iVar6 = (**(code **)(*param_2 + 0x28))();
  iVar9 = DAT_020a0d44;
  iVar5 = iVar5 + iVar6;
  iVar6 = iVar5 + *(int *)(iVar5 + 10);
  iVar17 = iVar5 + 0xe;
  iVar18 = iVar5 + 0x36;
  uVar7 = (uint)DAT_020a0c56;
  uVar15 = uVar7 & 0x1f;
  uVar16 = (int)uVar7 >> 5 & 0x1f;
  uVar7 = (int)uVar7 >> 10 & 0x1f;
  FUN_0200f69c(auStack_418,0x400);
  sVar4 = *(short *)(iVar5 + 0x1c);
  if (sVar4 == 1) {
    piVar8 = (int *)(**(code **)*DAT_020a1044)(DAT_020a1044,0x10);
    uVar14 = 0;
    do {
      iVar5 = iVar18 + uVar14 * 4;
      bVar1 = *(byte *)(iVar5 + 1);
      bVar2 = *(byte *)(iVar5 + 2);
      bVar3 = *(byte *)(iVar18 + uVar14 * 4);
      if (iVar9 == 0) {
        iVar5 = 0xff;
      }
      else if (((uVar15 == bVar2) && (uVar16 == bVar1)) && (uVar7 == bVar3)) {
        iVar5 = 0;
      }
      else {
        iVar5 = 0xff;
      }
      uVar13 = uVar14 + 1;
      auStack_418[uVar14] = iVar5 * 0x1000000 | (uint)CONCAT12(bVar3,CONCAT11(bVar1,bVar2));
      uVar14 = uVar13;
    } while (uVar13 < 2);
    FUN_02029ca0(piVar8,auStack_418,0,0x10,0);
    iVar9 = FUN_0201a228(0x24);
    piVar12 = (int *)0x0;
    if (iVar9 != 0) {
      uVar10 = FUN_020118ac(iVar17,4);
      uVar11 = FUN_020118ac(iVar17,2);
      piVar12 = (int *)jus_TagPAL1::jus_TagPAL1(iVar9,uVar11,uVar10,piVar8);
    }
    for (uVar7 = 0; uVar15 = FUN_020118ac(iVar17,4), uVar7 < uVar15; uVar7 = uVar7 + 1) {
      uVar15 = FUN_020118ac(iVar17,2);
      iVar9 = FUN_020118ac(iVar17,2);
      iVar5 = FUN_020118ac(iVar17,4);
      uVar10 = (**(code **)(*piVar12 + 0x38))(piVar12,uVar7);
      FUN_02051890(iVar6 + (((iVar5 - uVar7) + -1) * iVar9 >> 3),uVar10,uVar15 >> 3);
    }
    (**(code **)(*piVar8 + 0xc))();
  }
  else if (sVar4 == 4) {
    piVar8 = (int *)(**(code **)*DAT_020a1044)(DAT_020a1044,0x10);
    uVar14 = 0;
    do {
      iVar5 = iVar18 + uVar14 * 4;
      bVar1 = *(byte *)(iVar5 + 1);
      bVar2 = *(byte *)(iVar5 + 2);
      bVar3 = *(byte *)(iVar18 + uVar14 * 4);
      if (iVar9 == 0) {
        iVar5 = 0xff;
      }
      else if (((uVar15 == bVar2) && (uVar16 == bVar1)) && (uVar7 == bVar3)) {
        iVar5 = 0;
      }
      else {
        iVar5 = 0xff;
      }
      uVar13 = uVar14 + 1;
      auStack_418[uVar14] = iVar5 * 0x1000000 | (uint)CONCAT12(bVar3,CONCAT11(bVar1,bVar2));
      uVar14 = uVar13;
    } while (uVar13 < 0x10);
    FUN_02029ca0(piVar8,auStack_418,0,0x10,0);
    iVar9 = FUN_0201a228(0x24);
    piVar12 = (int *)0x0;
    if (iVar9 != 0) {
      uVar10 = FUN_020118ac(iVar17,4);
      uVar11 = FUN_020118ac(iVar17,2);
      piVar12 = (int *)jus_TagPAL4::jus_TagPAL4(iVar9,uVar11,uVar10,piVar8);
    }
    for (uVar7 = 0; uVar15 = FUN_020118ac(iVar17,4), uVar7 < uVar15; uVar7 = uVar7 + 1) {
      uVar15 = FUN_020118ac(iVar17,2);
      iVar9 = FUN_020118ac(iVar17,2);
      iVar5 = FUN_020118ac(iVar17,4);
      uVar10 = (**(code **)(*piVar12 + 0x38))(piVar12,uVar7);
      FUN_02051890(iVar6 + (((iVar5 - uVar7) + -1) * iVar9 >> 1),uVar10,uVar15 >> 1);
    }
    (**(code **)(*piVar8 + 0xc))();
  }
  else if (sVar4 == 8) {
    piVar8 = (int *)(**(code **)*DAT_020a1044)(DAT_020a1044,0x100);
    uVar14 = 0;
    do {
      iVar5 = iVar18 + uVar14 * 4;
      bVar1 = *(byte *)(iVar5 + 1);
      bVar2 = *(byte *)(iVar5 + 2);
      bVar3 = *(byte *)(iVar18 + uVar14 * 4);
      if (iVar9 == 0) {
        iVar5 = 0xff;
      }
      else if (((uVar15 == bVar2) && (uVar16 == bVar1)) && (uVar7 == bVar3)) {
        iVar5 = 0;
      }
      else {
        iVar5 = 0xff;
      }
      auStack_418[uVar14] = iVar5 * 0x1000000 | (uint)CONCAT12(bVar3,CONCAT11(bVar1,bVar2));
      uVar14 = uVar14 + 1;
    } while (uVar14 < 0x100);
    FUN_02029ca0(piVar8,auStack_418,0,0x100,0);
    iVar9 = FUN_0201a228(0x24);
    piVar12 = (int *)0x0;
    if (iVar9 != 0) {
      uVar10 = FUN_020118ac(iVar17,4);
      uVar11 = FUN_020118ac(iVar17,2);
      piVar12 = (int *)jus_TagPAL8::jus_TagPAL8(iVar9,uVar11,uVar10,piVar8);
    }
    for (uVar7 = 0; uVar15 = FUN_020118ac(iVar17,4), uVar7 < uVar15; uVar7 = uVar7 + 1) {
      uVar10 = FUN_020118ac(iVar17,2);
      iVar9 = FUN_020118ac(iVar17,2);
      iVar5 = FUN_020118ac(iVar17,4);
      uVar11 = (**(code **)(*piVar12 + 0x38))(piVar12,uVar7);
      FUN_02051890(iVar6 + iVar9 * ((iVar5 - uVar7) + -1),uVar11,uVar10);
    }
    (**(code **)(*piVar8 + 0xc))();
  }
  else {
    piVar12 = (int *)0x0;
  }
  return piVar12;
}

