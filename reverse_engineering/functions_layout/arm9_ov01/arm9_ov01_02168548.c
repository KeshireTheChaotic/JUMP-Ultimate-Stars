
/* JUS-GAME ResultRank::ResultRank_Create [source-string] __FILE__="ResultRank.cpp"
   __FUNCTION__="ResultRank_Create" lines=[136, 697, 751, 1219] passed to 5 source-location call(s);
   header inlines: ALControllerImp.h:Create, ALNodeImp.h:Create */

undefined4 * ResultRank::ResultRank_Create(int param_1)

{
  char cVar1;
  short sVar2;
  bool bVar3;
  undefined4 *puVar4;
  int iVar5;
  int *piVar6;
  undefined4 uVar7;
  code *pcVar8;
  int iVar9;
  int iVar10;
  undefined4 uVar11;
  uint uVar12;
  undefined4 uVar13;
  int iVar14;
  int iVar15;
  uint uVar16;
  undefined4 uVar17;
  uint uVar18;
  int *local_13c;
  int local_110;
  uint local_10c;
  int local_108;
  int local_100;
  int local_fc;
  int local_f8;
  int local_ec;
  undefined4 local_e8;
  int local_e4;
  undefined4 local_e0;
  undefined4 local_dc;
  undefined4 local_d8;
  undefined1 auStack_d4 [8];
  undefined4 local_cc;
  undefined4 local_c8;
  undefined4 local_c4;
  undefined4 local_c0;
  undefined4 local_bc;
  undefined4 local_b8;
  undefined4 local_b4;
  undefined4 local_b0;
  undefined4 local_ac;
  undefined4 local_a8;
  undefined4 local_a4;
  undefined4 local_a0;
  undefined4 local_9c;
  undefined4 local_98;
  undefined4 local_94;
  byte local_90 [8];
  undefined4 local_88;
  undefined4 local_84;
  undefined4 local_80;
  undefined4 local_7c;
  undefined4 local_78;
  undefined4 local_74;
  int local_70;
  undefined1 auStack_68 [12];
  undefined1 auStack_5c [12];
  undefined1 auStack_50 [12];
  undefined1 auStack_44 [24];
  int local_2c;
  undefined4 local_28;
  undefined4 local_24;
  int aiStack_20 [3];
  
  puVar4 = (undefined4 *)thunk_FUN_0201a228(0x50,s_ResultRank_cpp_0216dcec,&DAT_0216dc30,0x88);
  FUN_020517fc(puVar4,0,0x50);
  *(char *)(puVar4 + 0x12) = (char)param_1;
  FUN_02041f7c(DAT_020a0f64,1);
  iVar5 = FUN_0203b424(0);
  FUN_0203d0b4(*(undefined4 *)(*(int *)(iVar5 + 0x88) + 4),1);
  iVar5 = FUN_0203b424(0);
  FUN_0203d478(*(undefined4 *)(*(int *)(iVar5 + 0x88) + 4),4);
  iVar5 = FUN_0203b424(0);
  FUN_0203cfbc(*(undefined4 *)(*(int *)(iVar5 + 0x88) + 4),0,0);
  iVar5 = FUN_0203b424(0);
  piVar6 = *(int **)(*(int *)(iVar5 + 0x88) + 4);
  (**(code **)(*piVar6 + 0x90))(piVar6,0);
  iVar5 = FUN_0203b424(0);
  local_88 = 0;
  piVar6 = *(int **)(*(int *)(iVar5 + 0x88) + 4);
  (**(code **)(*piVar6 + 0x10))(piVar6,&local_88);
  iVar5 = FUN_0203b424(1);
  FUN_0203d0b4(*(undefined4 *)(*(int *)(iVar5 + 0x88) + 4),1);
  iVar5 = FUN_0203b424(1);
  FUN_0203d478(*(undefined4 *)(*(int *)(iVar5 + 0x88) + 4),4);
  iVar5 = FUN_0203b424(1);
  FUN_0203cfbc(*(undefined4 *)(*(int *)(iVar5 + 0x88) + 4),0,0);
  iVar5 = FUN_0203b424(1);
  piVar6 = *(int **)(*(int *)(iVar5 + 0x88) + 4);
  (**(code **)(*piVar6 + 0x90))(piVar6,0);
  iVar5 = FUN_0203b424(1);
  local_84 = 0x1000;
  piVar6 = *(int **)(*(int *)(iVar5 + 0x88) + 4);
  (**(code **)(*piVar6 + 0x10))(piVar6,&local_84);
  iVar5 = FUN_0203b424(2);
  FUN_0203d0b4(*(undefined4 *)(*(int *)(iVar5 + 0x88) + 4),1);
  iVar5 = FUN_0203b424(2);
  FUN_0203d478(*(undefined4 *)(*(int *)(iVar5 + 0x88) + 4),4);
  iVar5 = FUN_0203b424(2);
  FUN_0203cfbc(*(undefined4 *)(*(int *)(iVar5 + 0x88) + 4),0x40,0x20);
  iVar5 = FUN_0203b424(2);
  piVar6 = *(int **)(*(int *)(iVar5 + 0x88) + 4);
  (**(code **)(*piVar6 + 0x90))(piVar6,0x4000);
  iVar5 = FUN_0203b424(2);
  local_80 = 0x2000;
  piVar6 = *(int **)(*(int *)(iVar5 + 0x88) + 4);
  (**(code **)(*piVar6 + 0x10))(piVar6,&local_80);
  if (param_1 == 2) {
    iVar5 = FUN_0203b424(3);
    FUN_0203d0b4(*(undefined4 *)(*(int *)(iVar5 + 0x88) + 4),1);
    iVar5 = FUN_0203b424(3);
    FUN_0203d478(*(undefined4 *)(*(int *)(iVar5 + 0x88) + 4),4);
    iVar5 = FUN_0203b424(3);
    FUN_0203cfbc(*(undefined4 *)(*(int *)(iVar5 + 0x88) + 4),0x20,0x20);
    iVar5 = FUN_0203b424(3);
    piVar6 = *(int **)(*(int *)(iVar5 + 0x88) + 4);
    (**(code **)(*piVar6 + 0x90))(piVar6,0x8000);
    iVar5 = FUN_0203b424(3);
    local_7c = 0x3000;
    piVar6 = *(int **)(*(int *)(iVar5 + 0x88) + 4);
    (**(code **)(*piVar6 + 0x10))(piVar6,&local_7c);
    iVar5 = FUN_0203b424(3);
    piVar6 = *(int **)(*(int *)(iVar5 + 0x88) + 4);
    (**(code **)(*piVar6 + 0x94))(piVar6,1);
  }
  else {
    iVar5 = FUN_0203b424(3);
    FUN_0203d0b4(*(undefined4 *)(*(int *)(iVar5 + 0x88) + 4),1);
    iVar5 = FUN_0203b424(3);
    FUN_0203d478(*(undefined4 *)(*(int *)(iVar5 + 0x88) + 4),4);
    iVar5 = FUN_0203b424(3);
    FUN_0203cfbc(*(undefined4 *)(*(int *)(iVar5 + 0x88) + 4),0,0);
    iVar5 = FUN_0203b424(3);
    piVar6 = *(int **)(*(int *)(iVar5 + 0x88) + 4);
    (**(code **)(*piVar6 + 0x90))(piVar6,0);
    iVar5 = FUN_0203b424(3);
    local_78 = 0x3000;
    piVar6 = *(int **)(*(int *)(iVar5 + 0x88) + 4);
    (**(code **)(*piVar6 + 0x10))(piVar6,&local_78);
    iVar5 = FUN_0203b424(3);
    piVar6 = *(int **)(*(int *)(iVar5 + 0x88) + 4);
    (**(code **)(*piVar6 + 0x94))(piVar6,1);
  }
  uVar7 = FUN_020101f4(s_result_result_aar_0216dcfc,0);
  *puVar4 = uVar7;
  uVar7 = FUN_020101f4(s_result_result_rank_obj_aar_0216dd10,0);
  puVar4[1] = uVar7;
  if (DAT_020afebd == '\0') {
    pcVar8 = FUN_0216908c;
  }
  else {
    pcVar8 = FUN_0216907c;
  }
  puVar4[0x13] = pcVar8;
  iVar5 = thunk_FUN_0201a228(0x78,s_ALNodeImp_h_0216bbd4,s_Create_0216dc18,0x4c3);
  if (iVar5 != 0) {
    jus_TagNDGR_0209c0b4::jus_TagNDGR_0209c0b4(iVar5,FUN_02024a30,1);
  }
  iVar9 = FUN_0214d37c();
  (**(code **)(**(int **)(iVar9 + 4) + 0xd8))(*(int **)(iVar9 + 4),1);
  FUN_0214f714(auStack_d4,iVar9,s_Position_0216dd2c);
  iVar5 = 0;
  do {
    iVar10 = thunk_FUN_0201a228(0x78,s_ALNodeImp_h_0216bbd4,s_Create_0216dc18,0x4c3);
    if (iVar10 != 0) {
      jus_TagNDGR_0209c0b4::jus_TagNDGR_0209c0b4(iVar10,FUN_02024a30,1);
    }
    iVar10 = FUN_0214d37c();
    (**(code **)(**(int **)(iVar10 + 4) + 0xd8))(*(int **)(iVar10 + 4),1);
    FUN_0214f7c0(iVar10,iVar9);
    FUN_0214e688(iVar9,iVar10);
    FUN_0214f894(&local_74,&DAT_0216dc44 + (iVar5 + 1) * 0xc);
    FUN_02023940(*(undefined4 *)(iVar10 + 4));
    FUN_0214f714(&local_dc,iVar10,s_Position_0216dd2c);
    piVar6 = *(int **)(*(int *)(iVar10 + 4) + 0x68);
    (**(code **)(*piVar6 + 0xac))(piVar6,0);
    local_e4 = local_70 + 0xc0000;
    local_e0 = local_74;
    FUN_021511c8(iVar10,&local_e0,&local_e4);
    FUN_02023c60(*(undefined4 *)(iVar10 + 4),local_dc,0,local_d8);
    FUN_02023c60(*(undefined4 *)(iVar10 + 4),local_dc,iVar5 * 6,local_d8);
    FUN_0214f864(iVar10,&local_74);
    FUN_02023c60(*(undefined4 *)(iVar10 + 4),local_dc,(iVar5 + 1) * 6,local_d8);
    FUN_02023c80(*(undefined4 *)(iVar10 + 4),local_dc,0x494c,local_d8);
    local_ec = local_70 + 0xc0000;
    local_e8 = local_74;
    FUN_021511c8(iVar10,&local_e8,&local_ec);
    (**(code **)(**(int **)(*(int *)(iVar10 + 4) + 0x68) + 0x70))();
    iVar15 = iVar5 + 1;
    puVar4[iVar5 + 5] = iVar10;
    iVar5 = iVar15;
  } while (iVar15 < 4);
  FUN_02028384(*(undefined4 *)(iVar9 + 4),0x216924d);
  (**(code **)(**(int **)(iVar9 + 4) + 0x24))(*(int **)(iVar9 + 4),puVar4);
  puVar4[4] = iVar9;
  if (*(char *)(puVar4 + 0x12) == '\x02') {
    iVar5 = FUN_0203b424(3);
    uVar7 = FUN_0216909c(s_info_bg_0216dd68,*(undefined4 *)(iVar5 + 0x88));
    puVar4[3] = uVar7;
    local_a8 = 0x100000;
    local_ac = 0xfff00000;
    local_b0 = 0;
    FUN_0214dc68(auStack_5c,&local_a8,&local_ac,&local_b0);
    local_9c = 0;
    local_a0 = 0;
    local_a4 = 0;
    FUN_0214dc68(auStack_50,&local_9c,&local_a0,&local_a4);
    FUN_0214f714(&local_98,uVar7,s_Position_0216dd2c);
    iVar5 = thunk_FUN_0201a228(0x4c,s_ALControllerImp_h_0216bbe0,s_Create_0216dc28,0x2b9);
    if (iVar5 != 0) {
      jus_TagIPCT::jus_TagIPCT(iVar5,0,local_98,local_94,0x494c,auStack_50,auStack_5c,0x400,2);
    }
    uVar11 = FUN_0215e28c();
    FUN_02020f38(uVar7,uVar11);
    iVar5 = FUN_0203b424(2);
    uVar11 = FUN_0216909c(s_jquiz_com_result00_b_0216dd70,*(undefined4 *)(iVar5 + 0x88));
    puVar4[2] = uVar11;
    FUN_0215853c(uVar7,0);
    iVar5 = FUN_02034db8();
    FUN_0201710c(*(undefined4 *)(iVar5 + 4),s_jquiz_quiz_bg_ncl_0216dd88);
  }
  else {
    iVar5 = FUN_0203b424(2);
    uVar7 = FUN_0216909c(&DAT_0216dd38,*(undefined4 *)(iVar5 + 0x88));
    puVar4[2] = uVar7;
    if (*(char *)(puVar4 + 0x12) == '\x01') {
      FUN_0215853c(puVar4[2],0);
      iVar5 = FUN_02034db8();
      FUN_0201710c(*(undefined4 *)(iVar5 + 4),s_result_t_result_rank_ncl_0216dd4c);
    }
  }
  local_b8 = 0;
  local_b4 = 0x100000;
  FUN_021511c8(puVar4[2],&local_b4,&local_b8);
  local_c4 = 0;
  local_c8 = 0;
  local_cc = 0;
  FUN_0214dc68(auStack_68,&local_c4,&local_c8,&local_cc);
  FUN_0214f714(&local_c0,puVar4[2],s_Position_0216dd2c);
  iVar5 = thunk_FUN_0201a228(0x4c,&DAT_0216c958,s_Create_0216dc20,0x2ef);
  if (iVar5 != 0) {
    jus_TagIPMV::jus_TagIPMV(iVar5,0,local_c0,local_bc,0x494c,auStack_68,8,0,1);
  }
  uVar7 = FUN_0215e28c();
  FUN_02020f38(puVar4[2],uVar7);
  iVar5 = 0;
  do {
    local_90[iVar5] = 4;
    iVar5 = iVar5 + 1;
  } while (iVar5 < 5);
  uVar16 = DAT_020afe90;
  do {
    uVar16 = uVar16 - 1;
    if ((int)uVar16 < 0) {
      if (*(char *)(puVar4 + 0x12) != '\x02') {
        iVar5 = FUN_0203b3f4();
        FUN_02169150(DAT_020afea0 + 0x810000,0x810000,*(undefined4 *)(iVar5 + 0x88),puVar4[4],
                     &DAT_0216dc44,0xa2);
      }
      uVar11 = DAT_0216dcc4;
      uVar7 = DAT_0216dcc0;
      iVar5 = DAT_0216dcbc;
      iVar9 = 0;
      do {
        if (iVar9 < (int)DAT_020afe90) {
          uVar17 = puVar4[iVar9 + 5];
          uVar16 = (uint)local_90[iVar9];
          iVar10 = FUN_0203b3f4();
          iVar15 = (*(code *)puVar4[0x13])(uVar16);
          FUN_02169150(iVar15 + 0x810006,0x810000,*(undefined4 *)(iVar10 + 0x88),uVar17,
                       &DAT_02093c8c,0xab);
          iVar10 = (*(code *)puVar4[0x13])(uVar16);
          if (iVar10 == 0) {
            iVar10 = FUN_0203b3f4();
            FUN_02169150(0x810005,0x810000,*(undefined4 *)(iVar10 + 0x88),uVar17,&DAT_0216dc80,0xa9)
            ;
          }
          iVar10 = FUN_02087724();
          if ((iVar10 != 2) && (uVar16 == DAT_020afe98)) {
            iVar10 = FUN_0203b3f4();
            FUN_02169150(0x81000f,0x810000,*(undefined4 *)(iVar10 + 0x88),uVar17,&DAT_0216dc98,0xa4)
            ;
            iVar10 = FUN_0203b3f4();
            iVar10 = FUN_02169150(0x810027,0x810000,*(undefined4 *)(iVar10 + 0x88),uVar17,
                                  &DAT_02093c8c,0xaa);
            iVar10 = *(int *)(*(int *)(iVar10 + 4) + 100);
            local_13c = *(int **)(iVar10 + 0x2c);
            if (local_13c == (int *)0x0) {
              local_13c = (int *)FUN_02036430(*(undefined4 *)(iVar10 + 0x20));
            }
            if (local_13c[6] == 0) {
              (**(code **)(*local_13c + 0x10))();
            }
            iVar10 = CommonPaletteAnime::CommonPaletteAnime_Create(local_13c[6],0x21,0xe,5,0x80);
            puVar4[0x11] = iVar10;
            *(undefined2 *)(iVar10 + 0x18) = 0;
            *(undefined2 *)(iVar10 + 0x16) = 0x79f;
            *(undefined1 *)(iVar10 + 0x1a) = 0x1e;
            *(undefined1 *)(iVar10 + 0x1c) = 1;
            *(undefined1 *)(iVar10 + 0x1b) = 1;
          }
          iVar10 = FUN_0203b3f4();
          FUN_02169150(uVar16 + 0x81000b,0x810000,*(undefined4 *)(iVar10 + 0x88),uVar17,
                       &DAT_0216dca4,0xa6);
          iVar10 = FUN_0203b3f4();
          iVar10 = FUN_02169150(0x810028,0x810000,*(undefined4 *)(iVar10 + 0x88),uVar17,
                                &DAT_0216dcd4,0xa5);
          (**(code **)(**(int **)(iVar10 + 4) + 0xd8))(*(int **)(iVar10 + 4),0);
          if (uVar16 == DAT_020afe98) {
            FUN_0214f864(iVar10,&DAT_0216dce0);
          }
          puVar4[uVar16 + 9] = iVar10;
          cVar1 = *(char *)(puVar4 + 0x12);
          sVar2 = (&DAT_020afef2)[uVar16];
          FUN_0214f894(&local_2c,&DAT_0216dcbc);
          local_f8 = 0;
          do {
            iVar10 = FUN_0203b3f4();
            iVar10 = FUN_02169150(0x810010,0x810000,*(undefined4 *)(iVar10 + 0x88),uVar17,&local_2c,
                                  0xa8);
            aiStack_20[local_f8] = iVar10;
            local_2c = local_2c + 0xb000;
            local_f8 = local_f8 + 1;
          } while (local_f8 < 3);
          if ((cVar1 == '\x02') || (DAT_020afea0 != 1)) {
            bVar3 = false;
            local_110 = 1;
            iVar10 = 1;
            local_10c = 0;
            do {
              iVar10 = iVar10 + 1;
              local_110 = local_110 * 10;
            } while (iVar10 < 3);
            local_108 = 0;
            local_100 = (int)sVar2;
            do {
              iVar10 = FUN_0200d12c(local_100,local_110);
              iVar15 = aiStack_20[local_108];
              if (iVar10 < 0) {
                iVar14 = -iVar10;
              }
              else {
                iVar14 = iVar10;
              }
              FUN_02023894(*(undefined4 *)(iVar15 + 4),iVar14 + 0x810010,0);
              (**(code **)(**(int **)(*(int *)(iVar15 + 4) + 0x68) + 0x6c))();
              if ((bVar3) || (iVar10 != 0)) {
                (**(code **)(**(int **)(iVar15 + 4) + 0xd8))(*(int **)(iVar15 + 4),1);
                bVar3 = true;
                local_10c = local_10c + 1 & 0xff;
              }
              else {
                (**(code **)(**(int **)(iVar15 + 4) + 0xd8))(*(int **)(iVar15 + 4),0);
              }
              local_100 = local_100 - local_110 * iVar10;
              local_110 = FUN_0200d12c(local_110,10);
              local_108 = local_108 + 1;
            } while (local_108 < 3);
            (**(code **)(**(int **)(aiStack_20[2] + 4) + 0xd8))(*(int **)(aiStack_20[2] + 4),1);
            if (sVar2 < 0) {
              local_28 = uVar7;
              local_24 = uVar11;
              local_2c = iVar5 + (2 - local_10c) * 0xb000;
              iVar10 = FUN_0203b3f4();
              FUN_02169150(0x81001b,0x810000,*(undefined4 *)(iVar10 + 0x88),uVar17,&local_2c,0xa8);
            }
          }
          else {
            local_fc = 0;
            do {
              iVar10 = aiStack_20[local_fc];
              FUN_02023894(*(undefined4 *)(iVar10 + 4),0x81001b,0);
              (**(code **)(**(int **)(*(int *)(iVar10 + 4) + 0x68) + 0x6c))();
              local_fc = local_fc + 1;
            } while (local_fc < 3);
          }
          iVar10 = FUN_0203b3f4();
          FUN_02169150(0x81001a,0x810000,*(undefined4 *)(iVar10 + 0x88),uVar17,&DAT_0216dcc8,0xa8);
          if ((1 << uVar16 & (uint)DAT_020afec2) == 0) {
            (*(code *)puVar4[0x13])(uVar16);
            FUN_020517fc(auStack_44,0,0x16);
            uVar13 = FUN_02070cdc(uVar16);
            FUN_02051890(uVar13,auStack_44,0x14);
            FUN_021691c0(auStack_44,&DAT_0216dcb0,uVar17);
          }
          else {
            (*(code *)puVar4[0x13])(uVar16);
            FUN_021691c0(uVar16 * 0xe + 0x216a108,&DAT_0216dcb0,uVar17);
          }
        }
        else {
          iVar10 = FUN_0203b3f4();
          FUN_02169150(0x81000a,0x810000,*(undefined4 *)(iVar10 + 0x88),puVar4[iVar9 + 5],
                       &DAT_02093c8c,0xab);
        }
        iVar9 = iVar9 + 1;
      } while (iVar9 < 4);
      iVar5 = FUN_0203b3f4();
      FUN_02169150(0x810004,0x810000,*(undefined4 *)(iVar5 + 0x88),puVar4[5],&DAT_0216dc8c,0xa3);
      return puVar4;
    }
    uVar18 = uVar16;
    for (iVar5 = 0; iVar5 < 4; iVar5 = iVar5 + 1) {
      uVar12 = (uint)local_90[iVar5];
      if (uVar12 == 4) {
LAB_02168af0:
        local_90[iVar5] = (byte)uVar18;
        uVar18 = uVar12;
      }
      else {
        iVar9 = (*(code *)puVar4[0x13])(uVar18);
        iVar10 = (*(code *)puVar4[0x13])(uVar12);
        if (iVar9 <= iVar10) goto LAB_02168af0;
      }
      if (uVar18 == 4) break;
    }
  } while( true );
}

