
/* JUS-GAME BattleMapItem::BattleMapLoadItem [source-string] __FILE__="BattleMapItem.cpp"
   __FUNCTION__="BattleMapLoadItem" lines=[229] passed to 1 source-location call(s) */

int BattleMapItem::BattleMapLoadItem
              (int param_1,undefined1 param_2,undefined1 param_3,undefined4 param_4)

{
  char cVar1;
  undefined1 uVar2;
  int iVar3;
  int iVar4;
  undefined4 uVar5;
  int iVar6;
  int *piVar7;
  short *psVar8;
  int iVar9;
  undefined4 uVar10;
  char extraout_r1;
  char extraout_r1_00;
  uint uVar11;
  int iVar12;
  short *psVar13;
  int iVar14;
  bool bVar15;
  undefined1 local_164 [4];
  undefined4 local_160;
  undefined4 local_15c;
  int local_158 [6];
  int local_140 [6];
  undefined1 auStack_128 [11];
  char local_11d;
  char local_11c;
  int local_e8 [48];
  undefined4 uStack_28;
  
  uStack_28 = param_4;
  iVar3 = thunk_FUN_0201a228(0x11e4,s_BattleMapItem_cpp_021725ec,s_BattleMapLoadItem_021725b0,0xe5);
  if (iVar3 != 0) {
    *(undefined4 *)(iVar3 + 0x154) = 0;
    *(undefined4 *)(iVar3 + 0x158) = 0;
    *(undefined4 *)(iVar3 + 0x15c) = 0;
    *(undefined4 *)(iVar3 + 0x160) = 0;
    uVar11 = iVar3 + 0x164;
    do {
      *(undefined4 *)(uVar11 + 8) = 0;
      uVar11 = uVar11 + 0x2c;
    } while (uVar11 < iVar3 + 0x11e4U);
  }
  if (iVar3 == 0) {
    iVar3 = 0;
  }
  else {
    FUN_020517fc(iVar3,0,0x11e4);
    DAT_02172988 = iVar3;
    *(undefined1 *)(iVar3 + 0x84) = param_2;
    *(undefined1 *)(iVar3 + 0x85) = param_3;
    *(int *)(iVar3 + 0x24) = param_1 + 4;
    if (DAT_020afebb == '\0') {
      uVar2 = 0;
    }
    else {
      uVar2 = *(undefined1 *)(param_1 + 1);
    }
    *(undefined1 *)(iVar3 + 0x14c) = uVar2;
    iVar4 = FUN_0203b404();
    DAT_02093c08 = DAT_02093c08 + -1;
    uVar5 = *(undefined4 *)(*(int *)(iVar4 + 0x88) + 4);
    (&DAT_020a16d0)[DAT_02093c08] = DAT_020a0dd0;
    DAT_020a0dd0 = uVar5;
    uVar5 = FUN_020101f4(s_item_item_aar_02172600,0);
    *(undefined4 *)(iVar3 + 0x10) = uVar5;
    iVar4 = FUN_020101f4(*(undefined4 *)(&DAT_02172568 + (uint)**(byte **)(iVar3 + 0x24) * 4),0);
    iVar6 = FUN_021664e0(0x300000);
    (**(code **)(**(int **)(iVar6 + 4) + 0x50))(*(int **)(iVar6 + 4),1);
    (**(code **)(**(int **)(iVar4 + 8) + 0x50))();
    *(int *)(iVar3 + 0x14) = iVar4;
    *(int *)(iVar3 + 4) = iVar6;
    if (*(char *)(iVar3 + 0x84) != '\0') {
      iVar4 = FUN_020101f4(s_item_J_Power_aar_02172610,0);
      iVar6 = FUN_021664e0(0x3000a0);
      (**(code **)(**(int **)(iVar6 + 4) + 0x50))(*(int **)(iVar6 + 4),1);
      (**(code **)(**(int **)(iVar4 + 8) + 0x50))();
      *(int *)(iVar3 + 0x18) = iVar4;
      *(int *)(iVar3 + 8) = iVar6;
    }
    iVar4 = DAT_020afea4;
    if (*(char *)(iVar3 + 0x85) != '\0') {
      thunk_FUN_0207400c(auStack_128,s_item_symbol00_aar_02172624);
      uVar5 = FUN_0200d12c(iVar4,10);
      FUN_0200d12c(uVar5,10);
      local_11d = extraout_r1 + '0';
      FUN_0200d12c(iVar4,10);
      local_11c = extraout_r1_00 + '0';
      iVar4 = FUN_020101f4(auStack_128,0);
      iVar6 = FUN_021664e0(0x3000c0);
      (**(code **)(**(int **)(iVar6 + 4) + 0x50))(*(int **)(iVar6 + 4),1);
      (**(code **)(**(int **)(iVar4 + 8) + 0x50))();
      *(int *)(iVar3 + 0x1c) = iVar4;
      *(int *)(iVar3 + 0xc) = iVar6;
      *(undefined1 *)(iVar3 + 0x86) = 1;
    }
    DAT_020a0dd0 = (&DAT_020a16d0)[DAT_02093c08];
    DAT_02093c08 = DAT_02093c08 + 1;
    iVar4 = 0;
    do {
      iVar6 = iVar4 * 0x2c + iVar3 + 0x164;
      *(int *)(iVar6 + 8) = iVar6;
      FUN_02037b98(iVar3 + 0x154);
      iVar4 = iVar4 + 1;
    } while (iVar4 < 0x60);
    uVar5 = BattlePrmData::Battle_PrmDataInit(2,0);
    *(undefined4 *)(iVar3 + 0x20) = uVar5;
    *(int *)(iVar3 + 0x28) = *(int *)(iVar3 + 0x24) + 0x14;
    iVar4 = *(int *)(iVar3 + 0x24) + 0x20;
    *(int *)(iVar3 + 0x2c) = iVar4;
    *(uint *)(iVar3 + 0x80) = (uint)*(byte *)(param_1 + 1) * 0xc + iVar4;
    if (DAT_020afea0 == 0xc) {
      *(char *)(iVar3 + 0x153) = (char)(DAT_020afea4 << 1) + '\b';
      *(undefined **)(iVar3 + 0x28) = &DAT_02172570;
    }
    else {
      *(undefined1 *)(iVar3 + 0x153) = 0xff;
    }
    iVar4 = 0;
    do {
      iVar6 = FUN_021662c4(iVar3,&local_160,local_164);
      if (iVar6 != 0) {
        uVar5 = FUN_0216646c(iVar3);
        FUN_021657d4(iVar3,uVar5,local_160,local_15c,local_164[0]);
      }
      iVar4 = iVar4 + 1;
    } while (iVar4 < 4);
    piVar7 = (int *)FUN_02033410(s_item_itemprob_ipf_02172638,0,0);
    if (piVar7[7] == 0) {
      (**(code **)(*piVar7 + 0x10))();
    }
    iVar12 = piVar7[7];
    piVar7 = *(int **)(iVar12 + 4);
    psVar8 = (short *)(**(code **)(*piVar7 + 0x2c))(piVar7,0);
    iVar4 = *(int *)(iVar3 + 0x24);
    cVar1 = *(char *)(iVar4 + 1);
    iVar6 = 0;
    do {
      local_158[iVar6] = (int)cVar1 * (int)*(char *)(iVar4 + iVar6 + 4);
      iVar6 = iVar6 + 1;
    } while (iVar6 < 6);
    cVar1 = *(char *)(iVar4 + 0x11);
    iVar6 = 0;
    do {
      local_140[iVar6] = (int)cVar1 * (int)*(char *)(iVar4 + iVar6 + 10) * 100;
      iVar6 = iVar6 + 1;
    } while (iVar6 < 6);
    FUN_020517fc(local_e8,0,0x60);
    iVar4 = 0;
    do {
      iVar6 = 0;
      psVar13 = psVar8;
      do {
        psVar8 = psVar13 + 1;
        local_e8[iVar4 * 0xc + iVar6] = (int)*psVar13;
        iVar6 = iVar6 + 1;
        psVar13 = psVar8;
      } while (iVar6 < 6);
      iVar4 = iVar4 + 1;
    } while (iVar4 < 4);
    iVar4 = 0;
    do {
      iVar6 = 0;
      do {
        iVar9 = iVar4 * 0xc + iVar6;
        piVar7 = local_158 + iVar6;
        iVar14 = iVar6 * 4;
        iVar6 = iVar6 + 1;
        *(int *)(iVar3 + iVar4 * 0x30 + iVar14 + 0x88) =
             (*piVar7 +
             ((100 - *(char *)(*(int *)(iVar3 + 0x24) + 1)) * local_e8[iVar9] * 0x10000 >> 0x10)) *
             0x10000 >> 0x10;
      } while (iVar6 < 6);
      iVar4 = iVar4 + 1;
    } while (iVar4 < 4);
    bVar15 = *(char *)(iVar3 + 0x84) == '\0';
    iVar4 = 0;
    if (!bVar15) {
      iVar4 = DAT_020afea0;
    }
    if (bVar15 || iVar4 == 3) {
      iVar4 = 0;
      do {
        iVar6 = 0;
        do {
          iVar14 = iVar4 * 0x30 + iVar3 + iVar6 * 4;
          iVar6 = iVar6 + 1;
          *(int *)(iVar14 + 0x88) = *(int *)(iVar14 + 0x88) * 100;
        } while (iVar6 < 6);
        iVar4 = iVar4 + 1;
      } while (iVar4 < 4);
    }
    else {
      iVar4 = 0;
      do {
        iVar14 = iVar4 * 0x30 + iVar3;
        iVar6 = 0;
        do {
          iVar9 = iVar14 + iVar6 * 4;
          iVar6 = iVar6 + 1;
          *(int *)(iVar9 + 0x88) =
               *(int *)(iVar9 + 0x88) * (100 - *(char *)(*(int *)(iVar3 + 0x24) + 0x11));
        } while (iVar6 < 6);
        iVar6 = 6;
        do {
          piVar7 = local_158 + iVar6;
          iVar9 = iVar6 * 4;
          iVar6 = iVar6 + 1;
          *(int *)(iVar14 + iVar9 + 0x88) = *piVar7;
        } while (iVar6 < 0xc);
        iVar4 = iVar4 + 1;
      } while (iVar4 < 4);
    }
    (**(code **)(**(int **)(iVar12 + 4) + 0xc))();
    *(undefined2 *)(iVar3 + 0x14e) = *(undefined2 *)(*(int *)(iVar3 + 0x24) + 2);
    uVar5 = (**(code **)(**(int **)(iVar3 + 4) + 8))();
    uVar10 = CommonPaletteAnime::CommonPaletteAnime_Create(uVar5,1,1,3,0x8a);
    *(undefined4 *)(iVar3 + 0x30) = uVar10;
    FUN_021664cc(uVar10,0x4ffd,0x1f);
    uVar10 = CommonPaletteAnime::CommonPaletteAnime_Create(uVar5,0x11,1,4,0x8b);
    *(undefined4 *)(iVar3 + 0x34) = uVar10;
    uVar10 = CommonPaletteAnime::CommonPaletteAnime_Create(uVar5,0x21,1,4,0x8b);
    *(undefined4 *)(iVar3 + 0x38) = uVar10;
    uVar10 = CommonPaletteAnime::CommonPaletteAnime_Create(uVar5,0x31,1,4,0x8b);
    *(undefined4 *)(iVar3 + 0x3c) = uVar10;
    uVar10 = CommonPaletteAnime::CommonPaletteAnime_Create(uVar5,0x41,1,4,0x8b);
    *(undefined4 *)(iVar3 + 0x40) = uVar10;
    uVar10 = CommonPaletteAnime::CommonPaletteAnime_Create(uVar5,0x71,1,4,0x8b);
    *(undefined4 *)(iVar3 + 0x44) = uVar10;
    uVar5 = CommonPaletteAnime::CommonPaletteAnime_Create(uVar5,0x81,1,4,0x8b);
    iVar4 = 1;
    *(undefined4 *)(iVar3 + 0x48) = uVar5;
    do {
      iVar6 = iVar4 * 4;
      iVar4 = iVar4 + 1;
      *(undefined1 *)(*(int *)(iVar3 + iVar6 + 0x30) + 0x16) = 1;
    } while (iVar4 < 7);
    if (*(char *)(iVar3 + 0x84) != '\0') {
      uVar5 = (**(code **)(**(int **)(iVar3 + 8) + 8))();
      uVar10 = CommonPaletteAnime::CommonPaletteAnime_Create(uVar5,1,1,3,0x8a);
      *(undefined4 *)(iVar3 + 0x4c) = uVar10;
      FUN_021664cc(uVar10,0x4ffd,0x1f);
      iVar4 = 8;
      do {
        iVar12 = CommonPaletteAnime::CommonPaletteAnime_Create
                           (uVar5,(iVar4 + -7) * 0x10 + 1U & 0xffff,1,4,0x8b);
        iVar6 = iVar4 * 4;
        iVar4 = iVar4 + 1;
        *(int *)(iVar3 + iVar6 + 0x30) = iVar12;
        *(undefined1 *)(iVar12 + 0x16) = 1;
      } while (iVar4 < 0x13);
    }
    if (*(char *)(iVar3 + 0x85) != '\0') {
      uVar5 = (**(code **)(**(int **)(iVar3 + 0xc) + 8))();
      uVar5 = CommonPaletteAnime::CommonPaletteAnime_Create(uVar5,1,1,3,0x8a);
      *(undefined4 *)(iVar3 + 0x7c) = uVar5;
      FUN_021664cc(uVar5,0x4ffd,0x1f);
    }
    (**(code **)(**(int **)(iVar3 + 0x10) + 0xc))();
    *(undefined4 *)(iVar3 + 0x10) = 0;
  }
  return iVar3;
}

