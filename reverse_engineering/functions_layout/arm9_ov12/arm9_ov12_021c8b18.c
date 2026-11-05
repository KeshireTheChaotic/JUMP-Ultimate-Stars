
/* JUS-CLASS ALTextDS_021d4a2c::vfunc_25 [class-virtual] slot 25 of vtable 021d4a2c (own slot, not
   inherited) */

void ALTextDS_021d4a2c::vfunc_25(int param_1,int param_2)

{
  ushort uVar1;
  ushort uVar2;
  short sVar3;
  uint uVar4;
  int iVar5;
  int *piVar6;
  undefined4 uVar7;
  int iVar8;
  int *piVar9;
  uint uVar10;
  uint uVar11;
  byte bVar12;
  int iVar13;
  uint uVar14;
  short *psVar15;
  int iVar16;
  uint uVar17;
  uint uVar18;
  int iVar19;
  undefined1 auStack_54 [8];
  undefined1 auStack_4c [8];
  int local_44;
  int local_40;
  int local_3c;
  int local_38;
  undefined2 local_34;
  undefined2 local_32;
  undefined2 local_30;
  undefined2 local_2e;
  short local_2c;
  short local_2a;
  
                    /* JUS-TAG source_file_inferred="ALTextDS.cpp" */
  *(undefined1 *)(param_1 + 0x1a5) = 1;
  if (param_2 == 0x20) {
    uVar4 = (**(code **)(**(int **)(param_1 + 0x54) + 0x30))();
    *(short *)(param_1 + 0x104) = *(short *)(param_1 + 0x104) + (short)(uVar4 >> 1);
  }
  else if (param_2 == 0x8140) {
    sVar3 = (**(code **)(**(int **)(param_1 + 0x54) + 0x30))();
    *(short *)(param_1 + 0x104) = *(short *)(param_1 + 0x104) + sVar3;
  }
  else {
    iVar5 = FUN_021cb830(param_1 + 0x40);
    psVar15 = (short *)0x0;
    if (iVar5 == -1) {
      iVar5 = FUN_021cb830(*(int *)(param_1 + 0x54) + 0x1c,param_2);
      if (iVar5 != -1) {
        psVar15 = (short *)(iVar5 * *(int *)(*(int *)(param_1 + 0x54) + 0x20) +
                           *(int *)(*(int *)(param_1 + 0x54) + 0x1c));
      }
    }
    else {
      psVar15 = (short *)(iVar5 * *(int *)(param_1 + 0x44) + *(int *)(param_1 + 0x40));
    }
    if (psVar15 == (short *)0x0) {
      piVar6 = *(int **)(*(int *)(param_1 + 0x54) + 0x4c);
      uVar7 = (**(code **)(*piVar6 + 0x10))(piVar6,param_2);
      piVar6 = (int *)(**(code **)(**(int **)(param_1 + 0x17c) + 0x40))
                                (*(int **)(param_1 + 0x17c),0,&DAT_02093c3c);
      (**(code **)(**(int **)(param_1 + 0x54) + 0x44))(*(int **)(param_1 + 0x54),&local_2c,uVar7);
      local_30 = *(undefined2 *)(param_1 + 0x104);
      iVar5 = (int)local_2c;
      local_2e = *(undefined2 *)(param_1 + 0x106);
      iVar16 = (int)local_2a;
      local_34 = (undefined2)uVar7;
      local_32 = (undefined2)param_2;
      FUN_021c6698(param_1,&local_34);
      uVar17 = (int)*(short *)(param_1 + 0x106) + (*(uint *)(param_1 + 400) & 7);
      uVar4 = (int)*(short *)(param_1 + 0x104) + (*(uint *)(param_1 + 0x18c) & 7);
      if ((*(char *)(param_1 + 0x172) == '\0') &&
         (iVar8 = (**(code **)(**(int **)(*(int *)(param_1 + 0x54) + 0x30) + 0x18))(), iVar8 != 1))
      {
        iVar8 = (**(code **)(**(int **)(*(int *)(param_1 + 0x54) + 0x30) + 0x20))();
        if ((iVar8 == 0x52344c50) && (iVar8 = (**(code **)(*piVar6 + 0x20))(), iVar8 == 0x3247434e))
        {
          piVar9 = (int *)(**(code **)(*piVar6 + 100))();
          uVar7 = (**(code **)(**(int **)(*(int *)(param_1 + 0x54) + 0x30) + 100))();
          (**(code **)(*piVar9 + 0x14))(piVar9,uVar7);
          iVar19 = piVar6[3];
          iVar13 = *(int *)(*(int *)(param_1 + 0x54) + 0x30);
          uVar1 = *(ushort *)(piVar6 + 2);
          iVar8 = *(int *)(iVar13 + 0xc);
          uVar2 = *(ushort *)(iVar13 + 8);
          for (uVar18 = 0; uVar11 = (**(code **)(**(int **)(param_1 + 0x54) + 0x2c))(),
              uVar18 < uVar11; uVar18 = uVar18 + 1) {
            uVar11 = 0;
            while (uVar10 = (**(code **)(**(int **)(param_1 + 0x54) + 0x30))(), uVar11 < uVar10) {
              uVar14 = uVar4 + uVar11;
              uVar10 = (int)(uint)*(byte *)(iVar8 + ((uint)uVar2 * (iVar16 + uVar18) >> 1) +
                                           (iVar5 + uVar11 >> 1)) >> ((iVar5 + uVar11 & 1) << 2) &
                       0xf;
              if (uVar10 == 0) {
                uVar10 = 1;
              }
              uVar11 = uVar11 + 1;
              iVar13 = (uVar14 >> 1 & 3) +
                       ((uVar14 >> 3) + ((uVar17 + uVar18 >> 3) * (uint)uVar1 >> 3)) * 0x20 +
                       (uVar17 + uVar18 & 7) * 4;
              bVar12 = *(byte *)(iVar19 + iVar13);
              if ((uVar14 & 1) == 0) {
                bVar12 = (byte)uVar10 | bVar12 & 0xf0;
              }
              else {
                bVar12 = bVar12 & 0xf | (byte)(uVar10 << 4);
              }
              *(byte *)(iVar19 + iVar13) = bVar12;
            }
          }
        }
        else {
          piVar9 = (int *)(**(code **)(*piVar6 + 100))();
          uVar7 = (**(code **)(**(int **)(*(int *)(param_1 + 0x54) + 0x30) + 100))();
          (**(code **)(*piVar9 + 0x14))(piVar9,uVar7);
          for (uVar18 = 0; uVar11 = (**(code **)(**(int **)(param_1 + 0x54) + 0x2c))(),
              uVar18 < uVar11; uVar18 = uVar18 + 1) {
            for (uVar11 = 0; uVar10 = (**(code **)(**(int **)(param_1 + 0x54) + 0x30))(),
                uVar11 < uVar10; uVar11 = uVar11 + 1) {
              piVar9 = *(int **)(*(int *)(param_1 + 0x54) + 0x30);
              iVar8 = (**(code **)(*piVar9 + 0x2c))(piVar9,iVar5 + uVar11,iVar16 + uVar18);
              if (iVar8 == 0) {
                (**(code **)(*piVar6 + 0x30))(piVar6,uVar4 + uVar11,uVar17 + uVar18,1);
              }
              else {
                (**(code **)(*piVar6 + 0x30))(piVar6,uVar4 + uVar11,uVar17 + uVar18);
              }
            }
          }
        }
      }
      else if ((*(char *)(param_1 + 0x172) == '\0') &&
              (iVar8 = (**(code **)(**(int **)(*(int *)(param_1 + 0x54) + 0x30) + 0x18))(),
              iVar8 == 1)) {
        FUN_021c9464(auStack_54,iVar5,iVar16,iVar5,iVar16);
        (**(code **)(*piVar6 + 0x70))
                  (piVar6,uVar4,uVar17,*(undefined4 *)(*(int *)(param_1 + 0x54) + 0x30),auStack_54);
        for (uVar18 = 0; uVar11 = (**(code **)(**(int **)(param_1 + 0x54) + 0x2c))(),
            uVar18 < uVar11; uVar18 = uVar18 + 1) {
          for (uVar11 = 0; uVar10 = (**(code **)(**(int **)(param_1 + 0x54) + 0x30))(),
              uVar11 < uVar10; uVar11 = uVar11 + 1) {
            piVar9 = *(int **)(*(int *)(param_1 + 0x54) + 0x30);
            iVar8 = (**(code **)(*piVar9 + 0x2c))(piVar9,iVar5 + uVar11,iVar16 + uVar18);
            (**(code **)(*piVar6 + 0x30))(piVar6,uVar4 + uVar11,uVar17 + uVar18,iVar8 + 1);
          }
        }
      }
      else {
        iVar8 = (**(code **)(**(int **)(*(int *)(param_1 + 0x54) + 0x30) + 0x20))();
        if ((iVar8 == 0x52344c50) && (iVar8 = (**(code **)(*piVar6 + 0x20))(), iVar8 == 0x3247434e))
        {
          piVar9 = (int *)(**(code **)(*piVar6 + 100))();
          uVar7 = (**(code **)(**(int **)(*(int *)(param_1 + 0x54) + 0x30) + 100))();
          (**(code **)(*piVar9 + 0x14))(piVar9,uVar7);
          iVar19 = piVar6[3];
          iVar13 = *(int *)(*(int *)(param_1 + 0x54) + 0x30);
          uVar1 = *(ushort *)(piVar6 + 2);
          iVar8 = *(int *)(iVar13 + 0xc);
          uVar2 = *(ushort *)(iVar13 + 8);
          for (uVar18 = 0; uVar11 = (**(code **)(**(int **)(param_1 + 0x54) + 0x2c))(),
              uVar18 < uVar11; uVar18 = uVar18 + 1) {
            uVar11 = 0;
            while (uVar10 = (**(code **)(**(int **)(param_1 + 0x54) + 0x30))(), uVar11 < uVar10) {
              uVar14 = uVar4 + uVar11;
              uVar10 = (int)(uint)*(byte *)(iVar8 + ((uint)uVar2 * (iVar16 + uVar18) >> 1) +
                                           (iVar5 + uVar11 >> 1)) >> ((iVar5 + uVar11 & 1) << 2) &
                       0xf;
              uVar11 = uVar11 + 1;
              iVar13 = (uVar14 >> 1 & 3) +
                       ((uVar14 >> 3) + ((uVar17 + uVar18 >> 3) * (uint)uVar1 >> 3)) * 0x20 +
                       (uVar17 + uVar18 & 7) * 4;
              bVar12 = *(byte *)(iVar19 + iVar13);
              if ((uVar14 & 1) == 0) {
                bVar12 = (byte)uVar10 | bVar12 & 0xf0;
              }
              else {
                bVar12 = bVar12 & 0xf | (byte)(uVar10 << 4);
              }
              *(byte *)(iVar19 + iVar13) = bVar12;
            }
          }
        }
        else {
          iVar8 = (**(code **)(**(int **)(param_1 + 0x54) + 0x30))();
          iVar13 = (**(code **)(**(int **)(param_1 + 0x54) + 0x2c))();
          FUN_021c9464(auStack_4c,iVar5,iVar16,iVar5 + iVar8,iVar16 + iVar13);
          (**(code **)(*piVar6 + 0x70))
                    (piVar6,uVar4,uVar17,*(undefined4 *)(*(int *)(param_1 + 0x54) + 0x30),auStack_4c
                    );
        }
      }
      (**(code **)(**(int **)(param_1 + 0x17c) + 0x4c))(*(int **)(param_1 + 0x17c),piVar6);
      if (*(int *)(param_1 + 0x194) != 0) {
        iVar5 = *(int *)(param_1 + 0xfc);
        for (uVar18 = uVar17 >> 3; iVar16 = (**(code **)(**(int **)(param_1 + 0x54) + 0x2c))(),
            uVar18 < uVar17 + iVar16 + 7 >> 3; uVar18 = uVar18 + 1) {
          for (uVar11 = uVar4 >> 3; iVar16 = (**(code **)(**(int **)(param_1 + 0x54) + 0x30))(),
              uVar11 < uVar4 + iVar16 + 7 >> 3; uVar11 = uVar11 + 1) {
            *(undefined1 *)(uVar11 + uVar18 * (iVar5 + 7U >> 3) + *(int *)(param_1 + 0x194)) =
                 *(undefined1 *)(param_1 + 0x174);
          }
        }
      }
      piVar6 = *(int **)(*(int *)(param_1 + 0x54) + 0x4c);
      iVar5 = (**(code **)(*piVar6 + 0x14))(piVar6,param_2);
      if (iVar5 == 0) {
        sVar3 = (**(code **)(**(int **)(param_1 + 0x54) + 0x30))();
        sVar3 = *(short *)(param_1 + 0x104) + sVar3;
      }
      else {
        uVar4 = (**(code **)(**(int **)(param_1 + 0x54) + 0x30))();
        sVar3 = *(short *)(param_1 + 0x104) + (short)(uVar4 >> 1);
      }
      *(short *)(param_1 + 0x104) = sVar3;
      *(undefined1 *)(param_1 + 0x182) = 0;
    }
    else {
      piVar6 = (int *)(**(code **)(**(int **)(psVar15 + 4) + 0x18))();
      FUN_02027db0(piVar6,*(undefined4 *)(*(int *)(param_1 + 0x38) + 0x34));
      (**(code **)(*piVar6 + 0xd4))(piVar6,*(undefined4 *)(param_1 + 0x38));
      if ((char)psVar15[7] == '\0') {
        uVar4 = (**(code **)(**(int **)(param_1 + 0x54) + 0x2c))();
        local_44 = ((int)*(short *)(param_1 + 0x106) + (uVar4 >> 1)) * 0x1000;
        uVar4 = (**(code **)(**(int **)(param_1 + 0x54) + 0x30))();
        local_40 = ((int)*(short *)(param_1 + 0x104) + (uVar4 >> 1)) * 0x1000;
        FUN_021b8a58(piVar6,&local_40,&local_44);
        sVar3 = (**(code **)(**(int **)(param_1 + 0x54) + 0x30))();
      }
      else {
        local_3c = ((int)*(short *)(param_1 + 0x106) - (int)psVar15[1]) * 0x1000;
        local_38 = ((int)*(short *)(param_1 + 0x104) - (int)*psVar15) * 0x1000;
        FUN_021b8a58(piVar6,&local_38,&local_3c);
        sVar3 = FUN_021ad69c(psVar15);
      }
      *(short *)(param_1 + 0x104) = *(short *)(param_1 + 0x104) + sVar3;
      (**(code **)(**(int **)(param_1 + 0x38) + 0xb4))(*(int **)(param_1 + 0x38),piVar6);
      (**(code **)(*piVar6 + 0xc))();
      (**(code **)(*piVar6 + 0xd8))(piVar6,1);
    }
  }
  return;
}

