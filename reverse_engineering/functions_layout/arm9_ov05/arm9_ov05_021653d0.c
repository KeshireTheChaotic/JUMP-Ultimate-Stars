
/* JUS-GAME JPowerInfo::JPowerInfo_Create [source-string] __FILE__="JPowerInfo.cpp"
   __FUNCTION__="JPowerInfo_Create" lines=[183, 697, 1219] passed to 4 source-location call(s);
   header inlines: ALControllerImp.h:Create, ALNodeImp.h:Create */

int * JPowerInfo::JPowerInfo_Create
                (int param_1,undefined4 param_2,undefined4 param_3,undefined4 param_4)

{
  int *piVar1;
  int iVar2;
  int *piVar3;
  undefined4 uVar4;
  int iVar5;
  int iVar6;
  undefined4 local_14c;
  undefined4 local_148;
  undefined4 local_144;
  undefined4 local_140;
  undefined4 local_13c;
  undefined4 local_138;
  undefined4 local_134;
  undefined4 local_130;
  undefined4 local_12c;
  undefined4 local_128;
  undefined4 local_124;
  undefined4 local_120;
  undefined4 local_11c;
  undefined4 local_118;
  undefined4 local_114;
  undefined4 local_110;
  undefined4 local_10c;
  undefined4 local_108;
  undefined4 local_104;
  undefined4 local_100;
  undefined4 local_fc;
  undefined4 local_f8;
  undefined4 local_f4;
  undefined4 local_f0;
  undefined4 local_ec;
  undefined4 local_e8;
  undefined4 local_e4;
  undefined4 local_e0;
  undefined4 local_dc;
  undefined4 local_d8;
  int local_d4;
  undefined4 local_d0;
  undefined4 local_cc;
  undefined4 local_c8;
  undefined4 local_c4;
  undefined4 local_c0;
  undefined1 auStack_bc [12];
  undefined1 auStack_b0 [12];
  undefined1 auStack_a4 [22];
  undefined1 auStack_8e [22];
  int local_78;
  int local_74;
  int local_6c;
  int local_68;
  undefined1 auStack_60 [22];
  undefined1 auStack_4a [22];
  undefined1 auStack_34 [4];
  int local_30;
  undefined4 uStack_28;
  
  uStack_28 = param_4;
  piVar1 = (int *)thunk_FUN_0201a228(300,s_JPowerInfo_cpp_021714b4,s_JPowerInfo_Create_0217141c,0xb7
                                    );
  FUN_020517fc(piVar1,0,300);
  *piVar1 = param_1;
  iVar2 = FUN_0203b424(0);
  FUN_0203d0b4(*(undefined4 *)(*(int *)(iVar2 + 0x88) + 4),1);
  iVar2 = FUN_0203b424(0);
  FUN_0203d478(*(undefined4 *)(*(int *)(iVar2 + 0x88) + 4),4);
  iVar2 = FUN_0203b424(0);
  FUN_0203cfbc(*(undefined4 *)(*(int *)(iVar2 + 0x88) + 4),0x20,0x20);
  iVar2 = FUN_0203b424(0);
  piVar3 = *(int **)(*(int *)(iVar2 + 0x88) + 4);
  (**(code **)(*piVar3 + 0x90))(piVar3,0x8000);
  iVar2 = FUN_0203b424(0);
  local_cc = 0;
  piVar3 = *(int **)(*(int *)(iVar2 + 0x88) + 4);
  (**(code **)(*piVar3 + 0x10))(piVar3,&local_cc);
  iVar2 = FUN_0203b424(0);
  *(undefined1 *)(*(int *)(*(int *)(iVar2 + 0x88) + 4) + 0x956) = 1;
  iVar2 = FUN_0203b424(1);
  FUN_0203d0b4(*(undefined4 *)(*(int *)(iVar2 + 0x88) + 4),1);
  iVar2 = FUN_0203b424(1);
  FUN_0203d478(*(undefined4 *)(*(int *)(iVar2 + 0x88) + 4),4);
  iVar2 = FUN_0203b424(1);
  FUN_0203cfbc(*(undefined4 *)(*(int *)(iVar2 + 0x88) + 4),0x20,0x40);
  iVar2 = FUN_0203b424(1);
  piVar3 = *(int **)(*(int *)(iVar2 + 0x88) + 4);
  (**(code **)(*piVar3 + 0x90))(piVar3,0x4000);
  iVar2 = FUN_0203b424(1);
  local_c8 = 0x2000;
  piVar3 = *(int **)(*(int *)(iVar2 + 0x88) + 4);
  (**(code **)(*piVar3 + 0x10))(piVar3,&local_c8);
  iVar2 = FUN_0203b424(2);
  FUN_0203d0b4(*(undefined4 *)(*(int *)(iVar2 + 0x88) + 4),1);
  iVar2 = FUN_0203b424(2);
  FUN_0203d478(*(undefined4 *)(*(int *)(iVar2 + 0x88) + 4),4);
  iVar2 = FUN_0203b424(2);
  FUN_0203cfbc(*(undefined4 *)(*(int *)(iVar2 + 0x88) + 4),0x20,0x20);
  iVar2 = FUN_0203b424(2);
  piVar3 = *(int **)(*(int *)(iVar2 + 0x88) + 4);
  (**(code **)(*piVar3 + 0x90))(piVar3,0x8000);
  iVar2 = FUN_0203b424(2);
  local_c4 = 0x3000;
  piVar3 = *(int **)(*(int *)(iVar2 + 0x88) + 4);
  (**(code **)(*piVar3 + 0x10))(piVar3,&local_c4);
  iVar2 = FUN_0203b424(2);
  piVar3 = *(int **)(*(int *)(iVar2 + 0x88) + 4);
  (**(code **)(*piVar3 + 0x94))(piVar3,1);
  iVar2 = FUN_0203b424(3);
  FUN_0203d0b4(*(undefined4 *)(*(int *)(iVar2 + 0x88) + 4),3);
  iVar2 = FUN_0203b424(3);
  FUN_0203d478(*(undefined4 *)(*(int *)(iVar2 + 0x88) + 4),8);
  iVar2 = FUN_0203b424(3);
  FUN_0203cfbc(*(undefined4 *)(*(int *)(iVar2 + 0x88) + 4),0x40,0x40);
  iVar2 = FUN_0203b424(3);
  piVar3 = *(int **)(*(int *)(iVar2 + 0x88) + 4);
  (**(code **)(*piVar3 + 0x90))(piVar3,0x4000);
  iVar2 = FUN_0203b424(3);
  local_c0 = 0x1000;
  piVar3 = *(int **)(*(int *)(iVar2 + 0x88) + 4);
  (**(code **)(*piVar3 + 0x10))(piVar3,&local_c0);
  iVar2 = thunk_FUN_0201a228(0x78,s_ALNodeImp_h_021711e4,s_Create_02171414,0x4c3);
  if (iVar2 != 0) {
    jus_TagNDGR_0209c0b4::jus_TagNDGR_0209c0b4(iVar2,FUN_02024a30,1);
  }
  iVar2 = FUN_021504fc();
  (**(code **)(**(int **)(iVar2 + 4) + 0xd8))(*(int **)(iVar2 + 4),1);
  FUN_02023940(*(undefined4 *)(iVar2 + 4));
  FUN_02151fcc(&local_fc,iVar2,s_Position_021714c4);
  local_104 = 0xc0000;
  local_100 = 0;
  FUN_0214ce68(iVar2,&local_100,&local_104);
  FUN_02023c60(*(undefined4 *)(iVar2 + 4),local_fc,0,local_f8);
  local_10c = 0;
  local_108 = 0;
  FUN_0214ce68(iVar2,&local_108,&local_10c);
  FUN_02023c60(*(undefined4 *)(iVar2 + 4),local_fc,8,local_f8);
  local_114 = 0xc0000;
  local_110 = 0;
  FUN_0214ce68(iVar2,&local_110,&local_114);
  piVar3 = *(int **)(*(int *)(iVar2 + 4) + 0x68);
  (**(code **)(*piVar3 + 0xac))(piVar3,0);
  FUN_02023c80(*(undefined4 *)(iVar2 + 4),local_fc,0x494c,local_f8);
  (**(code **)(**(int **)(*(int *)(iVar2 + 4) + 0x68) + 0x70))();
  piVar1[2] = iVar2;
  iVar2 = thunk_FUN_0201a228(0x78,s_ALNodeImp_h_021711e4,s_Create_02171414,0x4c3);
  if (iVar2 != 0) {
    jus_TagNDGR_0209c0b4::jus_TagNDGR_0209c0b4(iVar2,FUN_02024a30,1);
  }
  iVar2 = FUN_021504fc();
  (**(code **)(**(int **)(iVar2 + 4) + 0xd8))(*(int **)(iVar2 + 4),1);
  FUN_02023940(*(undefined4 *)(iVar2 + 4));
  FUN_02151fcc(&local_11c,iVar2,s_Position_021714c4);
  local_f8 = local_118;
  local_124 = 0;
  local_fc = local_11c;
  local_120 = 0x100000;
  FUN_0214ce68(iVar2,&local_120,&local_124);
  FUN_02023c60(*(undefined4 *)(iVar2 + 4),local_fc,0,local_f8);
  FUN_02023c60(*(undefined4 *)(iVar2 + 4),local_fc,4,local_f8);
  local_12c = 0;
  local_128 = 0;
  FUN_0214ce68(iVar2,&local_128,&local_12c);
  FUN_02023c60(*(undefined4 *)(iVar2 + 4),local_fc,0xc,local_f8);
  piVar3 = *(int **)(*(int *)(iVar2 + 4) + 0x68);
  (**(code **)(*piVar3 + 0xac))(piVar3,0);
  FUN_02023c80(*(undefined4 *)(iVar2 + 4),local_fc,0x494c,local_f8);
  (**(code **)(**(int **)(*(int *)(iVar2 + 4) + 0x68) + 0x70))();
  FUN_02023c70(*(undefined4 *)(iVar2 + 4),1);
  FUN_020239a0(*(undefined4 *)(iVar2 + 4));
  local_134 = 0;
  local_130 = 0;
  FUN_0214ce68(iVar2,&local_130,&local_134);
  FUN_02023c60(*(undefined4 *)(iVar2 + 4),local_fc,0,local_f8);
  FUN_02023c60(*(undefined4 *)(iVar2 + 4),local_fc,4,local_f8);
  local_13c = 0;
  local_138 = 0xfff00000;
  FUN_0214ce68(iVar2,&local_138,&local_13c);
  FUN_02023c60(*(undefined4 *)(iVar2 + 4),local_fc,0xc,local_f8);
  piVar3 = *(int **)(*(int *)(iVar2 + 4) + 0x68);
  (**(code **)(*piVar3 + 0xac))(piVar3,0);
  FUN_02023c80(*(undefined4 *)(iVar2 + 4),local_fc,0x494c,local_f8);
  (**(code **)(**(int **)(*(int *)(iVar2 + 4) + 0x68) + 0x70))();
  FUN_02023c70(*(undefined4 *)(iVar2 + 4),2);
  local_144 = 0;
  local_140 = 0x100000;
  FUN_0214ce68(iVar2,&local_140,&local_144);
  FUN_021500cc(iVar2,piVar1[2]);
  FUN_021506ec(piVar1[2],iVar2);
  piVar1[3] = iVar2;
  iVar2 = FUN_02026f94();
  piVar1[1] = iVar2;
  (**(code **)(**(int **)(iVar2 + 4) + 0x24))(*(int **)(iVar2 + 4),piVar1);
  FUN_02028384(*(undefined4 *)(piVar1[1] + 4),FUN_021662d8);
  local_148 = 0x8a000;
  (**(code **)(**(int **)(piVar1[1] + 4) + 0xa0))(*(int **)(piVar1[1] + 4),&local_148);
  FUN_020282f4(*(undefined4 *)(piVar1[1] + 4));
  iVar2 = FUN_02076908(*(undefined4 *)(*piVar1 + 0x98));
  piVar1[0x45] = iVar2;
  iVar2 = FUN_0203b424(0);
  uVar4 = *(undefined4 *)(iVar2 + 0x88);
  iVar2 = FUN_0203b3f4();
  iVar2 = ComicDeckMakeDisp::ComicDeck_DispKomaCreate(*(undefined4 *)(iVar2 + 0x88),uVar4);
  piVar1[0x47] = iVar2;
  uVar4 = FUN_02165398(*(undefined4 *)(*piVar1 + 0x94),*(undefined4 *)(*piVar1 + 0x104));
  FUN_0214cf50(piVar1[0x47],piVar1[0x45],uVar4,1,0x80);
  iVar2 = FUN_0214ceb4(piVar1[0x47]);
  if (iVar2 != 0) {
    local_14c = 0xa0000;
    FUN_0214d494(iVar2,&local_14c);
    FUN_021500cc(iVar2,piVar1[2]);
    FUN_021639a8(iVar2,&DAT_0217143c);
  }
  iVar2 = ComicDeckDisp::ComicDeck_DispCreate(1,0,0,1,1);
  piVar1[0x46] = iVar2;
  iVar2 = FUN_0203b424(0);
  FUN_0203cfbc(*(undefined4 *)(*(int *)(iVar2 + 0x88) + 4),0x40,0x20);
  FUN_0207903c(piVar1[0x46],8,0);
  FUN_0207974c(piVar1[0x46]);
  iVar2 = FUN_0203b424(0);
  uVar4 = *(undefined4 *)(iVar2 + 0x88);
  iVar2 = FUN_0203b3f4();
  iVar2 = ComicDeckMakeDisp::ComicDeck_DispKomaCreate(*(undefined4 *)(iVar2 + 0x88),uVar4);
  piVar1[0x48] = iVar2;
  iVar2 = TitleData::TitleData_Create();
  piVar1[0x49] = iVar2;
  iVar2 = FUN_0203b424(2);
  iVar2 = FUN_021639d8(s_info_bg_021714d0,*(undefined4 *)(iVar2 + 0x88));
  piVar1[4] = iVar2;
  iVar2 = FUN_0203b424(1);
  iVar2 = FUN_021639d8(s_jpower_jp_top_021714d8,*(undefined4 *)(iVar2 + 0x88));
  piVar1[5] = iVar2;
  iVar2 = FUN_0203b424(3);
  iVar2 = FUN_021639d8(s_deckselect_deck_base_021714e8,*(undefined4 *)(iVar2 + 0x88));
  piVar1[7] = iVar2;
  iVar5 = piVar1[4];
  local_f4 = 0;
  local_f0 = 0xfff00000;
  local_ec = 0x100000;
  FUN_021595f4(auStack_bc,&local_ec,&local_f0,&local_f4);
  local_e8 = 0;
  local_e4 = 0;
  local_e0 = 0;
  FUN_021595f4(auStack_b0,&local_e0,&local_e4,&local_e8);
  FUN_02151fcc(&local_dc,iVar5,s_Position_021714c4);
  iVar2 = thunk_FUN_0201a228(0x4c,s_ALControllerImp_h_021712dc,s_Create_0217140c,0x2b9);
  piVar3 = (int *)0x0;
  if (iVar2 != 0) {
    piVar3 = (int *)jus_TagIPCT::jus_TagIPCT
                              (iVar2,0,local_dc,local_d8,0x494c,auStack_b0,auStack_bc,0x400,2);
  }
  if (piVar3[6] == 0) {
    (**(code **)(*piVar3 + 0x14))();
  }
  FUN_02020f38(iVar5,piVar3[6]);
  FUN_021500cc(piVar1[5],piVar1[2]);
  FUN_021500cc(piVar1[7],piVar1[3]);
  iVar2 = FUN_0203b3f4();
  uVar4 = FUN_02163b38(0xb20000,0xb20000,*(undefined4 *)(iVar2 + 0x88),0,0xa1);
  FUN_021639a8(uVar4,&DAT_02171430);
  FUN_021506ec(piVar1[2],uVar4);
  iVar2 = FUN_0203b3f4();
  uVar4 = FUN_02163b38(0xb20001,0xb20000,*(undefined4 *)(iVar2 + 0x88),piVar1[2],0xa2);
  FUN_021634b4(&local_78,&DAT_02171448);
  iVar2 = FUN_02166934(piVar1,*(byte *)(*(int *)(*piVar1 + 0x9c) + 4) - 1,auStack_8e,auStack_a4);
  if (iVar2 == 0) {
    local_d0 = DAT_02171454;
    local_d4 = DAT_02171458 + 0x8000;
    FUN_0214ce68(uVar4,&local_d0,&local_d4);
    local_74 = local_74 + -0x8000;
    iVar2 = FUN_02074294(auStack_8e);
    local_78 = local_78 + ((iVar2 * 0xc) / 2) * -0x1000;
  }
  else {
    FUN_021639a8(uVar4,&DAT_02171454);
    iVar2 = FUN_02074294(auStack_8e);
    local_78 = local_78 + ((iVar2 * 0xc) / 2) * -0x1000;
  }
  iVar2 = FUN_0203b3f4();
  uVar4 = FUN_02163b38(*(byte *)(*(int *)(*piVar1 + 0x9c) + 4) + 0xa00fff,0xa01000,
                       *(undefined4 *)(iVar2 + 0x88),piVar1[2],0xa4);
  local_78 = local_78 + -0xa000;
  FUN_021639a8(uVar4,&local_78);
  iVar2 = FUN_0203b3f4();
  uVar4 = FUN_02163b38(0xb20024,0xb20000,*(undefined4 *)(iVar2 + 0x88),piVar1[2],0xa5);
  FUN_021639a8(uVar4,&local_78);
  iVar2 = FUN_0203b3f4();
  iVar2 = FUN_02163b38(0xb20002,0xb20000,*(undefined4 *)(iVar2 + 0x88),piVar1[2],0xa2);
  FUN_021639a8(iVar2,&DAT_02171460);
  piVar1[8] = iVar2;
  FUN_021667b0(&local_78,&DAT_0217146c);
  iVar2 = 0;
  local_78 = local_78 + -0xf000;
  do {
    FUN_0207281c(iVar2);
    iVar6 = 0;
    iVar5 = local_78;
    do {
      local_78 = iVar5;
      iVar5 = FUN_0203b3f4();
      iVar5 = FUN_02163b38(0xb20003,0xb20000,*(undefined4 *)(iVar5 + 0x88),piVar1[2],0xa3);
      FUN_021639a8(iVar5,&local_78);
      piVar1[iVar2 * 5 + iVar6 + 9] = iVar5;
      iVar6 = iVar6 + 1;
      iVar5 = local_78 + 0x6000;
    } while (iVar6 < 5);
    local_78 = local_78 + 0xa000;
    iVar2 = iVar2 + 1;
  } while (iVar2 < 6);
  FUN_021667b0(&local_78,&DAT_02171478);
  iVar2 = 0;
  local_78 = local_78 + -0xf000;
  do {
    iVar6 = 0;
    iVar5 = local_78;
    do {
      local_78 = iVar5;
      iVar5 = FUN_0203b3f4();
      iVar5 = FUN_02163b38(0xb20018,0xb20000,*(undefined4 *)(iVar5 + 0x88),piVar1[2],0xa3);
      FUN_021639a8(iVar5,&local_78);
      piVar1[iVar2 * 5 + iVar6 + 0x27] = iVar5;
      iVar6 = iVar6 + 1;
      iVar5 = local_78 + 0x6000;
    } while (iVar6 < 5);
    local_78 = local_78 + 0xa000;
    iVar2 = iVar2 + 1;
  } while (iVar2 < 6);
  FUN_02166730(piVar1);
  FUN_021634b4(auStack_34,&DAT_02171490);
  iVar2 = FUN_02166934(piVar1,*(byte *)(*(int *)(*piVar1 + 0x9c) + 4) - 1,auStack_4a,auStack_60);
  if (iVar2 == 0) {
    FUN_021634b4(&local_6c,&DAT_02171484);
    local_68 = local_68 + -0x8000;
    iVar2 = FUN_021667cc(piVar1,piVar1[2],&local_6c,0xa0);
    piVar3 = *(int **)(*(int *)(iVar2 + 4) + 100);
    (**(code **)(*piVar3 + 0x68))(piVar3,auStack_4a);
    local_6c = local_6c + 0x8000;
    local_68 = local_68 + 0x10000;
    iVar2 = FUN_021667cc(piVar1,piVar1[2],&local_6c,0x90);
    piVar3 = *(int **)(*(int *)(iVar2 + 4) + 100);
    (**(code **)(*piVar3 + 0x68))(piVar3,auStack_60);
    local_30 = local_30 + 0x8000;
  }
  else {
    iVar2 = FUN_021667cc(piVar1,piVar1[2],&DAT_02171484,0xa0);
    piVar3 = *(int **)(*(int *)(iVar2 + 4) + 100);
    (**(code **)(*piVar3 + 0x68))(piVar3,auStack_4a);
  }
  iVar2 = FUN_021667cc(piVar1,piVar1[2],auStack_34,0x90);
  uVar4 = FUN_0214e030(*(undefined4 *)(*piVar1 + 0x9c));
  piVar3 = *(int **)(*(int *)(iVar2 + 4) + 100);
  (**(code **)(*piVar3 + 0x68))(piVar3,uVar4);
  uVar4 = FUN_02079034(piVar1[0x46]);
  FUN_021500cc(uVar4,piVar1[3]);
  return piVar1;
}

