
undefined4 FUN_02161d6c(int param_1,undefined4 param_2,char *param_3,undefined4 param_4)

{
  int *piVar1;
  undefined2 *puVar2;
  ushort uVar3;
  char cVar4;
  char cVar5;
  ushort uVar6;
  bool bVar7;
  byte bVar8;
  uint uVar9;
  uint uVar10;
  undefined4 uVar11;
  int iVar12;
  int iVar13;
  undefined4 uVar14;
  int extraout_r1;
  byte *pbVar15;
  byte *pbVar16;
  uint uVar17;
  uint uVar18;
  bool bVar19;
  int local_5a8 [256];
  ushort local_1a8 [128];
  byte local_a8 [20];
  undefined2 local_94 [16];
  undefined1 local_74;
  undefined1 local_73;
  undefined1 local_71;
  undefined2 local_70;
  undefined2 local_6e;
  undefined4 local_6c;
  undefined1 auStack_68 [64];
  undefined4 uStack_28;
  
  pbVar15 = local_a8;
  uStack_28 = param_4;
  uVar9 = func_0x021bdd90();
  bVar7 = false;
  uVar10 = FUN_02074294(param_3);
  if (uVar9 == uVar10) {
    FUN_02051890(param_3,local_1a8,uVar9 << 1);
    for (uVar10 = 0; uVar10 < uVar9; uVar10 = uVar10 + 1) {
      local_1a8[uVar10] = local_1a8[uVar10] << 8 | local_1a8[uVar10] >> 8;
      uVar3 = local_1a8[uVar10];
      if (uVar3 == 0x8377) {
        local_1a8[uVar10] = 0x82d6;
      }
      else if (uVar3 == 0x8378) {
        local_1a8[uVar10] = 0x82d7;
      }
      else if (uVar3 == 0x8379) {
        local_1a8[uVar10] = 0x82d8;
      }
      else {
        uVar6 = 0x8268;
        if (uVar3 != 0x8268) {
          uVar6 = 0x828c;
        }
        if (uVar3 != 0x8268 && uVar3 != uVar6) {
          if (uVar3 == 0x817e) {
            local_1a8[uVar10] = 0x8277;
          }
          else if (uVar3 == 0x819d) {
            local_1a8[uVar10] = 0x8197;
          }
          else if (uVar3 == 0x838a) {
            local_1a8[uVar10] = 0x82e8;
          }
          else if ((ushort)(uVar3 + 0x7ebd) < 2) {
            local_1a8[uVar10] = 0x8141;
          }
          else if (uVar3 == 0x817c) {
            local_1a8[uVar10] = 0x815b;
          }
          else {
            uVar6 = 0x8183;
            if (uVar3 != 0x8183) {
              uVar6 = 0x8169;
            }
            if (uVar3 != 0x8183 && uVar3 != uVar6) {
              if (uVar3 == 0x815e) {
                local_1a8[uVar10] = 0x836d;
              }
            }
            else {
              local_1a8[uVar10] = 0x82ad;
            }
          }
        }
        else {
          local_1a8[uVar10] = 0x8250;
        }
      }
      local_1a8[uVar10] = local_1a8[uVar10] << 8 | local_1a8[uVar10] >> 8;
    }
    FUN_02051890(local_1a8,param_3,uVar9 << 1);
    for (uVar10 = 0; uVar10 < uVar9; uVar10 = uVar10 + 1) {
      for (uVar17 = 0; uVar17 < 0x10; uVar17 = uVar17 + 1 & 0xff) {
        iVar12 = *(int *)(uVar17 * 4 + 0x21d4324);
        for (uVar18 = 0; pbVar16 = pbVar15, uVar18 < 0x10; uVar18 = uVar18 + 1 & 0xff) {
          cVar4 = *(char *)(iVar12 + uVar18 * 2);
          cVar5 = *param_3;
          bVar19 = cVar5 == cVar4;
          if (bVar19) {
            cVar4 = *(char *)(iVar12 + uVar18 * 2 + 1);
            cVar5 = param_3[1];
          }
          if (bVar19 && cVar5 == cVar4) {
            bVar7 = true;
            pbVar16 = pbVar15 + 1;
            *pbVar15 = (char)uVar18 + (char)uVar17 * '\x10';
            uVar17 = 0x10;
            break;
          }
        }
        pbVar15 = pbVar16;
      }
      if (!bVar7) {
        return 0;
      }
      param_3 = param_3 + 2;
    }
    iVar12 = 0;
    pbVar15 = local_a8;
    for (uVar10 = 0; uVar10 < uVar9; uVar10 = uVar10 + 1) {
      iVar12 = iVar12 + (uint)*pbVar15;
      pbVar15 = pbVar15 + 1;
    }
    iVar12 = FUN_02030e88(iVar12);
    uVar10 = 0;
    do {
      uVar11 = FUN_02031070(*(undefined4 *)(iVar12 + 4));
      FUN_0200d338(uVar11,uVar9);
      iVar13 = 0xff - uVar10;
      uVar10 = uVar10 + 1;
      local_5a8[iVar13] = extraout_r1;
    } while (uVar10 < 0x100);
    uVar10 = 0;
    do {
      piVar1 = local_5a8 + uVar10;
      iVar13 = local_5a8[uVar10 + 1];
      bVar8 = local_a8[*piVar1];
      uVar10 = uVar10 + 2;
      local_a8[*piVar1] = local_a8[iVar13];
      local_a8[iVar13] = bVar8;
    } while (uVar10 < 0x100);
    FUN_02030ebc(iVar12);
    iVar12 = FUN_02030e88(0x56a9ef13);
    pbVar15 = local_a8;
    for (uVar10 = 0; uVar10 < uVar9; uVar10 = uVar10 + 1) {
      bVar8 = FUN_02031070(*(undefined4 *)(iVar12 + 4));
      *pbVar15 = *pbVar15 ^ bVar8;
      pbVar15 = pbVar15 + 1;
    }
    FUN_02030ebc(iVar12);
    iVar12 = 0;
    do {
      iVar13 = iVar12 * 2;
      iVar12 = iVar12 + 1;
      *(undefined2 *)(param_1 + iVar13) = *(undefined2 *)(local_a8 + iVar13);
    } while (iVar12 < 10);
    *(undefined1 *)(param_1 + 0x34) = local_74;
    iVar12 = 0;
    *(undefined1 *)(param_1 + 0x35) = local_73;
    *(undefined1 *)(param_1 + 0x36) = 6;
    *(undefined1 *)(param_1 + 0x37) = local_71;
    *(undefined2 *)(param_1 + 0x38) = local_70;
    *(undefined2 *)(param_1 + 0x3a) = local_6e;
    *(undefined4 *)(param_1 + 0x3c) = local_6c;
    do {
      puVar2 = local_94 + iVar12;
      iVar13 = iVar12 * 2;
      iVar12 = iVar12 + 1;
      *(undefined2 *)(param_1 + iVar13 + 0x14) = *puVar2;
    } while (iVar12 < 0x10);
    FUN_02051890(auStack_68,param_2,0x40);
    uVar11 = LocationData::LocationData_Create();
    uVar9 = FUN_02075670();
    if (*(byte *)(param_1 + 0x35) < uVar9) {
      if (*(ushort *)(param_1 + 0x38) < 9999) {
        if (*(ushort *)(param_1 + 0x3a) < 9999) {
          if (*(ushort *)(param_1 + 0x38) < *(ushort *)(param_1 + 0x3a)) {
            FUN_02075648(uVar11);
            bVar7 = false;
          }
          else if (*(byte *)(param_1 + 0x34) < 0x51) {
            FUN_02075648(uVar11);
            bVar7 = true;
          }
          else {
            bVar7 = false;
          }
        }
        else {
          FUN_02075648(uVar11);
          bVar7 = false;
        }
      }
      else {
        FUN_02075648(uVar11);
        bVar7 = false;
      }
    }
    else {
      FUN_02075648(uVar11);
      bVar7 = false;
    }
    uVar11 = ComicDeck::ComicDeckCreate(1,1);
    uVar14 = FUN_02076908();
    FUN_020769cc(uVar14,param_2);
    uVar9 = FUN_0207879c(uVar14);
    if (((uVar9 & 0x1f) == 0) && (iVar12 = FUN_02078814(uVar14,param_2), iVar12 != 0)) {
      FUN_02076bbc(uVar14,param_2);
      FUN_0207698c(uVar14);
      FUN_020763e0(uVar11);
      bVar19 = true;
    }
    else {
      FUN_0207698c(uVar14);
      FUN_020763e0(uVar11);
      bVar19 = false;
    }
    if (bVar7 && bVar19) {
      uVar11 = 1;
    }
    else {
      uVar11 = 0;
    }
  }
  else {
    uVar11 = 0;
  }
  return uVar11;
}

