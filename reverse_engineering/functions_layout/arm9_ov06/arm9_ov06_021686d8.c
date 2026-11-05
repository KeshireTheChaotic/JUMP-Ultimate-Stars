
void FUN_021686d8(int param_1)

{
  int iVar1;
  int iVar2;
  int iVar3;
  undefined4 uVar4;
  int *piVar5;
  int iVar6;
  int iVar7;
  int iVar8;
  uint uVar9;
  uint uVar10;
  int iVar11;
  uint unaff_r6;
  uint uVar12;
  int iVar13;
  int iVar14;
  undefined1 uVar15;
  undefined1 uVar16;
  bool bVar17;
  uint local_5c;
  uint local_58;
  uint local_50;
  int local_4c;
  int local_48;
  int local_44;
  int local_40;
  int local_3c;
  int local_38;
  int local_34;
  int local_30;
  int local_2c;
  int local_28;
  
  iVar11 = *(int *)(*(int *)(param_1 + 4) + 0x10);
  iVar1 = *(int *)(*(int *)(*(int *)(DAT_02172968 + 8) + 4) + 0x50);
  iVar6 = *(int *)(iVar1 + 0xc);
  iVar2 = *(int *)(iVar1 + 0x10);
  local_58 = 2;
  local_5c = 1;
  local_50 = 0x501004;
  iVar1 = iVar11;
  for (uVar12 = 0; (int)uVar12 < *(int *)(iVar11 + 0xac); uVar12 = uVar12 + 1) {
    if ((*(int *)(iVar1 + 4) != 0) && (*(char *)(iVar1 + 0x26) == '\0')) {
      uVar10 = 0;
      iVar8 = *(int *)(*(int *)(*(int *)(iVar1 + 4) + 0x10) + 0x5c);
      iVar13 = 0x18;
      iVar7 = iVar6 + 0x80000 + (*(int *)(iVar8 + 0xc) >> 8) * 0x1000;
      iVar3 = iVar2 + 0x78000 + (*(int *)(iVar8 + 0x10) >> 8) * 0x1000;
      iVar7 = (int)(iVar7 + ((uint)(iVar7 >> 0xb) >> 0x14)) >> 0xc;
      iVar3 = (int)(iVar3 + ((uint)(iVar3 >> 0xb) >> 0x14)) >> 0xc;
      if (iVar7 < 8) {
        uVar10 = local_5c;
        iVar14 = 0;
      }
      else if (iVar7 < 0xf8) {
        iVar14 = iVar7;
        if ((0x40 < iVar7) && (iVar7 < 0xd8)) {
          iVar13 = 10;
        }
      }
      else {
        uVar10 = local_58;
        iVar14 = 0xff;
      }
      if (iVar3 < iVar13) {
        uVar10 = uVar10 | 4;
      }
      else {
        iVar13 = iVar3;
        if (0xb8 < iVar3) {
          iVar13 = 0xc0;
          uVar10 = uVar10 | 8;
        }
      }
      if (*(char *)(iVar11 + 0xb0) == '\0') {
        *(int *)(iVar1 + 0x1c) = *(int *)(DAT_02172960 + uVar12 * 4 + 0x4c) + 0x501000;
        if (DAT_020afea0 == 9) {
          *(undefined4 *)(iVar1 + 0x1c) = 0x501000;
        }
      }
      else {
        unaff_r6 = *(uint *)(DAT_02172960 + uVar12 * 4 + 0x1c);
        *(uint *)(iVar1 + 0x1c) = unaff_r6 + 0x501000;
      }
      if (uVar10 == 0) {
        *(int *)(iVar1 + 0x14) = *(char *)(iVar1 + 0x25) + 0x500000;
        iVar7 = *(int *)(iVar8 + 0xc);
        iVar3 = *(int *)(iVar8 + 0x10) >> 8;
        FUN_021544c8(*(undefined4 *)(iVar1 + 8),*(undefined4 *)(DAT_02172968 + 4));
        iVar7 = (iVar7 >> 8) << 0xc;
        local_3c = (iVar3 + 8) * 0x1000;
        local_38 = iVar7;
        FUN_021519d0(*(undefined4 *)(iVar1 + 8),&local_38,&local_3c);
        FUN_021544c8(*(undefined4 *)(iVar1 + 0xc),*(undefined4 *)(DAT_02172968 + 4));
        if (((*(char *)(iVar11 + 0xb0) == '\0') && (uVar12 != *(byte *)(DAT_02172968 + 0x30))) &&
           (*(int *)(iVar1 + 0x1c) == 0x501000)) {
          local_44 = iVar3 << 0xc;
          *(undefined4 *)(iVar1 + 0x1c) = 0x501004;
          local_40 = iVar7;
          FUN_021519d0(*(undefined4 *)(iVar1 + 0xc),&local_40,&local_44);
        }
        else {
          local_4c = (iVar3 + 0x16) * 0x1000;
          local_48 = iVar7;
          FUN_021519d0(*(undefined4 *)(iVar1 + 0xc),&local_48,&local_4c);
        }
      }
      else {
        bVar17 = *(uint *)(iVar1 + 0x1c) == 0x501004;
        uVar9 = local_50;
        if (bVar17) {
          uVar9 = (uint)*(byte *)(iVar11 + 0xb0);
        }
        uVar16 = 0x501003 < *(uint *)(iVar1 + 0x1c);
        uVar15 = bVar17 && uVar9 == 0;
        if (bVar17 && uVar9 == 0) {
          *(undefined4 *)(iVar1 + 0x1c) = 0x501000;
        }
        *(int *)(iVar1 + 0x14) = *(int *)(uVar10 * 8 + 0x217163c) + (int)*(char *)(iVar1 + 0x25);
        FUN_0200c954((iVar7 + -0x80) * (iVar7 + -0x80) + (iVar3 + -0x78) * (iVar3 + -0x78));
        uVar4 = FUN_0200cb80();
        FUN_0200c4a8(uVar4,0x43500000);
        if ((bool)uVar16 && !(bool)uVar15) {
          *(int *)(iVar1 + 0x14) = *(int *)(iVar1 + 0x14) + 0x20;
        }
        FUN_021544c8(*(undefined4 *)(iVar1 + 8),0);
        local_2c = iVar13 << 0xc;
        local_28 = iVar14 << 0xc;
        FUN_021519d0(*(undefined4 *)(iVar1 + 8),&local_28,&local_2c);
        FUN_021544c8(*(undefined4 *)(iVar1 + 0xc),0);
        local_34 = (iVar13 + *(short *)(uVar10 * 8 + 0x2171642)) * 0x1000;
        local_30 = (iVar14 + *(short *)(uVar10 * 8 + 0x2171640)) * 0x1000;
        FUN_021519d0(*(undefined4 *)(iVar1 + 0xc),&local_30,&local_34);
      }
      iVar7 = *(int *)(iVar1 + 0x14);
      if (*(int *)(iVar1 + 0x18) != iVar7) {
        *(int *)(iVar1 + 0x18) = iVar7;
        FUN_02023894(*(undefined4 *)(*(int *)(iVar1 + 8) + 4),iVar7,0);
        (**(code **)(**(int **)(*(int *)(*(int *)(iVar1 + 8) + 4) + 0x68) + 0x6c))();
      }
      if (*(int *)(iVar1 + 0x20) != *(int *)(iVar1 + 0x1c)) {
        *(int *)(iVar1 + 0x20) = *(int *)(iVar1 + 0x1c);
        if (*(char *)(iVar11 + 0xb0) == '\0') {
          FUN_02023894(*(undefined4 *)(*(int *)(iVar1 + 0xc) + 4),*(undefined4 *)(iVar1 + 0x20),0);
          (**(code **)(**(int **)(*(int *)(*(int *)(iVar1 + 0xc) + 4) + 0x68) + 0x6c))();
        }
        else if (unaff_r6 == 0) {
          piVar5 = *(int **)(*(int *)(iVar1 + 0x10) + 4);
          (**(code **)(*piVar5 + 0xd8))(piVar5,0);
          piVar5 = *(int **)(*(int *)(iVar1 + 0xc) + 4);
          (**(code **)(*piVar5 + 0xd8))(piVar5,0);
        }
        else {
          if (unaff_r6 < 2) {
            piVar5 = *(int **)(*(int *)(iVar1 + 0x10) + 4);
            (**(code **)(*piVar5 + 0xd8))(piVar5,0);
          }
          else {
            FUN_02023894(*(undefined4 *)(*(int *)(iVar1 + 0x10) + 4),*(int *)(iVar1 + 0x20) + -1,0);
            (**(code **)(**(int **)(*(int *)(*(int *)(iVar1 + 0x10) + 4) + 0x68) + 0x6c))();
            piVar5 = *(int **)(*(int *)(iVar1 + 0x10) + 4);
            (**(code **)(*piVar5 + 0xd8))(piVar5,1);
          }
          piVar5 = *(int **)(*(int *)(iVar1 + 0xc) + 4);
          (**(code **)(*piVar5 + 0xd8))(piVar5,1);
        }
      }
    }
    iVar1 = iVar1 + 0x28;
  }
  return;
}

