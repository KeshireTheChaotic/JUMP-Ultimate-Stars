
int FUN_021751d0(int *param_1,char param_2,int param_3)

{
  uint uVar1;
  int iVar2;
  int iVar3;
  undefined4 uVar4;
  uint uVar5;
  uint uVar6;
  int iVar7;
  int iVar8;
  uint uVar9;
  short sVar10;
  int iVar11;
  int iVar12;
  uint uVar13;
  int iVar14;
  int *piVar15;
  int iVar16;
  uint uVar17;
  int iVar18;
  bool bVar19;
  uint uStack_2c;
  short sStack_8;
  undefined2 uStack_6;
  undefined2 uStack_4;
  undefined2 uStack_2;
  
                    /* JUS-TAG source_file_inferred="BattleAI_Deck.cpp" */
  uVar1 = FUN_021733b4((int)param_2);
  iVar11 = param_1[3];
  if (iVar11 == 0) {
    iVar2 = 0;
  }
  else {
    iVar2 = *(int *)(iVar11 + uVar1 * 4 + 8);
    if (iVar2 < 0) {
      iVar2 = 0;
    }
    else {
      iVar11 = iVar11 + iVar2;
      FUN_02175628(param_1[0xc]);
      iVar2 = FUN_02175628();
      iVar2 = *(int *)(*(int *)(*(int *)(*(int *)(iVar2 + 4) + 0x10) + 0x20) + 0x1a8);
      iVar16 = *(int *)(iVar2 + 8);
      if ((param_1[0x2a] & 0x200U) != 0) {
        if (param_1[uVar1 + 0xd] == 0) {
          FUN_020329d4();
          iVar7 = FUN_02175648();
          uVar4 = FUN_02175628(iVar16);
          FUN_02174de4(iVar7,uVar4);
          (**(code **)(**(int **)(iVar7 + 4) + 0xd8))(*(int **)(iVar7 + 4),1);
          param_1[uVar1 + 0xd] = iVar7;
        }
        else {
          FUN_02028330(*(undefined4 *)(param_1[uVar1 + 0xd] + 4));
          (**(code **)(**(int **)(param_1[uVar1 + 0xd] + 4) + 0xd8))
                    (*(int **)(param_1[uVar1 + 0xd] + 4),1);
        }
        iVar14 = *(int *)(*(int *)(iVar2 + 0x10) + 0x5c);
        iVar7 = (uint)*(byte *)(*param_1 + 0x41) * 0x14 + *(int *)(DAT_0214bd80 + 0x48) +
                (uint)*(byte *)(param_1[1] + 8) * 8;
        iVar12 = (int)*(char *)(iVar7 + 2);
        iVar8 = (int)*(char *)(iVar7 + 3);
        iVar7 = iVar12 * 0x100;
        iVar18 = *(int *)(iVar14 + 0x10) + iVar8 * 0x100;
        iVar3 = FUN_02175670(iVar2);
        if (iVar3 != 0) {
          iVar7 = iVar12 * -0x100;
        }
        iVar3 = *(int *)(iVar14 + 0xc) + iVar7;
        iVar12 = FUN_020836b4(iVar3 + 0x800,iVar18 + -0x400);
        if (((iVar12 == 0) || (iVar3 = FUN_020836b4(iVar3 + -0x800,iVar18 + -0x400), iVar3 == 0)) &&
           (iVar2 = FUN_02175670(iVar2), iVar2 == 0)) {
          iVar7 = -iVar7;
        }
        iVar2 = *(int *)(iVar14 + 0x10);
        piVar15 = *(int **)(*(int *)(param_1[uVar1 + 0xd] + 4) + 0x50);
        piVar15[3] = (*(int *)(iVar14 + 0xc) + iVar7 >> 8) << 0xc;
        piVar15[4] = (iVar2 + iVar8 * 0x100 >> 8) << 0xc;
        if (*(byte *)(piVar15 + 9) != (*(byte *)(piVar15 + 9) | 1)) {
          (**(code **)(*piVar15 + 0x18))();
        }
        *(byte *)(piVar15 + 9) = *(byte *)(piVar15 + 9) | 0x31;
        uVar4 = FUN_0217568c(iVar16);
        piVar15 = *(int **)(*(int *)(param_1[uVar1 + 0xd] + 4) + 100);
        (**(code **)(*piVar15 + 0x5c))(piVar15,uVar4);
        iVar16 = param_1[uVar1 + 0xd];
      }
      iVar2 = FUN_02083ab8();
      iVar2 = BattleCol::Battle_ColObjCreate(*(undefined4 *)(iVar2 + 0xec),iVar16);
      *(int **)(iVar2 + 0x28) = param_1;
      *(code **)(iVar2 + 0x1c) = BattleAI_Deck::BattleAIDeck_CallBackCobjWorkCreate;
      uVar17 = 0;
      *(code **)(iVar2 + 0x20) = FUN_02176404;
      *(code **)(iVar2 + 0x24) = FUN_02176438;
      uVar5 = (uint)*(byte *)(iVar11 + 0xc);
      uStack_2c = 0;
      if (3 < uVar5) {
        uVar5 = 4;
      }
      for (; uVar17 < uVar5; uVar17 = uVar17 + 1 & 0xff) {
        uVar13 = *(uint *)(iVar11 + uVar17 * 0x20 + 0xa4) & 0xff;
        if ((uStack_2c & 1 << uVar13) == 0) {
          uStack_2c = uStack_2c | 1 << uVar13;
          iVar16 = BattleCol::Battle_ColObjAddColWork(iVar2,uVar1 & 0xffff);
          if (param_3 == 0) {
            uVar13 = *(uint *)(iVar16 + 0x14) | 0x700;
          }
          else {
            uVar13 = *(uint *)(iVar16 + 0x14) | 0xdffff8ff;
          }
          *(uint *)(iVar16 + 0x14) = uVar13;
          iVar7 = *(int *)(iVar16 + 0x1c);
          if ((param_1[0x2a] & 0x200U) != 0) {
            *(byte *)(iVar7 + 0x20) = *(byte *)(iVar7 + 0x20) | 4;
          }
          *(undefined1 *)(iVar7 + 0x22) = 0;
          for (uVar13 = uVar17; uVar13 < uVar5; uVar13 = uVar13 + 1 & 0xff) {
            uVar6 = *(uint *)(iVar11 + uVar13 * 0x20 + 0xa4);
            uVar9 = *(uint *)(iVar11 + uVar17 * 0x20 + 0xa4) & 0xfff;
            bVar19 = (uVar6 & 0xfff) != uVar9;
            if (!bVar19) {
              uVar9 = uVar6 & 0xf000;
              uVar6 = uVar13 - uVar17;
            }
            if (bVar19 || uVar6 != uVar9 >> 0xc) break;
            iVar3 = iVar11 + 0x9c + uVar13 * 0x20;
            *(int *)(iVar7 + (uint)*(byte *)(iVar7 + 0x22) * 4 + 8) = iVar3;
            FUN_0207b25c(iVar16,*(byte *)(iVar7 + 0x22) + 1);
            sVar10 = (short)iVar3;
            FUN_0207b2d0(iVar16,1);
            bVar19 = *(char *)(iVar7 + 0x21) != '\0';
            if (bVar19) {
              sVar10 = -1;
            }
            if (!bVar19) {
              sVar10 = 1;
            }
            sStack_8 = **(short **)(iVar7 + (uint)*(byte *)(iVar7 + 0x22) * 4 + 8) * sVar10;
            uStack_6 = *(undefined2 *)(*(int *)(iVar7 + (uint)*(byte *)(iVar7 + 0x22) * 4 + 8) + 2);
            uStack_4 = *(undefined2 *)(*(int *)(iVar7 + (uint)*(byte *)(iVar7 + 0x22) * 4 + 8) + 4);
            uStack_2 = *(undefined2 *)(*(int *)(iVar7 + (uint)*(byte *)(iVar7 + 0x22) * 4 + 8) + 6);
            FUN_0207b22c(iVar16,&sStack_8,*(undefined1 *)(iVar7 + 0x22));
            *(char *)(iVar7 + 0x22) = *(char *)(iVar7 + 0x22) + '\x01';
          }
        }
      }
    }
  }
  return iVar2;
}

