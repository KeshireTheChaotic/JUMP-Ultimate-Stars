
/* WARNING: Globals starting with '_' overlap smaller symbols at the same address */

void FUN_0215202c(int param_1,undefined4 param_2,undefined4 param_3,undefined4 param_4)

{
  byte bVar1;
  undefined1 uVar2;
  undefined4 uVar3;
  int *piVar4;
  int iVar5;
  undefined4 uVar6;
  int iVar7;
  int iVar8;
  int iVar9;
  int iVar10;
  int iVar11;
  int iVar12;
  int iVar13;
  uint uVar14;
  int iVar15;
  int iVar16;
  uint uStack_20c;
  uint uStack_1f0;
  undefined4 uStack_1e8;
  undefined4 uStack_1e4;
  undefined4 uStack_1e0;
  undefined4 uStack_1dc;
  undefined4 uStack_1d8;
  undefined4 uStack_1d4;
  undefined4 uStack_1d0;
  int iStack_1cc;
  int iStack_1c8;
  int iStack_1c4;
  int iStack_1c0;
  int aiStack_1bc [19];
  undefined1 auStack_170 [12];
  int aiStack_164 [15];
  undefined1 auStack_128 [256];
  undefined4 uStack_28;
  
  iVar10 = 0;
  *(undefined1 *)(param_1 + 0x35c) = *(undefined1 *)(*(int *)(param_1 + 0x330) + 0x52);
  *(undefined1 *)(param_1 + 0x35e) = *(undefined1 *)(*(int *)(param_1 + 0x330) + 0x53);
  iVar9 = (uint)*(byte *)(param_1 + 0x35c) * 0x48 + *(int *)(*(int *)(param_1 + 0x330) + 0x34);
  *(undefined1 *)(param_1 + 0x35d) = *(undefined1 *)(iVar9 + 0x42);
  *(undefined1 *)(param_1 + 0x35f) =
       *(undefined1 *)
        ((uint)*(byte *)(iVar9 + 0x42) * 0x3c + *(int *)(*(int *)(param_1 + 0x330) + 0x30) + 0x2c);
  iVar11 = (uint)*(byte *)(param_1 + 0x35d) * 0x3c + *(int *)(*(int *)(param_1 + 0x330) + 0x30);
  uStack_28 = param_4;
  for (iVar9 = 0; iVar9 < (int)(uint)*(byte *)(iVar11 + 0x2c); iVar9 = iVar9 + 1) {
    iVar15 = (uint)*(byte *)(iVar11 + iVar9 + 0x2d) * 0x48 +
             *(int *)(*(int *)(param_1 + 0x330) + 0x34);
    for (iVar13 = 0; iVar13 < (int)(uint)*(byte *)(iVar15 + 0x44); iVar13 = iVar13 + 1) {
      bVar1 = *(byte *)(iVar15 + iVar13 + 0x38);
      iVar7 = *(int *)(*(int *)(param_1 + 0x330) + 0x38);
      thunk_FUN_0207400c(auStack_128,s_jgalaxy__0215c328);
      uVar3 = FUN_0214e008(*(undefined1 *)(iVar7 + (uint)bVar1 * 0x40 + 0x2d));
      thunk_FUN_020741c4(auStack_128,uVar3);
      thunk_FUN_020741c4(auStack_128,s__planet_aar_0215c334);
      uVar3 = FUN_020101f4(auStack_128,0);
      *(undefined4 *)(param_1 + iVar10 * 4 + 0x58) = uVar3;
      iVar10 = iVar10 + 1;
    }
  }
  iVar9 = FUN_0203b404();
  uVar3 = FUN_0214d53c(0x11000,0x11000,*(undefined4 *)(iVar9 + 0x88),0,0x47);
  *(undefined4 *)(param_1 + 0x28) = uVar3;
  FUN_0214f960(uVar3,&DAT_0215cba4);
  iVar9 = 1;
  do {
    iVar10 = FUN_0203b3e4();
    uVar3 = FUN_0214d53c(0x12001,0x12000,*(undefined4 *)(iVar10 + 0x88),0,0x44);
    *(undefined4 *)(param_1 + iVar9 * 4 + 0x28) = uVar3;
    FUN_0214f960(uVar3,&DAT_0215cba4 + iVar9 * 0xc);
    iVar9 = iVar9 + 1;
  } while (iVar9 < 8);
  FUN_02023894(*(undefined4 *)(*(int *)(param_1 + 0x44) + 4),0x12014,0);
  (**(code **)(**(int **)(*(int *)(*(int *)(param_1 + 0x44) + 4) + 0x68) + 0x6c))();
  iVar9 = FUN_0203b3e4();
  iVar9 = FUN_0214d53c(0xa01000,0xa01000,*(undefined4 *)(iVar9 + 0x88),0,0x43);
  *(int *)(param_1 + 0x4c) = iVar9;
  (**(code **)(**(int **)(iVar9 + 4) + 0xd8))(*(int **)(iVar9 + 4),0);
  aiStack_1bc[2] = 0x16000;
  aiStack_1bc[3] = 0xe000;
  FUN_0214d4c0(*(undefined4 *)(param_1 + 0x4c),aiStack_1bc + 3,aiStack_1bc + 2);
  iVar9 = FUN_0203b404();
  uVar3 = FUN_0214d53c(0x11002,0x11000,*(undefined4 *)(iVar9 + 0x88),0,0x46);
  *(undefined4 *)(param_1 + 0x48) = uVar3;
  FUN_0214f960(uVar3,&DAT_0215cba4);
  uVar3 = FUN_0214d718(0,0x42);
  *(undefined4 *)(param_1 + 0x20) = uVar3;
  iVar9 = thunk_FUN_0201a228(0xcc,s_ALWidget_inl_0215bfc0,s_Create_0215c1a0,0x1de);
  if (iVar9 != 0) {
    func_0x021af26c(iVar9,FUN_02153084,FUN_0215313c,0);
  }
  piVar4 = (int *)FUN_0214ed94();
  (**(code **)(*(int *)piVar4[1] + 0x24))((int *)piVar4[1],param_1);
  func_0x021b3b7c(0x10,0,piVar4,0);
  (**(code **)(*piVar4 + 8))();
  iVar9 = thunk_FUN_0201a228(0xcc,s_ALWidget_inl_0215bfc0,s_Create_0215c1a0,0x1de);
  if (iVar9 != 0) {
    func_0x021af26c(iVar9,FUN_021530e0,FUN_0214d434,0);
  }
  piVar4 = (int *)FUN_0214ed94();
  func_0x021b3b7c(0x11,0,piVar4,0);
  iVar9 = FUN_02153010(piVar4,0x31305053);
  FUN_02153060(*(int *)(*(int *)(iVar9 + 4) + 100) + 0x14);
  uVar3 = FUN_02153038();
  iVar9 = CommonPaletteAnime::CommonPaletteAnime_Create(uVar3,0x11,0xf,5,0x80);
  *(undefined2 *)(iVar9 + 0x18) = 0;
  *(undefined2 *)(iVar9 + 0x16) = 0x8df;
  *(undefined1 *)(iVar9 + 0x1a) = 0x1e;
  *(undefined1 *)(iVar9 + 0x1c) = 1;
  *(undefined1 *)(iVar9 + 0x1b) = 1;
  *(int *)(param_1 + 0x334) = iVar9;
  (**(code **)(*piVar4 + 8))();
  _DAT_021d5154 = 0xffffffff;
  uVar3 = ALWidgetBaseImp::Create(param_1,0);
  FUN_021506bc(uVar3,0);
  *(undefined4 *)(param_1 + 0x10) = uVar3;
  _DAT_021d5154 = 0x10;
  iVar9 = ALWidgetBaseImp::Create(param_1,*(undefined4 *)(param_1 + 0x10));
  func_0x021b7744(*(undefined4 *)(iVar9 + 4),1);
  FUN_0214d678(iVar9,*(undefined4 *)(param_1 + 0xc));
  FUN_021506bc(iVar9,0);
  uStack_1e4 = 0xc5000;
  FUN_0214d650(iVar9,&uStack_1e4);
  *(int *)(param_1 + 0x14) = iVar9;
  _DAT_021d5154 = 0x11;
  iVar9 = ALWidgetBaseImp::Create(param_1,*(undefined4 *)(param_1 + 0x10));
  func_0x021b7744(*(undefined4 *)(iVar9 + 4),1);
  FUN_0214d678(iVar9,*(undefined4 *)(param_1 + 0xc));
  FUN_021506bc(iVar9,0);
  uStack_1e8 = 0x84000;
  FUN_0214d650(iVar9,&uStack_1e8);
  *(int *)(param_1 + 0x18) = iVar9;
  iVar9 = (uint)*(byte *)(param_1 + 0x35d) * 0x3c + *(int *)(*(int *)(param_1 + 0x330) + 0x30);
  for (iVar10 = 0; iVar10 < (int)(uint)*(byte *)(iVar9 + 0x2c); iVar10 = iVar10 + 1) {
    iVar11 = (uint)*(byte *)(iVar9 + iVar10 + 0x2d) * 0x48 +
             *(int *)(*(int *)(param_1 + 0x330) + 0x34);
    if ((DAT_0215cc0c & 1) == 0) {
      FUN_0214edbc(&DAT_0215c1b8,0xffffffe0,0xffffffe0,0x20,0x20);
      FUN_0214edbc(&DAT_0215c1c0,0xffffffd8,0xffffffe0,0x28,0x20);
      FUN_0214edbc(&DAT_0215c1c8,0xffffffd8,0xffffffe0,0x28,0x28);
      FUN_0214edbc(&DAT_0215c1d0,0xffffffd8,0xffffffd8,0x28,0x28);
      DAT_0215cc0c = DAT_0215cc0c | 1;
    }
    if ((DAT_0215cc08 & 1) == 0) {
      FUN_0214edbc(&DAT_0215c1b0,0xffffffe0,0xffffffe0,0x20,0x20);
      DAT_0215cc08 = DAT_0215cc08 | 1;
    }
    uStack_1d0 = 0;
    _DAT_021d5154 = 0x10;
    iStack_1cc = (int)*(short *)(iVar11 + 0x2e) << 0xc;
    iStack_1c8 = (int)*(short *)(iVar11 + 0x2c) << 0xc;
    FUN_0214e39c(auStack_170,&iStack_1c8,&iStack_1cc,&uStack_1d0);
    iVar13 = ALWidgetImp::Create(param_1,*(undefined4 *)(param_1 + 0x14),auStack_170,
                                 &DAT_0215c1b8 + (*(byte *)(iVar11 + 0x44) - 1) * 8);
    func_0x021b65e8(*(undefined4 *)(iVar13 + 4),4,FUN_02153e8c);
    func_0x021b65e8(*(undefined4 *)(iVar13 + 4),1,FUN_02154558);
    *(code **)(*(int *)(iVar13 + 4) + 0xdc) = FUN_021543ac;
    uStack_1d4 = 0x84000;
    FUN_0214d650(iVar13,&uStack_1d4);
    func_0x021b7454(*(undefined4 *)(iVar13 + 4),1,0x4007b);
    func_0x021b7454(*(undefined4 *)(iVar13 + 4),2,0x4007b);
    func_0x021b7454(*(undefined4 *)(iVar13 + 4),8,0x4007b);
    func_0x021b7454(*(undefined4 *)(iVar13 + 4),4,0x4007b);
    func_0x021b7454(*(undefined4 *)(iVar13 + 4),0x10000,0x4007b);
    func_0x021b7454(*(undefined4 *)(iVar13 + 4),0x100,0x4007b);
    func_0x021b7454(*(undefined4 *)(iVar13 + 4),0x200,0x4007b);
    _DAT_021d5154 = 0x11;
    iVar15 = param_1 + iVar10 * 0x28;
    iVar7 = param_1 + 0xdc + iVar10 * 0x28;
    for (iVar12 = 0; uVar14 = (uint)*(byte *)(iVar11 + 0x44), iVar12 < (int)uVar14;
        iVar12 = iVar12 + 1) {
      iVar16 = iVar11 + iVar12;
      iVar8 = *(int *)(*(int *)(param_1 + 0x330) + 0x38);
      bVar1 = *(byte *)(iVar16 + 0x38);
      iVar5 = ALWidgetImp::Create(param_1,*(undefined4 *)(param_1 + 0x18),
                                  &DAT_0215c228 + iVar12 * 0xc + (uVar14 - 1) * 0x30,&DAT_0215c1b0);
      *(int *)(iVar7 + iVar12 * 4) = iVar5;
      func_0x021b65e8(*(undefined4 *)(iVar5 + 4),4,FUN_02153eb0);
      *(code **)(*(int *)(*(int *)(iVar7 + iVar12 * 4) + 4) + 0xdc) = FUN_02154098;
      uStack_1d8 = 0x84000;
      FUN_0214d650(*(undefined4 *)(iVar7 + iVar12 * 4),&uStack_1d8);
      *(uint *)(*(int *)(*(int *)(iVar7 + iVar12 * 4) + 4) + 0x124) = (uint)*(byte *)(iVar16 + 0x38)
      ;
      FUN_0214d678(*(undefined4 *)(iVar7 + iVar12 * 4),iVar13);
      func_0x021b7454(*(undefined4 *)(*(int *)(iVar7 + iVar12 * 4) + 4),0x100,0x30078);
      func_0x021b7454(*(undefined4 *)(*(int *)(iVar7 + iVar12 * 4) + 4),0x200,0x30078);
      bVar1 = *(byte *)(iVar8 + (uint)bVar1 * 0x40 + 0x2d);
      uStack_1f0 = (uint)(byte)(bVar1 - 1);
      if ((0x2f < bVar1) && (bVar1 < 0x35)) {
        uStack_1f0 = 0x2f;
      }
      iVar5 = FUN_0214df2c(*(undefined4 *)(param_1 + 0x330),*(undefined1 *)(iVar16 + 0x38));
      uStack_20c = (uint)(iVar5 == 0);
      iVar8 = FUN_0203b404();
      iVar8 = FUN_0214d53c(uStack_20c * 2 + 0x30001 + uStack_1f0 * 0x10,uStack_1f0 * 0x10 + 0x30000,
                           *(undefined4 *)(iVar8 + 0x88),0,iVar12 + 0x84);
      FUN_0214d678(iVar8,*(undefined4 *)(iVar7 + iVar12 * 4));
      (**(code **)(**(int **)(iVar8 + 4) + 0x24))(*(int **)(iVar8 + 4),uStack_1f0);
      FUN_020282f4(*(undefined4 *)(iVar8 + 4));
      bVar1 = *(byte *)(iVar11 + 0x44);
      FUN_0214ef10(&uStack_1e0,iVar8,s_Position_0215c31c);
      uVar6 = uStack_1dc;
      uVar3 = uStack_1e0;
      iVar16 = thunk_FUN_0201a228(0x4c,s_ALControllerImp_h_0215c008,s_Create_0215c198,0x2ef);
      if (iVar16 != 0) {
        jus_TagIPMV::jus_TagIPMV
                  (iVar16,0,uVar3,uVar6,0x494c,&DAT_0215c228 + iVar12 * 0xc + (bVar1 - 1) * 0x30,8,0
                   ,0);
      }
      uVar3 = FUN_0214f194();
      FUN_02020f38(iVar8,uVar3);
      *(int *)(iVar15 + iVar12 * 4 + 0xec) = iVar8;
      *(bool *)(iVar15 + iVar12 + 0xfc) = iVar5 == 0;
    }
    if (1 < uVar14) {
      for (iVar15 = 0; iVar15 < (int)(uint)*(byte *)(iVar11 + 0x44); iVar15 = iVar15 + 1) {
        if ((char)(&DAT_0215b024)[(uint)*(byte *)(iVar11 + 0x44) * 0x10 + iVar15 * 4] != -1) {
          FUN_02152f98(*(undefined4 *)(iVar7 + iVar15 * 4),
                       *(undefined4 *)
                        (iVar7 + (char)(&DAT_0215b024)
                                       [(uint)*(byte *)(iVar11 + 0x44) * 0x10 + iVar15 * 4] * 4));
        }
        if ((char)(&DAT_0215b025)[(uint)*(byte *)(iVar11 + 0x44) * 0x10 + iVar15 * 4] != -1) {
          FUN_02152f20(*(undefined4 *)(iVar7 + iVar15 * 4),
                       *(undefined4 *)
                        (iVar7 + (char)(&DAT_0215b025)
                                       [(uint)*(byte *)(iVar11 + 0x44) * 0x10 + iVar15 * 4] * 4));
        }
        if ((char)(&DAT_0215b026)[(uint)*(byte *)(iVar11 + 0x44) * 0x10 + iVar15 * 4] != -1) {
          FUN_02152fd4(*(undefined4 *)(iVar7 + iVar15 * 4),
                       *(undefined4 *)
                        (iVar7 + (char)(&DAT_0215b026)
                                       [(uint)*(byte *)(iVar11 + 0x44) * 0x10 + iVar15 * 4] * 4));
        }
        if ((char)(&DAT_0215b027)[(uint)*(byte *)(iVar11 + 0x44) * 0x10 + iVar15 * 4] != -1) {
          FUN_02152f5c(*(undefined4 *)(iVar7 + iVar15 * 4),
                       *(undefined4 *)
                        (iVar7 + (char)(&DAT_0215b027)
                                       [(uint)*(byte *)(iVar11 + 0x44) * 0x10 + iVar15 * 4] * 4));
        }
      }
    }
    *(uint *)(*(int *)(iVar13 + 4) + 0x124) = (uint)*(byte *)(iVar9 + iVar10 + 0x2d);
    uVar2 = *(undefined1 *)(iVar9 + iVar10 + 0x2d);
    uVar3 = *(undefined4 *)(param_1 + 0x330);
    aiStack_1bc[iVar10 + 4] = iVar13;
    iVar15 = FUN_0214de0c(uVar3,uVar2);
    if (iVar15 == 0) {
      (**(code **)(**(int **)(iVar13 + 4) + 0x148))(*(int **)(iVar13 + 4),8);
      iVar7 = iVar10 * 0x28 + param_1;
      for (iVar15 = 0; iVar15 < (int)(uint)*(byte *)(iVar11 + 0x44); iVar15 = iVar15 + 1) {
        piVar4 = *(int **)(*(int *)(iVar7 + iVar15 * 4 + 0xdc) + 4);
        (**(code **)(*piVar4 + 0x148))(piVar4,8);
        piVar4 = *(int **)(*(int *)(iVar7 + iVar15 * 4 + 0xdc) + 4);
        (**(code **)(*piVar4 + 0xd8))(piVar4,0);
      }
    }
    *(int *)(iVar10 * 0x28 + param_1 + 0xd8) = iVar13;
  }
  for (iVar10 = 0; iVar10 < (int)(uint)*(byte *)(iVar9 + 0x2c); iVar10 = iVar10 + 1) {
    iVar11 = (uint)*(byte *)(iVar9 + iVar10 + 0x2d) * 0x48 +
             *(int *)(*(int *)(param_1 + 0x330) + 0x34);
    if (*(char *)(iVar11 + 0x3d) != -1) {
      FUN_02152f20(aiStack_1bc[iVar10 + 4],aiStack_1bc[*(char *)(iVar11 + 0x3d) + 4]);
    }
    if (*(char *)(iVar11 + 0x3f) != -1) {
      FUN_02152f5c(aiStack_1bc[iVar10 + 4],aiStack_1bc[*(char *)(iVar11 + 0x3f) + 4]);
    }
    if (*(char *)(iVar11 + 0x3c) != -1) {
      FUN_02152f98(aiStack_1bc[iVar10 + 4],aiStack_1bc[*(char *)(iVar11 + 0x3c) + 4]);
    }
    if (*(char *)(iVar11 + 0x3e) != -1) {
      FUN_02152fd4(aiStack_1bc[iVar10 + 4],aiStack_1bc[*(char *)(iVar11 + 0x3e) + 4]);
    }
    if (*(char *)(iVar11 + 0x41) != -1) {
      iVar15 = *(int *)(*(char *)(iVar11 + 0x41) * 0x28 + param_1 + 0xdc);
      iVar13 = 0;
      while ((iVar13 < 4 &&
             (iVar7 = *(int *)(iVar10 * 0x28 + param_1 + iVar13 * 4 + 0xdc), iVar7 != 0))) {
        piVar4 = *(int **)(iVar7 + 4);
        (**(code **)(*piVar4 + 0x160))(piVar4,0x100,*(undefined4 *)(iVar15 + 4));
        iVar13 = iVar13 + 1;
      }
    }
    if (*(char *)(iVar11 + 0x40) != -1) {
      iVar13 = *(int *)(*(char *)(iVar11 + 0x40) * 0x28 + param_1 + 0xdc);
      iVar11 = 0;
      while ((iVar11 < 4 &&
             (iVar15 = *(int *)(iVar10 * 0x28 + param_1 + iVar11 * 4 + 0xdc), iVar15 != 0))) {
        piVar4 = *(int **)(iVar15 + 4);
        (**(code **)(*piVar4 + 0x160))(piVar4,0x200,*(undefined4 *)(iVar13 + 4));
        iVar11 = iVar11 + 1;
      }
    }
  }
  iVar10 = *(int *)(param_1 + 0x330);
  iVar11 = (uint)*(byte *)(param_1 + 0x35d) * 0x3c + *(int *)(iVar10 + 0x30);
  uVar14 = (uint)*(byte *)(iVar11 + 0x2c);
  for (iVar9 = 0; iVar9 < (int)uVar14; iVar9 = iVar9 + 1) {
    aiStack_164[iVar9] = iVar9;
  }
  for (iVar9 = 0; iVar9 < (int)(uVar14 - 1); iVar9 = iVar9 + 1) {
    iVar12 = *(int *)(iVar10 + 0x34);
    iVar7 = (uint)*(byte *)(iVar11 + aiStack_164[iVar9] + 0x2d) * 0x48 + iVar12;
    iVar15 = aiStack_164[iVar9];
    iVar13 = iVar9;
    while (iVar13 = iVar13 + 1, iVar13 < (int)uVar14) {
      iVar5 = aiStack_164[iVar13];
      if (*(short *)(iVar7 + 0x2e) <
          *(short *)((uint)*(byte *)(iVar11 + iVar5 + 0x2d) * 0x48 + iVar12 + 0x2e)) {
        aiStack_164[iVar13] = iVar15;
        aiStack_164[iVar9] = iVar5;
        iVar7 = (uint)*(byte *)(iVar11 + iVar5 + 0x2d) * 0x48 + iVar12;
        iVar15 = iVar5;
      }
    }
  }
  iVar9 = 0x84;
  for (iVar10 = 0; iVar10 < (int)(uint)*(byte *)(iVar11 + 0x2c); iVar10 = iVar10 + 1) {
    aiStack_1bc[0] = iVar9 << 0xc;
    iVar13 = param_1 + 0xd8 + aiStack_164[iVar10] * 0x28;
    FUN_0214d650(*(undefined4 *)(param_1 + 0xd8 + aiStack_164[iVar10] * 0x28),aiStack_1bc);
    iVar15 = 0;
    do {
      iVar7 = iVar13 + iVar15 * 4;
      if (*(int *)(iVar7 + 4) != 0) {
        iStack_1c0 = iVar9 << 0xc;
        FUN_0214d650(*(undefined4 *)(iVar7 + 4),&iStack_1c0);
        iStack_1c4 = iVar9 << 0xc;
        FUN_0214d650(*(undefined4 *)(iVar13 + iVar15 * 4 + 0x14),&iStack_1c4);
      }
      iVar15 = iVar15 + 1;
      iVar9 = iVar9 + 1;
    } while (iVar15 < 4);
  }
  _DAT_021d5154 = 0xffffffff;
  uVar3 = ALWidgetBaseImp::Create(param_1,*(undefined4 *)(param_1 + 0x10));
  FUN_021506bc(uVar3,0);
  iVar9 = 0;
  do {
    iVar10 = FUN_0203b3e4();
    uVar6 = FUN_0214da4c(param_1,&DAT_0215c1d8 + iVar9 * 0x28,uVar3,0x60,
                         *(undefined4 *)(iVar10 + 0x88));
    iVar10 = param_1 + iVar9 * 4;
    *(undefined4 *)(iVar10 + 0x50) = uVar6;
    if ((&DAT_0215c1fc)[iVar9 * 10] != 0) {
      func_0x021b6760(*(undefined4 *)(*(int *)(iVar10 + 0x50) + 4),4);
    }
    iVar10 = param_1 + iVar9 * 4;
    *(undefined1 *)(*(int *)(*(int *)(iVar10 + 0x50) + 4) + 0xaa) = 1;
    aiStack_1bc[1] = 0x41000;
    FUN_0214d650(*(undefined4 *)(iVar10 + 0x50),aiStack_1bc + 1);
    iVar10 = iVar9 * 4;
    iVar9 = iVar9 + 1;
    *(undefined1 *)(*(int *)(*(int *)(param_1 + iVar10 + 0x50) + 4) + 0xb1) = 1;
  } while (iVar9 < 2);
  func_0x021b77a8(*(undefined4 *)(*(int *)(param_1 + 0x50) + 4),0x20);
  func_0x021b77a8(*(undefined4 *)(*(int *)(param_1 + 0x54) + 4),0x80);
  if ((DAT_020b0b90 & 0x10) == 0) {
    func_0x021b400c(*(undefined4 *)(*(int *)(param_1 + 0x54) + 4),0x510013);
    piVar4 = *(int **)(*(int *)(param_1 + 0x54) + 4);
    (**(code **)(*piVar4 + 0x148))(piVar4,8);
  }
  *(undefined4 *)(param_1 + 0x1c) = uVar3;
  iVar9 = JGalaxyMenu::JGalaxyMenu_Create
                    (*(undefined4 *)(param_1 + 0x330),*(undefined4 *)(param_1 + 0x10),0);
  *(int *)(param_1 + 0x33c) = iVar9;
  *(code **)(iVar9 + 0x1c) = FUN_02153e14;
  *(int *)(iVar9 + 0x20) = param_1;
  return;
}

