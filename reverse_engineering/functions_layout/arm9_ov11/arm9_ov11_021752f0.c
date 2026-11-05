
int FUN_021752f0(undefined4 param_1,int param_2,undefined4 param_3,int param_4,int param_5)

{
  int iVar1;
  int iVar2;
  undefined4 uVar3;
  int iVar4;
  uint uVar5;
  uint uVar6;
  uint uVar7;
  short sVar8;
  uint uVar9;
  int unaff_r4;
  int unaff_r5;
  int *piVar10;
  uint uVar11;
  uint unaff_r9;
  int unaff_r10;
  int iVar12;
  bool bVar13;
  uint uStack00000004;
  int iStack00000010;
  undefined4 uStack00000028;
  undefined2 uStack0000002c;
  undefined2 uStack0000002e;
  
                    /* JUS-TAG source_file_inferred="BattleAI_Deck.cpp" */
  iStack00000010 = (int)*(char *)(param_2 + 3);
  iVar4 = param_4 * 0x100;
  iVar12 = *(int *)(unaff_r5 + 0x10) + iStack00000010 * 0x100;
  iVar1 = FUN_02175670();
  if (iVar1 != 0) {
    iVar4 = param_4 * -0x100;
  }
  iVar1 = *(int *)(unaff_r5 + 0xc) + iVar4;
  iVar2 = FUN_020836b4(iVar1 + 0x800,iVar12 + -0x400);
  if (((iVar2 == 0) || (iVar1 = FUN_020836b4(iVar1 + -0x800,iVar12 + -0x400), iVar1 == 0)) &&
     (iVar1 = FUN_02175670(), iVar1 == 0)) {
    iVar4 = -iVar4;
  }
  iVar1 = *(int *)(unaff_r5 + 0x10);
  piVar10 = *(int **)(*(int *)(*(int *)(unaff_r10 + unaff_r9 * 4 + 0x34) + 4) + 0x50);
  piVar10[3] = (*(int *)(unaff_r5 + 0xc) + iVar4 >> 8) << 0xc;
  piVar10[4] = (iVar1 + iStack00000010 * 0x100 >> 8) << 0xc;
  if (*(byte *)(piVar10 + 9) != (*(byte *)(piVar10 + 9) | 1)) {
    (**(code **)(*piVar10 + 0x18))();
  }
  *(byte *)(piVar10 + 9) = *(byte *)(piVar10 + 9) | 0x31;
  uVar3 = FUN_0217568c();
  piVar10 = *(int **)(*(int *)(*(int *)(unaff_r10 + unaff_r9 * 4 + 0x34) + 4) + 100);
  (**(code **)(*piVar10 + 0x5c))(piVar10,uVar3);
  uVar3 = *(undefined4 *)(unaff_r10 + unaff_r9 * 4 + 0x34);
  iVar4 = FUN_02083ab8();
  iVar4 = BattleCol::Battle_ColObjCreate(*(undefined4 *)(iVar4 + 0xec),uVar3);
  *(int *)(iVar4 + 0x28) = unaff_r10;
  *(code **)(iVar4 + 0x1c) = BattleAI_Deck::BattleAIDeck_CallBackCobjWorkCreate;
  uVar11 = 0;
  *(code **)(iVar4 + 0x20) = FUN_02176404;
  *(code **)(iVar4 + 0x24) = FUN_02176438;
  uVar5 = (uint)*(byte *)(unaff_r4 + 0xc);
  uStack00000004 = 0;
  if (3 < uVar5) {
    uVar5 = 4;
  }
  do {
    if (uVar5 <= uVar11) {
      return iVar4;
    }
    uVar9 = *(uint *)(unaff_r4 + uVar11 * 0x20 + 0xa4) & 0xff;
    if ((uStack00000004 & 1 << uVar9) == 0) {
      uStack00000004 = uStack00000004 | 1 << uVar9;
      iVar1 = BattleCol::Battle_ColObjAddColWork(iVar4,unaff_r9 & 0xffff);
      if (param_5 == 0) {
        uVar9 = *(uint *)(iVar1 + 0x14) | 0x700;
      }
      else {
        uVar9 = *(uint *)(iVar1 + 0x14) | 0xdffff8ff;
      }
      *(uint *)(iVar1 + 0x14) = uVar9;
      iVar12 = *(int *)(iVar1 + 0x1c);
      if ((*(uint *)(unaff_r10 + 0xa8) & 0x200) != 0) {
        *(byte *)(iVar12 + 0x20) = *(byte *)(iVar12 + 0x20) | 4;
      }
      *(undefined1 *)(iVar12 + 0x22) = 0;
      for (uVar9 = uVar11; uVar9 < uVar5; uVar9 = uVar9 + 1 & 0xff) {
        uVar6 = *(uint *)(unaff_r4 + uVar9 * 0x20 + 0xa4);
        uVar7 = *(uint *)(unaff_r4 + uVar11 * 0x20 + 0xa4) & 0xfff;
        bVar13 = (uVar6 & 0xfff) != uVar7;
        if (!bVar13) {
          uVar7 = uVar6 & 0xf000;
          uVar6 = uVar9 - uVar11;
        }
        if (bVar13 || uVar6 != uVar7 >> 0xc) break;
        iVar2 = unaff_r4 + 0x9c + uVar9 * 0x20;
        *(int *)(iVar12 + (uint)*(byte *)(iVar12 + 0x22) * 4 + 8) = iVar2;
        FUN_0207b25c(iVar1,*(byte *)(iVar12 + 0x22) + 1);
        sVar8 = (short)iVar2;
        FUN_0207b2d0(iVar1,1);
        bVar13 = *(char *)(iVar12 + 0x21) != '\0';
        if (bVar13) {
          sVar8 = -1;
        }
        if (!bVar13) {
          sVar8 = 1;
        }
        uStack00000028._0_2_ = **(short **)(iVar12 + (uint)*(byte *)(iVar12 + 0x22) * 4 + 8) * sVar8
        ;
        uStack00000028._2_2_ =
             *(undefined2 *)(*(int *)(iVar12 + (uint)*(byte *)(iVar12 + 0x22) * 4 + 8) + 2);
        uStack0000002c =
             *(undefined2 *)(*(int *)(iVar12 + (uint)*(byte *)(iVar12 + 0x22) * 4 + 8) + 4);
        uStack0000002e =
             *(undefined2 *)(*(int *)(iVar12 + (uint)*(byte *)(iVar12 + 0x22) * 4 + 8) + 6);
        FUN_0207b22c(iVar1,&uStack00000028,*(undefined1 *)(iVar12 + 0x22));
        *(char *)(iVar12 + 0x22) = *(char *)(iVar12 + 0x22) + '\x01';
      }
    }
    uVar11 = uVar11 + 1 & 0xff;
  } while( true );
}

