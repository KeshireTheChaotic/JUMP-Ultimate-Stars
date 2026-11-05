
int FUN_02175200(undefined4 param_1,undefined4 param_2,int param_3,undefined4 param_4,int param_5)

{
  int iVar1;
  undefined4 uVar2;
  uint uVar3;
  uint uVar4;
  int iVar5;
  int iVar6;
  int iVar7;
  uint uVar8;
  short sVar9;
  int iVar10;
  uint uVar11;
  int iVar12;
  int *piVar13;
  int iVar14;
  uint uVar15;
  uint unaff_r9;
  int *unaff_r10;
  int iVar16;
  bool bVar17;
  uint uStack00000004;
  undefined4 uStack00000028;
  undefined2 uStack0000002c;
  undefined2 uStack0000002e;
  
                    /* JUS-TAG source_file_inferred="BattleAI_Deck.cpp" */
  iVar5 = *(int *)(param_3 + unaff_r9 * 4 + 8);
  if (iVar5 < 0) {
    iVar5 = 0;
  }
  else {
    param_3 = param_3 + iVar5;
    FUN_02175628(unaff_r10[0xc]);
    iVar5 = FUN_02175628();
    iVar5 = *(int *)(*(int *)(*(int *)(*(int *)(iVar5 + 4) + 0x10) + 0x20) + 0x1a8);
    iVar14 = *(int *)(iVar5 + 8);
    if ((unaff_r10[0x2a] & 0x200U) != 0) {
      if (unaff_r10[unaff_r9 + 0xd] == 0) {
        FUN_020329d4();
        iVar6 = FUN_02175648();
        uVar2 = FUN_02175628(iVar14);
        FUN_02174de4(iVar6,uVar2);
        (**(code **)(**(int **)(iVar6 + 4) + 0xd8))(*(int **)(iVar6 + 4),1);
        unaff_r10[unaff_r9 + 0xd] = iVar6;
      }
      else {
        FUN_02028330(*(undefined4 *)(unaff_r10[unaff_r9 + 0xd] + 4));
        (**(code **)(**(int **)(unaff_r10[unaff_r9 + 0xd] + 4) + 0xd8))
                  (*(int **)(unaff_r10[unaff_r9 + 0xd] + 4),1);
      }
      iVar12 = *(int *)(*(int *)(iVar5 + 0x10) + 0x5c);
      iVar6 = (uint)*(byte *)(*unaff_r10 + 0x41) * 0x14 + *(int *)(DAT_0214bd80 + 0x48) +
              (uint)*(byte *)(unaff_r10[1] + 8) * 8;
      iVar10 = (int)*(char *)(iVar6 + 2);
      iVar7 = (int)*(char *)(iVar6 + 3);
      iVar6 = iVar10 * 0x100;
      iVar16 = *(int *)(iVar12 + 0x10) + iVar7 * 0x100;
      iVar1 = FUN_02175670(iVar5);
      if (iVar1 != 0) {
        iVar6 = iVar10 * -0x100;
      }
      iVar1 = *(int *)(iVar12 + 0xc) + iVar6;
      iVar10 = FUN_020836b4(iVar1 + 0x800,iVar16 + -0x400);
      if (((iVar10 == 0) || (iVar1 = FUN_020836b4(iVar1 + -0x800,iVar16 + -0x400), iVar1 == 0)) &&
         (iVar5 = FUN_02175670(iVar5), iVar5 == 0)) {
        iVar6 = -iVar6;
      }
      iVar5 = *(int *)(iVar12 + 0x10);
      piVar13 = *(int **)(*(int *)(unaff_r10[unaff_r9 + 0xd] + 4) + 0x50);
      piVar13[3] = (*(int *)(iVar12 + 0xc) + iVar6 >> 8) << 0xc;
      piVar13[4] = (iVar5 + iVar7 * 0x100 >> 8) << 0xc;
      if (*(byte *)(piVar13 + 9) != (*(byte *)(piVar13 + 9) | 1)) {
        (**(code **)(*piVar13 + 0x18))();
      }
      *(byte *)(piVar13 + 9) = *(byte *)(piVar13 + 9) | 0x31;
      uVar2 = FUN_0217568c(iVar14);
      piVar13 = *(int **)(*(int *)(unaff_r10[unaff_r9 + 0xd] + 4) + 100);
      (**(code **)(*piVar13 + 0x5c))(piVar13,uVar2);
      iVar14 = unaff_r10[unaff_r9 + 0xd];
    }
    iVar5 = FUN_02083ab8();
    iVar5 = BattleCol::Battle_ColObjCreate(*(undefined4 *)(iVar5 + 0xec),iVar14);
    *(int **)(iVar5 + 0x28) = unaff_r10;
    *(code **)(iVar5 + 0x1c) = BattleAI_Deck::BattleAIDeck_CallBackCobjWorkCreate;
    uVar15 = 0;
    *(code **)(iVar5 + 0x20) = FUN_02176404;
    *(code **)(iVar5 + 0x24) = FUN_02176438;
    uVar3 = (uint)*(byte *)(param_3 + 0xc);
    uStack00000004 = 0;
    if (3 < uVar3) {
      uVar3 = 4;
    }
    for (; uVar15 < uVar3; uVar15 = uVar15 + 1 & 0xff) {
      uVar11 = *(uint *)(param_3 + uVar15 * 0x20 + 0xa4) & 0xff;
      if ((uStack00000004 & 1 << uVar11) == 0) {
        uStack00000004 = uStack00000004 | 1 << uVar11;
        iVar14 = BattleCol::Battle_ColObjAddColWork(iVar5,unaff_r9 & 0xffff);
        if (param_5 == 0) {
          uVar11 = *(uint *)(iVar14 + 0x14) | 0x700;
        }
        else {
          uVar11 = *(uint *)(iVar14 + 0x14) | 0xdffff8ff;
        }
        *(uint *)(iVar14 + 0x14) = uVar11;
        iVar6 = *(int *)(iVar14 + 0x1c);
        if ((unaff_r10[0x2a] & 0x200U) != 0) {
          *(byte *)(iVar6 + 0x20) = *(byte *)(iVar6 + 0x20) | 4;
        }
        *(undefined1 *)(iVar6 + 0x22) = 0;
        for (uVar11 = uVar15; uVar11 < uVar3; uVar11 = uVar11 + 1 & 0xff) {
          uVar4 = *(uint *)(param_3 + uVar11 * 0x20 + 0xa4);
          uVar8 = *(uint *)(param_3 + uVar15 * 0x20 + 0xa4) & 0xfff;
          bVar17 = (uVar4 & 0xfff) != uVar8;
          if (!bVar17) {
            uVar8 = uVar4 & 0xf000;
            uVar4 = uVar11 - uVar15;
          }
          if (bVar17 || uVar4 != uVar8 >> 0xc) break;
          iVar1 = param_3 + 0x9c + uVar11 * 0x20;
          *(int *)(iVar6 + (uint)*(byte *)(iVar6 + 0x22) * 4 + 8) = iVar1;
          FUN_0207b25c(iVar14,*(byte *)(iVar6 + 0x22) + 1);
          sVar9 = (short)iVar1;
          FUN_0207b2d0(iVar14,1);
          bVar17 = *(char *)(iVar6 + 0x21) != '\0';
          if (bVar17) {
            sVar9 = -1;
          }
          if (!bVar17) {
            sVar9 = 1;
          }
          uStack00000028._0_2_ = **(short **)(iVar6 + (uint)*(byte *)(iVar6 + 0x22) * 4 + 8) * sVar9
          ;
          uStack00000028._2_2_ =
               *(undefined2 *)(*(int *)(iVar6 + (uint)*(byte *)(iVar6 + 0x22) * 4 + 8) + 2);
          uStack0000002c =
               *(undefined2 *)(*(int *)(iVar6 + (uint)*(byte *)(iVar6 + 0x22) * 4 + 8) + 4);
          uStack0000002e =
               *(undefined2 *)(*(int *)(iVar6 + (uint)*(byte *)(iVar6 + 0x22) * 4 + 8) + 6);
          FUN_0207b22c(iVar14,&uStack00000028,*(undefined1 *)(iVar6 + 0x22));
          *(char *)(iVar6 + 0x22) = *(char *)(iVar6 + 0x22) + '\x01';
        }
      }
    }
  }
  return iVar5;
}

