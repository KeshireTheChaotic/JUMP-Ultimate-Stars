
undefined4 FUN_0215818c(int param_1,int param_2,int param_3)

{
  char cVar1;
  byte bVar2;
  undefined4 uVar3;
  int *piVar4;
  uint uVar5;
  undefined4 uVar6;
  byte *pbVar7;
  int iVar8;
  undefined4 uVar9;
  short *psVar10;
  undefined2 *puVar11;
  undefined1 *puVar12;
  uint uVar13;
  undefined4 uVar14;
  short *psVar15;
  undefined2 *puVar16;
  undefined1 *puVar17;
  byte *pbVar18;
  undefined4 *puVar19;
  int iVar20;
  int iVar21;
  undefined4 *puVar22;
  undefined4 *puVar23;
  undefined4 *puVar24;
  int iVar25;
  byte abStack_558 [4];
  int local_554 [4];
  int local_544;
  undefined1 auStack_540 [64];
  int local_500;
  undefined4 local_4fc [98];
  undefined4 local_374 [12];
  undefined4 local_344;
  undefined4 local_340;
  undefined4 uStack_33c;
  undefined4 uStack_338;
  undefined4 uStack_334;
  undefined4 local_330 [10];
  undefined1 auStack_308 [256];
  undefined4 local_208 [14];
  undefined4 local_1d0;
  undefined4 uStack_1cc;
  undefined4 uStack_1c8;
  undefined4 uStack_1c4;
  undefined4 local_1c0;
  undefined4 uStack_1bc;
  undefined4 local_1b8;
  byte *local_1b4;
  undefined1 auStack_1b0 [14];
  short asStack_1a2 [4];
  short asStack_19a [5];
  undefined2 auStack_190 [84];
  undefined2 auStack_e8 [14];
  undefined2 auStack_cc [14];
  undefined2 auStack_b0 [14];
  short local_94;
  undefined2 local_92;
  undefined2 local_90;
  undefined2 local_8e;
  undefined4 local_8c;
  undefined4 uStack_88;
  undefined4 uStack_84;
  undefined4 uStack_80;
  undefined2 auStack_7c [4];
  undefined2 auStack_74 [4];
  undefined2 auStack_6c [4];
  undefined4 local_64 [10];
  undefined1 local_3c;
  undefined1 local_3b;
  undefined1 auStack_3a [12];
  undefined1 local_2e;
  undefined1 local_2d;
  undefined1 local_2c;
  undefined1 local_2b;
  undefined2 local_2a;
  undefined1 local_28;
  undefined1 local_27;
  undefined1 local_26;
  undefined1 local_25;
  
  DAT_020a10a8 = 0;
  uVar13 = (uint)*(byte *)(param_1 + 4);
  if ((&DAT_0215c98c)[uVar13] == '\0') {
    iVar8 = 4;
    pbVar18 = abStack_558;
    puVar12 = &DAT_0215b08b;
    do {
      iVar8 = iVar8 + -1;
      *pbVar18 = *puVar12;
      pbVar18 = pbVar18 + 1;
      puVar12 = puVar12 + 1;
    } while (iVar8 != 0);
    if (param_3 == 0) {
      iVar8 = FUN_0203b3e4();
      uVar3 = *(undefined4 *)(*(int *)(iVar8 + 0x88) + 4);
      FUN_0215790c();
    }
    else {
      iVar8 = FUN_0203b3f4();
      uVar3 = *(undefined4 *)(*(int *)(iVar8 + 0x88) + 4);
      FUN_0215790c();
    }
    uVar13 = *(byte *)(param_1 + 4) - 4 & 0xff;
    DAT_020a0dd0 = uVar3;
    FUN_020329ec(*(undefined4 *)(param_1 + 0x10));
    iVar25 = FUN_0214d498();
    iVar8 = (short)param_3 * 0x4dc;
    iVar21 = param_2 + 0x1f0 + iVar8;
    *(int *)(iVar21 + uVar13 * 4) = iVar25;
    FUN_02023894(*(undefined4 *)(iVar25 + 4),
                 *(int *)(param_1 + 0x10) + (uint)*(byte *)(param_1 + 0xc),0);
    local_554[0] = (uint)abStack_558[*(byte *)(param_1 + 0xb)] << 0xc;
    piVar4 = *(int **)(*(int *)(*(int *)(iVar21 + uVar13 * 4) + 4) + 100);
    (**(code **)(*piVar4 + 0x10))(piVar4,local_554);
    *(undefined4 *)(param_2 + iVar8 + uVar13 * 4 + 0x4bc) = *(undefined4 *)(param_1 + 0x10);
    FUN_0214d6e8();
  }
  else {
    if (uVar13 < 4) {
      iVar8 = (short)param_3 * 0x4dc + param_2;
      *(undefined2 *)(iVar8 + uVar13 * 2 + 0x37e) = *(undefined2 *)(param_1 + 6);
      *(undefined2 *)(iVar8 + (uint)*(byte *)(param_1 + 4) * 2 + 0x386) =
           *(undefined2 *)(param_1 + 8);
    }
    iVar25 = param_3 * 0x4dc;
    local_500 = *(int *)(param_2 + 0x20 + iVar25);
    iVar8 = param_2 + 0x20 + iVar25;
    puVar23 = local_4fc;
    puVar22 = (undefined4 *)(iVar8 + 4);
    puVar19 = local_374;
    do {
      *puVar23 = *puVar22;
      puVar23[1] = puVar22[1];
      FUN_0214fa00(puVar23 + 2,puVar22 + 2);
      *(undefined2 *)(puVar23 + 5) = *(undefined2 *)(puVar22 + 5);
      *(undefined2 *)((int)puVar23 + 0x16) = *(undefined2 *)((int)puVar22 + 0x16);
      *(undefined2 *)(puVar23 + 6) = *(undefined2 *)(puVar22 + 6);
      *(undefined1 *)((int)puVar23 + 0x1a) = *(undefined1 *)((int)puVar22 + 0x1a);
      puVar12 = (undefined1 *)((int)puVar22 + 0x1b);
      puVar22 = puVar22 + 7;
      *(undefined1 *)((int)puVar23 + 0x1b) = *puVar12;
      puVar23 = puVar23 + 7;
    } while (puVar23 < puVar19);
    puVar23 = (undefined4 *)(param_2 + iVar25 + 0x1ac);
    iVar21 = 3;
    do {
      uVar3 = *puVar23;
      uVar6 = puVar23[1];
      uVar9 = puVar23[2];
      uVar14 = puVar23[3];
      puVar23 = puVar23 + 4;
      *puVar19 = uVar3;
      puVar19[1] = uVar6;
      puVar19[2] = uVar9;
      puVar19[3] = uVar14;
      puVar19 = puVar19 + 4;
      iVar21 = iVar21 + -1;
    } while (iVar21 != 0);
    iVar21 = param_2 + iVar25;
    local_344 = *(undefined4 *)(iVar21 + 0x1dc);
    local_340 = *(undefined4 *)(iVar21 + 0x1e0);
    uStack_33c = *(undefined4 *)(iVar21 + 0x1e4);
    uStack_338 = *(undefined4 *)(iVar21 + 0x1e8);
    uStack_334 = *(undefined4 *)(iVar21 + 0x1ec);
    iVar20 = 2;
    puVar19 = local_330;
    puVar23 = (undefined4 *)(iVar21 + 0x1f0);
    do {
      puVar24 = puVar23;
      puVar22 = puVar19;
      uVar3 = puVar24[1];
      uVar6 = puVar24[2];
      uVar9 = puVar24[3];
      *puVar22 = *puVar24;
      puVar22[1] = uVar3;
      puVar22[2] = uVar6;
      puVar22[3] = uVar9;
      iVar20 = iVar20 + -1;
      puVar19 = puVar22 + 4;
      puVar23 = puVar24 + 4;
    } while (iVar20 != 0);
    uVar3 = puVar24[5];
    puVar22[4] = puVar24[4];
    puVar22[5] = uVar3;
    iVar21 = 0x100;
    puVar12 = auStack_308;
    puVar17 = (undefined1 *)(param_2 + iVar25 + 0x218);
    do {
      iVar21 = iVar21 + -1;
      *puVar12 = *puVar17;
      puVar12 = puVar12 + 1;
      puVar17 = puVar17 + 1;
    } while (iVar21 != 0);
    iVar21 = 3;
    puVar19 = local_208;
    puVar23 = (undefined4 *)(param_2 + iVar25 + 0x318);
    do {
      puVar24 = puVar23;
      puVar22 = puVar19;
      uVar3 = puVar24[1];
      uVar6 = puVar24[2];
      uVar9 = puVar24[3];
      *puVar22 = *puVar24;
      puVar22[1] = uVar3;
      puVar22[2] = uVar6;
      puVar22[3] = uVar9;
      iVar21 = iVar21 + -1;
      puVar19 = puVar22 + 4;
      puVar23 = puVar24 + 4;
    } while (iVar21 != 0);
    uVar3 = puVar24[5];
    iVar20 = param_2 + iVar25;
    puVar22[4] = puVar24[4];
    puVar22[5] = uVar3;
    local_1d0 = *(undefined4 *)(iVar20 + 0x350);
    uStack_1cc = *(undefined4 *)(iVar20 + 0x354);
    uStack_1c8 = *(undefined4 *)(iVar20 + 0x358);
    uStack_1c4 = *(undefined4 *)(iVar20 + 0x35c);
    local_1c0 = *(undefined4 *)(iVar20 + 0x360);
    uStack_1bc = *(undefined4 *)(iVar20 + 0x364);
    local_1b8 = *(undefined4 *)(iVar20 + 0x368);
    local_1b4 = *(byte **)(iVar20 + 0x36c);
    iVar21 = 0xe;
    puVar12 = auStack_1b0;
    puVar17 = (undefined1 *)(iVar20 + 0x370);
    do {
      iVar21 = iVar21 + -1;
      *puVar12 = *puVar17;
      puVar12 = puVar12 + 1;
      puVar17 = puVar17 + 1;
    } while (iVar21 != 0);
    iVar21 = 4;
    psVar10 = asStack_1a2;
    psVar15 = (short *)(param_2 + iVar25 + 0x37e);
    do {
      iVar21 = iVar21 + -1;
      *psVar10 = *psVar15;
      psVar10 = psVar10 + 1;
      psVar15 = psVar15 + 1;
    } while (iVar21 != 0);
    iVar21 = 4;
    psVar10 = asStack_19a;
    psVar15 = (short *)(param_2 + iVar25 + 0x386);
    do {
      iVar21 = iVar21 + -1;
      *psVar10 = *psVar15;
      psVar10 = psVar10 + 1;
      psVar15 = psVar15 + 1;
    } while (iVar21 != 0);
    puVar11 = auStack_190;
    iVar8 = iVar8 + 0x370;
    do {
      FUN_0214fa00(puVar11,iVar8);
      puVar11 = puVar11 + 6;
      iVar8 = iVar8 + 0xc;
    } while (puVar11 < auStack_e8);
    iVar8 = 0xe;
    puVar11 = (undefined2 *)(param_2 + iVar25 + 0x438);
    puVar16 = auStack_e8;
    do {
      iVar8 = iVar8 + -1;
      *puVar16 = *puVar11;
      puVar11 = puVar11 + 1;
      puVar16 = puVar16 + 1;
    } while (iVar8 != 0);
    iVar8 = 0xe;
    puVar11 = auStack_cc;
    puVar16 = (undefined2 *)(param_2 + iVar25 + 0x454);
    do {
      iVar8 = iVar8 + -1;
      *puVar11 = *puVar16;
      puVar11 = puVar11 + 1;
      puVar16 = puVar16 + 1;
    } while (iVar8 != 0);
    iVar8 = 0xe;
    puVar11 = auStack_b0;
    puVar16 = (undefined2 *)(param_2 + iVar25 + 0x470);
    do {
      iVar8 = iVar8 + -1;
      *puVar11 = *puVar16;
      puVar11 = puVar11 + 1;
      puVar16 = puVar16 + 1;
    } while (iVar8 != 0);
    iVar8 = param_2 + iVar25;
    local_94 = *(short *)(iVar8 + 0x48c);
    local_92 = *(undefined2 *)(iVar8 + 0x48e);
    local_90 = *(undefined2 *)(iVar8 + 0x490);
    local_8e = *(undefined2 *)(iVar8 + 0x492);
    local_8c = *(undefined4 *)(iVar8 + 0x494);
    uStack_88 = *(undefined4 *)(iVar8 + 0x498);
    uStack_84 = *(undefined4 *)(iVar8 + 0x49c);
    uStack_80 = *(undefined4 *)(iVar8 + 0x4a0);
    iVar21 = 4;
    puVar11 = auStack_7c;
    puVar16 = (undefined2 *)(iVar8 + 0x4a4);
    do {
      iVar21 = iVar21 + -1;
      *puVar11 = *puVar16;
      puVar11 = puVar11 + 1;
      puVar16 = puVar16 + 1;
    } while (iVar21 != 0);
    iVar8 = 4;
    puVar11 = auStack_74;
    puVar16 = (undefined2 *)(param_2 + iVar25 + 0x4ac);
    do {
      iVar8 = iVar8 + -1;
      *puVar11 = *puVar16;
      puVar11 = puVar11 + 1;
      puVar16 = puVar16 + 1;
    } while (iVar8 != 0);
    iVar8 = 4;
    puVar11 = auStack_6c;
    puVar16 = (undefined2 *)(param_2 + iVar25 + 0x4b4);
    do {
      iVar8 = iVar8 + -1;
      *puVar11 = *puVar16;
      puVar11 = puVar11 + 1;
      puVar16 = puVar16 + 1;
    } while (iVar8 != 0);
    iVar8 = 2;
    puVar19 = local_64;
    puVar23 = (undefined4 *)(param_2 + iVar25 + 0x4bc);
    do {
      puVar24 = puVar23;
      puVar22 = puVar19;
      uVar3 = puVar24[1];
      uVar6 = puVar24[2];
      uVar9 = puVar24[3];
      *puVar22 = *puVar24;
      puVar22[1] = uVar3;
      puVar22[2] = uVar6;
      puVar22[3] = uVar9;
      iVar8 = iVar8 + -1;
      puVar19 = puVar22 + 4;
      puVar23 = puVar24 + 4;
    } while (iVar8 != 0);
    iVar21 = param_2 + iVar25;
    uVar3 = puVar24[5];
    puVar22[4] = puVar24[4];
    puVar22[5] = uVar3;
    local_3c = *(undefined1 *)(iVar21 + 0x4e4);
    iVar8 = 0xc;
    local_3b = *(undefined1 *)(iVar21 + 0x4e5);
    puVar12 = auStack_3a;
    puVar17 = (undefined1 *)(iVar21 + 0x4e6);
    do {
      iVar8 = iVar8 + -1;
      *puVar12 = *puVar17;
      puVar12 = puVar12 + 1;
      puVar17 = puVar17 + 1;
    } while (iVar8 != 0);
    iVar8 = param_2 + iVar25;
    local_2e = *(undefined1 *)(iVar8 + 0x4f2);
    local_2d = *(undefined1 *)(iVar8 + 0x4f3);
    local_2c = *(undefined1 *)(iVar8 + 0x4f4);
    local_2b = *(undefined1 *)(iVar8 + 0x4f5);
    local_2a = *(undefined2 *)(iVar8 + 0x4f6);
    local_28 = *(undefined1 *)(iVar8 + 0x4f8);
    local_27 = *(undefined1 *)(iVar8 + 0x4f9);
    local_26 = *(undefined1 *)(iVar8 + 0x4fa);
    local_25 = *(undefined1 *)(iVar8 + 0x4fb);
    pbVar18 = (byte *)(uint)*(byte *)(param_1 + 4);
    for (iVar8 = (int)local_94; iVar8 <= *(short *)(local_500 + 4); iVar8 = iVar8 + 1) {
      pbVar7 = local_1b4 + *(ushort *)(local_1b4 + 2);
      local_1b4 = pbVar7;
      uVar13 = (uint)*pbVar7;
      if ((&DAT_0215c784)[uVar13] == '\0') {
        if (uVar13 == 3) {
          pbVar7 = (byte *)(uint)pbVar7[4];
        }
        if (uVar13 == 3 && pbVar7 == pbVar18) break;
      }
      else if ((byte *)(uint)pbVar7[4] == pbVar18) {
        if (uVar13 != 1) break;
        if (((int)*(short *)(pbVar7 + 6) - ((int)asStack_1a2[(int)pbVar18] >> 1) < 0) ||
           (0x100 < (int)*(short *)(pbVar7 + 6) + ((int)asStack_1a2[(int)pbVar18] >> 1))) break;
        if (((int)*(short *)(pbVar7 + 8) - ((int)asStack_19a[(int)pbVar18] >> 1) < 0) ||
           (0xc0 < (int)*(short *)(pbVar7 + 8) + ((int)asStack_19a[(int)pbVar18] >> 1))) break;
      }
    }
    if (param_3 == 0) {
      iVar8 = FUN_0203b414();
    }
    else {
      iVar8 = FUN_0203b424(*(undefined1 *)(param_1 + 0xe));
    }
    iVar20 = *(int *)(iVar8 + 0x88);
    FUN_0215790c();
    FUN_0215793c(iVar20,*(undefined1 *)(param_1 + 0xb));
    thunk_FUN_0207400c(auStack_540,s_demo__0215cab0);
    thunk_FUN_020741c4(auStack_540,param_1 + 0x14);
    cVar1 = *(char *)(param_1 + 5);
    iVar21 = *(int *)(*(int *)(param_2 + 0x9e8) + (uint)*(byte *)(param_1 + 0xf) * 4);
    piVar4 = *(int **)(iVar21 + 4);
    iVar8 = (**(code **)(*piVar4 + 0x1c))(piVar4,0);
    piVar4 = *(int **)(iVar21 + 4);
    iVar21 = (**(code **)(*piVar4 + 0x18))(piVar4,0);
    uVar13 = iVar21 * iVar8;
    iVar8 = param_2 + 0x494 + iVar25;
    if (cVar1 == '\0') {
      uVar13 = uVar13 >> 1;
    }
    uVar5 = *(uint *)(iVar8 + (uint)*(byte *)(param_1 + 0xe) * 4);
    if (uVar13 <= uVar5) {
      uVar13 = uVar5;
    }
    *(uint *)(iVar8 + (uint)*(byte *)(param_1 + 0xe) * 4) = uVar13;
    bVar2 = *(byte *)(param_1 + 4);
    iVar21 = *(int *)(*(int *)(param_2 + 0x9e8) + (uint)*(byte *)(param_1 + 0xf) * 4);
    DAT_020a0dd0 = *(undefined4 *)(iVar20 + 4);
    DAT_020a10a8 = 0;
    FUN_02036ab8();
    iVar8 = FUN_0214d498();
    (**(code **)(**(int **)(iVar8 + 4) + 0x130))(*(int **)(iVar8 + 4),auStack_540);
    if (iVar21 == 0) {
      piVar4 = *(int **)(*(int *)(iVar8 + 4) + 100);
      (**(code **)(*piVar4 + 0x50))(piVar4,0,0);
    }
    else {
      piVar4 = *(int **)(*(int *)(iVar8 + 4) + 100);
      (**(code **)(*piVar4 + 0x50))(piVar4,*(undefined4 *)(iVar21 + 4),0);
    }
    local_554[1] = 0x80000;
    local_554[2] = 0x80000;
    FUN_0214d4c0(iVar8,local_554 + 2,local_554 + 1);
    iVar21 = param_2 + 0x1e0 + iVar25;
    *(int *)(iVar21 + (uint)bVar2 * 4) = iVar8;
    DAT_020a10a8 = 0x2000;
    local_544 = ((int)*(short *)(param_1 + 6) >> 1) << 0xc;
    local_554[3] = ((uint)*(byte *)(param_1 + 0xd) + ((int)*(short *)(param_1 + 8) >> 1)) * 0x1000;
    piVar4 = *(int **)(*(int *)(iVar21 + (uint)*(byte *)(param_1 + 4) * 4) + 4);
    (**(code **)(*piVar4 + 0x124))(piVar4,&local_544,local_554 + 3);
    piVar4 = *(int **)(*(int *)(iVar21 + (uint)*(byte *)(param_1 + 4) * 4) + 4);
    (**(code **)(*piVar4 + 0xd8))(piVar4,0);
    FUN_0214d6e8();
    *(byte *)(param_2 + 0x4f3 + iVar25) =
         *(byte *)(param_2 + 0x4f3 + iVar25) & ~(byte)(1 << *(sbyte *)(param_1 + 0xe));
    *(undefined1 *)(param_2 + iVar25 + (uint)*(byte *)(param_1 + 4) + 0x370) =
         *(undefined1 *)(param_1 + 0xe);
    *(int *)(param_2 + iVar25 + (uint)*(byte *)(param_1 + 4) * 4 + 0x318) = iVar20;
  }
  DAT_020a10a8 = 0x2000;
  return 0;
}

