
/* JUS-CLASS ALFont_021d4974::vfunc_07 [class-virtual] slot 7 of vtable 021d4974 (own slot, not
   inherited) */

int ALFont_021d4974::vfunc_07(int param_1,uint param_2)

{
  int iVar1;
  ushort uVar2;
  char cVar3;
  char cVar4;
  undefined1 uVar5;
  int iVar6;
  uint uVar7;
  int iVar8;
  int *piVar9;
  int extraout_r1;
  int extraout_r1_00;
  int extraout_r1_01;
  int iVar10;
  uint uVar11;
  int iVar12;
  int iVar13;
  undefined4 uVar14;
  int iVar15;
  
  uVar7 = param_2 * -0x72594cbd >> 0x10;
  iVar6 = FUN_021cab0c(*(int *)(param_1 + 0x54) + (uVar7 & 0xff) * 4,param_2 & 0xffff,param_1);
  if (iVar6 == 0) {
    iVar6 = FUN_021cb528(param_1);
    uVar11 = (uint)*(ushort *)(*(int *)(param_1 + 0x40) + iVar6 * 8);
    if (uVar11 != 0xffff) {
      FUN_021caabc(*(int *)(param_1 + 0x54) + (uVar11 * -0x72594cbd >> 0x10 & 0xff) * 4,
                   *(int *)(param_1 + 0x40) + iVar6 * 8,param_1);
    }
    *(short *)(*(int *)(param_1 + 0x40) + iVar6 * 8) = (short)param_2;
    *(undefined2 *)(*(int *)(param_1 + 0x40) + iVar6 * 8 + 2) = 1;
    FUN_021caa18(*(int *)(param_1 + 0x54) + (uVar7 & 0xff) * 4,*(int *)(param_1 + 0x40) + iVar6 * 8)
    ;
    if (*(char *)(param_1 + 0x78) == '\0') {
      iVar12 = 0x40;
    }
    else {
      iVar12 = 0x80;
    }
    uVar7 = (**(code **)(**(int **)(param_1 + 0x4c) + 0x10))(*(int **)(param_1 + 0x4c),param_2);
    uVar11 = (**(code **)(**(int **)(param_1 + 0x4c) + 0x18))();
    if (uVar11 == 0) {
      uVar14 = *(undefined4 *)(param_1 + 0x3c);
      FUN_0200d338(uVar7,uVar14);
      iVar13 = (uint)*(ushort *)(param_1 + 0x38) * extraout_r1_01;
      iVar8 = FUN_0200d338(uVar7,uVar14);
      iVar8 = (uint)*(ushort *)(param_1 + 0x3a) * iVar8;
    }
    else if (uVar7 < uVar11) {
      uVar14 = *(undefined4 *)(param_1 + 0x3c);
      uVar2 = *(ushort *)(param_1 + 0x38);
      FUN_0200d338(uVar7 >> 1,uVar14);
      iVar13 = (uint)uVar2 * extraout_r1 + ((uVar7 & 1) * (uint)uVar2 >> 1);
      iVar8 = FUN_0200d338(uVar7 >> 1,uVar14);
      iVar8 = (uint)*(ushort *)(param_1 + 0x3a) * iVar8;
    }
    else {
      uVar14 = *(undefined4 *)(param_1 + 0x3c);
      iVar8 = uVar7 - (uVar11 >> 1);
      FUN_0200d338(iVar8,uVar14);
      iVar13 = (uint)*(ushort *)(param_1 + 0x38) * extraout_r1_00;
      iVar8 = FUN_0200d338(iVar8,uVar14);
      iVar8 = (uint)*(ushort *)(param_1 + 0x3a) * iVar8;
    }
    for (uVar7 = 0; uVar7 < *(ushort *)(param_1 + 0x3a); uVar7 = uVar7 + 1) {
      iVar15 = iVar6 * iVar12 + (uVar7 & 7) * 4;
      for (uVar11 = 0; uVar11 < (*(ushort *)(param_1 + 0x38) + 1) / 2; uVar11 = uVar11 + 1) {
        iVar1 = ((uVar11 >> 2) + (uVar7 >> 3) * 2 & 0x3ffffff) * 0x20;
        piVar9 = *(int **)(param_1 + 0x30);
        iVar10 = iVar13 + uVar11 * 2;
        if (uVar11 < *(ushort *)(param_1 + 0x38) >> 1) {
          cVar3 = (**(code **)(*piVar9 + 0x2c))(piVar9,iVar10,iVar8 + uVar7);
          cVar4 = (**(code **)(**(int **)(param_1 + 0x30) + 0x2c))
                            (*(int **)(param_1 + 0x30),iVar10 + 1,iVar8 + uVar7);
          *(char *)(iVar1 + (uVar11 & 3) + iVar15 + *(int *)(param_1 + 0x74)) =
               cVar3 + cVar4 * '\x10';
        }
        else {
          uVar5 = (**(code **)(*piVar9 + 0x2c))(piVar9,iVar10,iVar8 + uVar7);
          *(undefined1 *)(iVar1 + (uVar11 & 3) + iVar15 + *(int *)(param_1 + 0x74)) = uVar5;
        }
      }
    }
  }
  else {
    FUN_021cb590(param_1,iVar6);
    iVar6 = (iVar6 - *(int *)(param_1 + 0x40)) * 0x2000 >> 0x10;
  }
  return iVar6;
}

