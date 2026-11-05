
/* WARNING: Globals starting with '_' overlap smaller symbols at the same address */
/* JUS-GAME JPower::JPower_Add [source-string] __FILE__="JPower.cpp" __FUNCTION__="JPower_Add"
   lines=[264, 1219] passed to 2 source-location call(s); header inlines: ALNodeImp.h:Create */

int JPower::JPower_Add(int param_1,undefined4 param_2,undefined4 param_3,undefined4 param_4)

{
  short sVar1;
  int *piVar2;
  int iVar3;
  int *piVar4;
  undefined4 uVar5;
  int iVar6;
  undefined4 uVar7;
  int iVar8;
  int iVar9;
  int iVar10;
  int iVar11;
  int iVar12;
  int iVar13;
  int iVar14;
  undefined4 local_cc;
  undefined4 local_c8;
  undefined4 local_c4;
  undefined4 local_c0;
  undefined4 local_bc;
  undefined4 local_b8;
  undefined4 local_b4;
  undefined4 local_b0;
  undefined4 uStack_ac;
  undefined4 uStack_a8;
  undefined4 uStack_a4;
  undefined4 uStack_a0;
  undefined4 uStack_9c;
  undefined4 uStack_98;
  undefined4 uStack_94;
  undefined4 uStack_90;
  undefined4 uStack_8c;
  undefined4 uStack_88;
  undefined4 uStack_84;
  int iStack_80;
  int aiStack_7c [6];
  undefined1 auStack_64 [12];
  undefined1 auStack_58 [12];
  int iStack_4c;
  int iStack_48;
  int aiStack_40 [4];
  int iStack_30;
  undefined4 uStack_28;
  
  uStack_28 = param_4;
  piVar2 = (int *)jus_AllocDebug(0x110,s_JPower_cpp_02171360,s_JPower_Add_021711d8,0x108);
  FUN_020517fc(piVar2,0,0x110);
  iVar3 = FUN_02026f94();
  piVar2[1] = iVar3;
  aiStack_7c[5] = 0x80000;
  (**(code **)(**(int **)(iVar3 + 4) + 0xa0))(*(int **)(iVar3 + 4),aiStack_7c + 5);
  FUN_02028384(*(undefined4 *)(piVar2[1] + 4),FUN_02163200);
  (**(code **)(**(int **)(piVar2[1] + 4) + 0x24))(*(int **)(piVar2[1] + 4),piVar2);
  func_0x021b65bc();
  iVar3 = FUN_020310f4();
  *piVar2 = iVar3;
  DAT_02093c04 = DAT_02093c04 + -1;
  *(undefined4 *)(&DAT_020a16c0 + DAT_02093c04 * 4) = DAT_020a0e80;
  FUN_020314a0(*(undefined4 *)(iVar3 + 4));
  piVar2[0x41] = param_1;
  FUN_02043264(1);
  iVar3 = FUN_0203b414(0);
  aiStack_7c[1] = 0x1000;
  piVar4 = *(int **)(*(int *)(iVar3 + 0x88) + 4);
  (**(code **)(*piVar4 + 0x10))(piVar4,aiStack_7c + 1);
  iVar3 = FUN_0203b414(1);
  FUN_0203d0b4(*(undefined4 *)(*(int *)(iVar3 + 0x88) + 4),1);
  iVar3 = FUN_0203b414(1);
  FUN_0203d478(*(undefined4 *)(*(int *)(iVar3 + 0x88) + 4),4);
  iVar3 = FUN_0203b414(1);
  FUN_0203cfbc(*(undefined4 *)(*(int *)(iVar3 + 0x88) + 4),0x20,0x20);
  iVar3 = FUN_0203b414(1);
  piVar4 = *(int **)(*(int *)(iVar3 + 0x88) + 4);
  (**(code **)(*piVar4 + 0x90))(piVar4,0x4000);
  iVar3 = FUN_0203b414(1);
  aiStack_7c[2] = 0;
  piVar4 = *(int **)(*(int *)(iVar3 + 0x88) + 4);
  (**(code **)(*piVar4 + 0x10))(piVar4,aiStack_7c + 2);
  iVar3 = FUN_0203b414(2);
  FUN_0203d0b4(*(undefined4 *)(*(int *)(iVar3 + 0x88) + 4),1);
  iVar3 = FUN_0203b414(2);
  FUN_0203d478(*(undefined4 *)(*(int *)(iVar3 + 0x88) + 4),4);
  iVar3 = FUN_0203b414(2);
  FUN_0203cfbc(*(undefined4 *)(*(int *)(iVar3 + 0x88) + 4),0x20,0x40);
  iVar3 = FUN_0203b414(2);
  piVar4 = *(int **)(*(int *)(iVar3 + 0x88) + 4);
  (**(code **)(*piVar4 + 0x90))(piVar4,0x8000);
  iVar3 = FUN_0203b414(2);
  aiStack_7c[3] = 0x2000;
  piVar4 = *(int **)(*(int *)(iVar3 + 0x88) + 4);
  (**(code **)(*piVar4 + 0x10))(piVar4,aiStack_7c + 3);
  iVar3 = FUN_0203b414(3);
  FUN_0203d0b4(*(undefined4 *)(*(int *)(iVar3 + 0x88) + 4),1);
  iVar3 = FUN_0203b414(3);
  FUN_0203d478(*(undefined4 *)(*(int *)(iVar3 + 0x88) + 4),4);
  iVar3 = FUN_0203b414(3);
  FUN_0203cfbc(*(undefined4 *)(*(int *)(iVar3 + 0x88) + 4),0x20,0x20);
  iVar3 = FUN_0203b414(3);
  piVar4 = *(int **)(*(int *)(iVar3 + 0x88) + 4);
  (**(code **)(*piVar4 + 0x90))(piVar4,0x8000);
  iVar3 = FUN_0203b414(3);
  aiStack_7c[4] = 0x3000;
  piVar4 = *(int **)(*(int *)(iVar3 + 0x88) + 4);
  (**(code **)(*piVar4 + 0x10))(piVar4,aiStack_7c + 4);
  iVar3 = FUN_0203b414(3);
  piVar4 = *(int **)(*(int *)(iVar3 + 0x88) + 4);
  (**(code **)(*piVar4 + 0x94))(piVar4,1);
  iVar3 = JPowerData::JPowerData_Create();
  piVar2[0x25] = iVar3;
  iVar3 = ComicDeck::ComicDeckCreate(1,1);
  piVar2[0x26] = iVar3;
  uVar5 = FUN_02165398(piVar2[0x25],piVar2[0x41]);
  iVar3 = FUN_02076c98(0,uVar5);
  piVar2[0x27] = iVar3;
  iVar3 = FUN_0214e690();
  piVar2[0x42] = iVar3;
  iVar3 = func_0x021ba49c(0,1,1);
  piVar2[0x21] = iVar3;
  iVar3 = 0;
  do {
    iVar6 = FUN_020101f4((&DAT_02171200)[iVar3],0);
    iVar14 = iVar3 + 1;
    piVar2[iVar3 + 3] = iVar6;
    iVar3 = iVar14;
  } while (iVar14 < 6);
  iVar3 = JPowerInfo::JPowerInfo_Create(piVar2);
  piVar2[0x24] = iVar3;
  FUN_02166650();
  iVar3 = FUN_02075f60(piVar2 + 0x28);
  piVar2[0x1b] = iVar3;
  iVar3 = FUN_02163488(s_bin_infoname_bin_0217136c,0,0);
  piVar2[0x1c] = iVar3;
  iVar3 = (**(code **)(**(int **)(iVar3 + 4) + 0x2c))(*(int **)(iVar3 + 4),0);
  piVar2[0x29] = iVar3;
  iVar3 = StageData::StageData_Create();
  piVar2[0x2a] = iVar3;
  iVar3 = DemoData::DemoData_Create();
  piVar2[0x2b] = iVar3;
  iVar3 = BgmData::BgmData_Create();
  piVar2[0x2c] = iVar3;
  iVar3 = PieceData::PieceData_Create();
  piVar2[0x2d] = iVar3;
  iVar3 = TitleData::TitleData_Create();
  piVar2[0x2e] = iVar3;
  iVar3 = FUN_02163488(s_jgalaxy_jgalaxy_bin_02171380,0,0);
  piVar2[0x1d] = iVar3;
  iVar3 = (**(code **)(**(int **)(iVar3 + 4) + 0x2c))(*(int **)(iVar3 + 4),0);
  iVar6 = (**(code **)(**(int **)(piVar2[0x1d] + 4) + 0x2c))
                    (*(int **)(piVar2[0x1d] + 4),*(undefined4 *)(iVar3 + 0xc));
  piVar2[0x2f] = iVar6;
  piVar2[0x30] = (uint)*(ushort *)(iVar3 + 2);
  iVar3 = jus_AllocDebug(0x78,s_ALNodeImp_h_021711e4,s_Create_021711c8,0x4c3);
  if (iVar3 != 0) {
    jus_Class_0209c0b4::jus_Class_0209c0b4(iVar3,FUN_02024a30,1);
  }
  iVar3 = FUN_021504fc();
  (**(code **)(**(int **)(iVar3 + 4) + 0xd8))(*(int **)(iVar3 + 4),1);
  FUN_02023940(*(undefined4 *)(iVar3 + 4));
  FUN_02151fcc(&local_b4,iVar3,s_Position_02171394);
  local_bc = 0xfff40000;
  local_b8 = 0;
  FUN_0214ce68(iVar3,&local_b8,&local_bc);
  FUN_02023c60(*(undefined4 *)(iVar3 + 4),local_b4,0,local_b0);
  local_c4 = 0;
  local_c0 = 0;
  FUN_0214ce68(iVar3,&local_c0,&local_c4);
  FUN_02023c60(*(undefined4 *)(iVar3 + 4),local_b4,8,local_b0);
  local_cc = 0xfff40000;
  local_c8 = 0;
  FUN_0214ce68(iVar3,&local_c8,&local_cc);
  piVar4 = *(int **)(*(int *)(iVar3 + 4) + 0x68);
  (**(code **)(*piVar4 + 0xac))(piVar4,0);
  FUN_02023c80(*(undefined4 *)(iVar3 + 4),local_b4,0x494c,local_b0);
  (**(code **)(**(int **)(*(int *)(iVar3 + 4) + 0x68) + 0x70))();
  piVar2[2] = iVar3;
  iVar3 = FUN_0203b414(3);
  iVar3 = FUN_021639d8(s_info_bg_021713a0,*(undefined4 *)(iVar3 + 0x88));
  piVar2[9] = iVar3;
  iVar3 = FUN_0203b414(2);
  iVar3 = FUN_021639d8(s_jpower_jp_021713a8,*(undefined4 *)(iVar3 + 0x88));
  piVar2[10] = iVar3;
  iVar6 = piVar2[9];
  uStack_a8 = 0xfff00000;
  uStack_ac = 0;
  uStack_a4 = 0x100000;
  FUN_021595f4(auStack_64,&uStack_a4,&uStack_a8,&uStack_ac);
  uStack_a0 = 0;
  uStack_9c = 0;
  uStack_98 = 0;
  FUN_021595f4(auStack_58,&uStack_98,&uStack_9c,&uStack_a0);
  FUN_02151fcc(&uStack_94,iVar6,s_Position_02171394);
  iVar3 = jus_AllocDebug(0x4c,s_ALControllerImp_h_021712dc,s_Create_021711c0,0x2b9);
  piVar4 = (int *)0x0;
  if (iVar3 != 0) {
    piVar4 = (int *)jus_TagIPCT::jus_TagIPCT
                              (iVar3,0,uStack_94,uStack_90,0x494c,auStack_58,auStack_64,0x400,2);
  }
  if (piVar4[6] == 0) {
    (**(code **)(*piVar4 + 0x14))();
  }
  FUN_02020f38(iVar6,piVar4[6]);
  FUN_021500cc(piVar2[10],piVar2[2]);
  iVar3 = FUN_0203b404();
  iVar3 = FUN_02163b38(0xb0002f,0xb00000,*(undefined4 *)(iVar3 + 0x88),piVar2[2],0x80);
  piVar2[0x1a] = iVar3;
  (**(code **)(**(int **)(iVar3 + 4) + 0xd8))(*(int **)(iVar3 + 4),0);
  iVar3 = jus_AllocDebug(0xcc,s_ALWidget_inl_0216f484,s_Create_021711b0,0x1de);
  piVar4 = (int *)0x0;
  if (iVar3 != 0) {
    piVar4 = (int *)func_0x021af26c(iVar3,FUN_02163898,FUN_02163900,0);
  }
  if (piVar4[6] == 0) {
    (**(code **)(*piVar4 + 0x14))();
  }
  piVar4 = (int *)piVar4[6];
  func_0x021b3b7c(1,0,piVar4,0);
  uVar5 = FUN_021504d4(piVar4,0x31305053);
  uVar7 = FUN_0215b6d8();
  iVar3 = CommonPaletteAnime::CommonPaletteAnime_Create(uVar7,0x41,1,3,0x80);
  FUN_02163884(iVar3,0x8df,0x1e);
  piVar2[0x22] = iVar3;
  uVar5 = FUN_0215b6d8(uVar5);
  iVar3 = CommonPaletteAnime::CommonPaletteAnime_Create(uVar5,0x31,1,3,0x80);
  FUN_02163884(iVar3,0x73f,8);
  piVar2[0x23] = iVar3;
  (**(code **)(*piVar4 + 8))();
  _DAT_021d5154 = 0xffffffff;
  iVar3 = ALWidgetBaseImp::Create(piVar2,0);
  piVar2[0x1e] = iVar3;
  iVar3 = ALWidgetBaseImp::Create(piVar2,piVar2[0x1e]);
  piVar2[0x1f] = iVar3;
  iVar3 = FUN_0203b3e4();
  iVar3 = ALWidgetImp::Create(piVar2,piVar2[0x1f],0x510000,0x510000,*(undefined4 *)(iVar3 + 0x88),
                              0x60,&DAT_02171218,&DAT_021711f0);
  func_0x021b3fc4(*(undefined4 *)(iVar3 + 4),0x510001);
  func_0x021b3fb0(*(undefined4 *)(iVar3 + 4),0x510000);
  func_0x021b3f78(*(undefined4 *)(iVar3 + 4),0x510000);
  func_0x021b6760(*(undefined4 *)(iVar3 + 4),4,FUN_02164ccc);
  *(undefined1 *)(*(int *)(iVar3 + 4) + 0xaa) = 1;
  *(undefined1 *)(*(int *)(iVar3 + 4) + 0xb1) = 1;
  *(undefined1 *)(*(int *)(iVar3 + 4) + 0xab) = 0;
  func_0x021b77a8(*(undefined4 *)(iVar3 + 4),0x20);
  _DAT_021d5154 = 1;
  iVar3 = ALWidgetBaseImp::Create(piVar2,piVar2[0x1e]);
  piVar2[0x20] = iVar3;
  func_0x021b7744(*(undefined4 *)(iVar3 + 4),1);
  FUN_021500cc(piVar2[0x20],piVar2[2]);
  iVar3 = FUN_0203b404();
  iVar3 = ALWidgetImp::Create(piVar2,piVar2[0x20],0,0xb00000,*(undefined4 *)(iVar3 + 0x88),0x85,
                              &DAT_02171224,&DAT_021711f8);
  piVar2[0x31] = iVar3;
  iVar3 = FUN_0203b404();
  iVar3 = FUN_02163b38(0xb00002,0xb00000,*(undefined4 *)(iVar3 + 0x88),piVar2[0x31],0x85);
  *(undefined4 *)(*(int *)(iVar3 + 4) + 0x54) = 0x414d4f4b;
  FUN_02163e70(piVar2[0x31]);
  func_0x021b65e8(*(undefined4 *)(piVar2[0x31] + 4),1,&LAB_02164d1c);
  func_0x021b6760(*(undefined4 *)(piVar2[0x31] + 4),4,&LAB_02164e04);
  FUN_021634b4(&iStack_4c,&DAT_02171230);
  iVar6 = 0;
  iVar3 = DAT_02171234;
  do {
    iVar14 = 0;
    iStack_48 = iVar3;
    do {
      iVar8 = FUN_021653ac(piVar2[0x25],piVar2[0x41],iVar6,iVar14);
      iVar9 = FUN_0203b404();
      iVar9 = ALWidgetImp::Create(piVar2,piVar2[0x20],0,0xb00000,*(undefined4 *)(iVar9 + 0x88),0x85,
                                  &iStack_4c,&DAT_021711f8);
      iVar10 = FUN_0203b404();
      uVar5 = FUN_02164140(iVar8);
      iVar10 = FUN_02163b38(uVar5,0xb00000,*(undefined4 *)(iVar10 + 0x88),iVar9,0x85);
      *(undefined4 *)(*(int *)(iVar10 + 4) + 0x54) = 0x414d4f4b;
      FUN_02163e70(iVar9);
      func_0x021b65e8(*(undefined4 *)(iVar9 + 4),1,FUN_02164d34);
      iVar10 = FUN_0203b404();
      iVar10 = FUN_02163b38(0xb00012,0xb00000,*(undefined4 *)(iVar10 + 0x88),0,0x82);
      FUN_021500cc(iVar10,iVar9);
      FUN_021639a8(iVar10,&DAT_0217123c);
      FUN_021506ec(piVar2[2],iVar10);
      FUN_021634b4(aiStack_40 + 3,&DAT_02171248);
      iVar13 = 0;
      do {
        sVar1 = *(short *)(iVar8 + iVar13 * 2 + 8);
        if (sVar1 != 0) {
          iVar11 = FUN_0203b404();
          uVar5 = FUN_02163b38(iVar13 + 0xb00015,0xb00000,*(undefined4 *)(iVar11 + 0x88),0,0x81);
          aiStack_7c[0] = aiStack_40[3] + -0xe000;
          iStack_80 = iStack_30;
          FUN_0214ce68(uVar5,aiStack_7c,&iStack_80);
          FUN_021500cc(uVar5,iVar10);
          FUN_021506ec(piVar2[2],uVar5);
          iVar11 = 0;
          do {
            iVar12 = FUN_0203b404();
            iVar12 = FUN_02163b38(0xb0001b,0xb00000,*(undefined4 *)(iVar12 + 0x88),0,0x81);
            aiStack_40[iVar11] = iVar12;
            FUN_021639a8(iVar12,aiStack_40 + 3);
            FUN_021500cc(aiStack_40[iVar11],iVar10);
            FUN_021506ec(piVar2[2],aiStack_40[iVar11]);
            iVar11 = iVar11 + 1;
          } while (iVar11 < 3);
          FUN_021640c0(sVar1,aiStack_40,0xb0001b,3,aiStack_40 + 3,7);
          iStack_30 = iStack_30 + 0x8000;
        }
        iVar13 = iVar13 + 1;
      } while (iVar13 < 6);
      piVar2[iVar6 * 3 + iVar14 + 0xb] = iVar10;
      iVar10 = FUN_02164234(iVar8);
      if (iVar10 == 0) {
        uVar5 = FUN_021641f8(iVar8,iVar6,0xb00025);
        iVar8 = FUN_0203b404();
        iVar8 = FUN_02163b38(uVar5,0xb00000,*(undefined4 *)(iVar8 + 0x88),iVar9,0x83);
        uStack_88 = 0x83000;
        FUN_0214d494(iVar9,&uStack_88);
        func_0x021b6760(*(undefined4 *)(iVar9 + 4),4,FUN_02164ebc);
      }
      else {
        uVar5 = FUN_021641f8(iVar8,iVar6,0xb0002a);
        iVar8 = FUN_0203b404();
        iVar8 = FUN_02163b38(uVar5,0xb00000,*(undefined4 *)(iVar8 + 0x88),iVar9,0x84);
        uStack_8c = 0x84000;
        FUN_0214d494(iVar9,&uStack_8c);
        func_0x021b6760(*(undefined4 *)(iVar9 + 4),4,FUN_0216524c);
        func_0x021b6760(*(undefined4 *)(iVar9 + 4),1,FUN_02164db0);
        (**(code **)(**(int **)(piVar2[iVar6 * 3 + iVar14 + 0xb] + 4) + 0xd8))
                  (*(int **)(piVar2[iVar6 * 3 + iVar14 + 0xb] + 4),0);
      }
      uStack_84 = 0xffff4000;
      FUN_02150a10(iVar8,&uStack_84);
      *(undefined4 *)(*(int *)(iVar8 + 4) + 0x54) = 0x54554f52;
      *(int *)(*(int *)(iVar9 + 4) + 0x124) = iVar14 + iVar6 * 3;
      piVar2[iVar6 * 3 + iVar14 + 0x32] = iVar9;
      iVar14 = iVar14 + 1;
      iStack_48 = iStack_48 + 0x38000;
    } while (iVar14 < 3);
    iVar6 = iVar6 + 1;
    iStack_4c = iStack_4c + 0x28000;
  } while (iVar6 < 5);
  FUN_02164aec(piVar2);
  FUN_021634d0(piVar2);
  FUN_02164b94(piVar2);
  FUN_02073ebc(2,1);
  (**(code **)(**(int **)(*(int *)(piVar2[2] + 4) + 0x68) + 0x6c))();
  FUN_02166234(piVar2[0x24]);
  FUN_020734e0(4);
  FUN_0207361c(4,0);
  return *piVar2;
}

