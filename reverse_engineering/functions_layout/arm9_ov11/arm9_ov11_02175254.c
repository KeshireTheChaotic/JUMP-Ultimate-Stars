
int FUN_02175254(int param_1)

{
  int iVar1;
  undefined4 uVar2;
  uint uVar3;
  uint uVar4;
  int iVar5;
  int iVar6;
  uint uVar7;
  short sVar8;
  int iVar9;
  uint uVar10;
  int unaff_r4;
  int iVar11;
  int *piVar12;
  int unaff_r7;
  uint uVar13;
  uint unaff_r9;
  int *unaff_r10;
  int iVar14;
  bool bVar15;
  int in_stack_00000000;
  uint uStack00000004;
  undefined4 uStack00000028;
  undefined2 uStack0000002c;
  undefined2 uStack0000002e;
  
                    /* JUS-TAG source_file_inferred="BattleAI_Deck.cpp" */
  FUN_02028330(*(undefined4 *)(param_1 + 4));
  (**(code **)(**(int **)(unaff_r10[unaff_r9 + 0xd] + 4) + 0xd8))
            (*(int **)(unaff_r10[unaff_r9 + 0xd] + 4),1);
  iVar11 = *(int *)(*(int *)(unaff_r7 + 0x10) + 0x5c);
  iVar5 = (uint)*(byte *)(*unaff_r10 + 0x41) * 0x14 + *(int *)(DAT_0214bd80 + 0x48) +
          (uint)*(byte *)(unaff_r10[1] + 8) * 8;
  iVar9 = (int)*(char *)(iVar5 + 2);
  iVar6 = (int)*(char *)(iVar5 + 3);
  iVar5 = iVar9 * 0x100;
  iVar14 = *(int *)(iVar11 + 0x10) + iVar6 * 0x100;
  iVar1 = FUN_02175670();
  if (iVar1 != 0) {
    iVar5 = iVar9 * -0x100;
  }
  iVar1 = *(int *)(iVar11 + 0xc) + iVar5;
  iVar9 = FUN_020836b4(iVar1 + 0x800,iVar14 + -0x400);
  if (((iVar9 == 0) || (iVar1 = FUN_020836b4(iVar1 + -0x800,iVar14 + -0x400), iVar1 == 0)) &&
     (iVar1 = FUN_02175670(), iVar1 == 0)) {
    iVar5 = -iVar5;
  }
  iVar1 = *(int *)(iVar11 + 0x10);
  piVar12 = *(int **)(*(int *)(unaff_r10[unaff_r9 + 0xd] + 4) + 0x50);
  piVar12[3] = (*(int *)(iVar11 + 0xc) + iVar5 >> 8) << 0xc;
  piVar12[4] = (iVar1 + iVar6 * 0x100 >> 8) << 0xc;
  if (*(byte *)(piVar12 + 9) != (*(byte *)(piVar12 + 9) | 1)) {
    (**(code **)(*piVar12 + 0x18))();
  }
  *(byte *)(piVar12 + 9) = *(byte *)(piVar12 + 9) | 0x31;
  uVar2 = FUN_0217568c();
  piVar12 = *(int **)(*(int *)(unaff_r10[unaff_r9 + 0xd] + 4) + 100);
  (**(code **)(*piVar12 + 0x5c))(piVar12,uVar2);
  iVar1 = unaff_r10[unaff_r9 + 0xd];
  iVar5 = FUN_02083ab8();
  iVar5 = BattleCol::Battle_ColObjCreate(*(undefined4 *)(iVar5 + 0xec),iVar1);
  *(int **)(iVar5 + 0x28) = unaff_r10;
  *(code **)(iVar5 + 0x1c) = BattleAI_Deck::BattleAIDeck_CallBackCobjWorkCreate;
  uVar13 = 0;
  *(code **)(iVar5 + 0x20) = FUN_02176404;
  *(code **)(iVar5 + 0x24) = FUN_02176438;
  uVar3 = (uint)*(byte *)(unaff_r4 + 0xc);
  uStack00000004 = 0;
  if (3 < uVar3) {
    uVar3 = 4;
  }
  do {
    if (uVar3 <= uVar13) {
      return iVar5;
    }
    uVar10 = *(uint *)(unaff_r4 + uVar13 * 0x20 + 0xa4) & 0xff;
    if ((uStack00000004 & 1 << uVar10) == 0) {
      uStack00000004 = uStack00000004 | 1 << uVar10;
      iVar1 = BattleCol::Battle_ColObjAddColWork(iVar5,unaff_r9 & 0xffff);
      if (in_stack_00000000 == 0) {
        uVar10 = *(uint *)(iVar1 + 0x14) | 0x700;
      }
      else {
        uVar10 = *(uint *)(iVar1 + 0x14) | 0xdffff8ff;
      }
      *(uint *)(iVar1 + 0x14) = uVar10;
      iVar6 = *(int *)(iVar1 + 0x1c);
      if ((unaff_r10[0x2a] & 0x200U) != 0) {
        *(byte *)(iVar6 + 0x20) = *(byte *)(iVar6 + 0x20) | 4;
      }
      *(undefined1 *)(iVar6 + 0x22) = 0;
      for (uVar10 = uVar13; uVar10 < uVar3; uVar10 = uVar10 + 1 & 0xff) {
        uVar4 = *(uint *)(unaff_r4 + uVar10 * 0x20 + 0xa4);
        uVar7 = *(uint *)(unaff_r4 + uVar13 * 0x20 + 0xa4) & 0xfff;
        bVar15 = (uVar4 & 0xfff) != uVar7;
        if (!bVar15) {
          uVar7 = uVar4 & 0xf000;
          uVar4 = uVar10 - uVar13;
        }
        if (bVar15 || uVar4 != uVar7 >> 0xc) break;
        iVar9 = unaff_r4 + 0x9c + uVar10 * 0x20;
        *(int *)(iVar6 + (uint)*(byte *)(iVar6 + 0x22) * 4 + 8) = iVar9;
        FUN_0207b25c(iVar1,*(byte *)(iVar6 + 0x22) + 1);
        sVar8 = (short)iVar9;
        FUN_0207b2d0(iVar1,1);
        bVar15 = *(char *)(iVar6 + 0x21) != '\0';
        if (bVar15) {
          sVar8 = -1;
        }
        if (!bVar15) {
          sVar8 = 1;
        }
        uStack00000028._0_2_ = **(short **)(iVar6 + (uint)*(byte *)(iVar6 + 0x22) * 4 + 8) * sVar8;
        uStack00000028._2_2_ =
             *(undefined2 *)(*(int *)(iVar6 + (uint)*(byte *)(iVar6 + 0x22) * 4 + 8) + 2);
        uStack0000002c =
             *(undefined2 *)(*(int *)(iVar6 + (uint)*(byte *)(iVar6 + 0x22) * 4 + 8) + 4);
        uStack0000002e =
             *(undefined2 *)(*(int *)(iVar6 + (uint)*(byte *)(iVar6 + 0x22) * 4 + 8) + 6);
        FUN_0207b22c(iVar1,&uStack00000028,*(undefined1 *)(iVar6 + 0x22));
        *(char *)(iVar6 + 0x22) = *(char *)(iVar6 + 0x22) + '\x01';
      }
    }
    uVar13 = uVar13 + 1 & 0xff;
  } while( true );
}

