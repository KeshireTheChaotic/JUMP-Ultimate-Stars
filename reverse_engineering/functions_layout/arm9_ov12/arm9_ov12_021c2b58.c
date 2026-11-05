
/* JUS-GAME StageView::StageView_Create [source-string] __FILE__="StageView.cpp"
   __FUNCTION__="StageView_Create" lines=[215, 697, 1219] passed to 3 source-location call(s);
   header inlines: ALControllerImp.h:Create, ALNodeImp.h:Create */

int * StageView::StageView_Create(undefined1 param_1,undefined1 param_2,byte param_3)

{
  int *piVar1;
  int iVar2;
  int iVar3;
  int *piVar4;
  undefined4 unaff_r5;
  undefined4 unaff_r6;
  undefined4 uVar5;
  undefined4 local_d4;
  undefined4 local_d0;
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
  undefined4 local_90;
  undefined4 local_8c;
  undefined4 local_88;
  undefined4 local_84;
  undefined4 local_80;
  undefined4 local_7c;
  undefined4 local_78;
  undefined4 local_74;
  undefined4 local_70;
  undefined4 local_6c;
  undefined4 local_68;
  undefined4 local_64;
  undefined4 local_60;
  undefined4 local_5c;
  undefined4 local_58;
  undefined4 local_54;
  undefined4 local_50;
  undefined4 local_4c;
  undefined4 local_48;
  undefined4 local_44;
  undefined4 local_40;
  undefined4 local_3c;
  undefined1 auStack_38 [12];
  undefined1 auStack_2c [12];
  undefined1 auStack_20 [12];
  
  piVar1 = (int *)thunk_FUN_0201a228(0xac,s_StageView_cpp_021d4408,s_StageView_Create_021d43e0,0xd7)
  ;
  if (piVar1 != (int *)0x0) {
    piVar1[0x1f] = 0;
    piVar1[0x20] = 0;
  }
  FUN_020517fc(piVar1,0,0xac);
  iVar2 = FUN_02026f94();
  (**(code **)(**(int **)(iVar2 + 4) + 0x24))(*(int **)(iVar2 + 4),piVar1);
  FUN_020282f4(*(undefined4 *)(iVar2 + 4));
  *piVar1 = iVar2;
  *(undefined1 *)((int)piVar1 + 0xa7) = param_1;
  *(byte *)((int)piVar1 + 0xa9) = (param_3 & 1) << 4 | *(byte *)((int)piVar1 + 0xa9) & 0xef;
  *(undefined1 *)(piVar1 + 0x2a) = param_2;
  iVar2 = FUN_0203b404();
  uVar5 = *(undefined4 *)(*(int *)(iVar2 + 0x88) + 4);
  FUN_021c3394();
  DAT_020a0dd0 = uVar5;
  iVar2 = FUN_02020d90();
  piVar1[1] = iVar2;
  local_98 = 0xffe00000;
  local_9c = 0xffe80000;
  FUN_021bb970(piVar1[1],&local_9c,&local_98);
  (**(code **)(**(int **)(piVar1[1] + 4) + 0x24))(*(int **)(piVar1[1] + 4),piVar1);
  FUN_02028384(*(undefined4 *)(piVar1[1] + 4),0x21c4e41);
  (**(code **)(**(int **)(piVar1[1] + 4) + 0xd8))(*(int **)(piVar1[1] + 4),1);
  FUN_020282f4(*(undefined4 *)(piVar1[1] + 4));
  FUN_021bc03c();
  iVar2 = StageData::StageData_Create();
  piVar1[0x1c] = iVar2;
  iVar2 = BattleObj::Battle_ObjManCreate(0,0,0);
  piVar1[0x24] = iVar2;
  iVar2 = FUN_020101f4(s_stageselect_stageselect_aar_021d4418,0);
  piVar1[3] = iVar2;
  iVar2 = FUN_020101f4(s_stage_stage_aar_021d4434,0);
  piVar1[4] = iVar2;
  iVar2 = FUN_020101f4(s_item_item_aar_021d4444,0);
  piVar1[9] = iVar2;
  iVar2 = FUN_020101f4(s_common_title_icon_2d_aar_021d4454,0);
  piVar1[5] = iVar2;
  iVar2 = FUN_020101f4(s_stageselect_st_top_obj_aar_021d4470,0);
  piVar1[6] = iVar2;
  iVar2 = FUN_020101f4(s_stageselect_smallmap_obj_aar_021d448c,0);
  piVar1[7] = iVar2;
  iVar2 = FUN_021bdb10(s_stageselect_smallmap00_dig_021d44ac);
  piVar1[0xe] = iVar2;
  iVar2 = FUN_021bdb10(s_stageselect_smallmap01_dig_021d44c8);
  piVar1[0xf] = iVar2;
  FUN_021c3394();
  iVar2 = FUN_0203b414(3);
  DAT_020a0dd0 = *(undefined4 *)(*(int *)(iVar2 + 0x88) + 4);
  FUN_02036ab8();
  iVar2 = FUN_021acab4();
  piVar1[0x10] = iVar2;
  (**(code **)(**(int **)(iVar2 + 4) + 0x130))
            (*(int **)(iVar2 + 4),s_stageselect_smallmap00_atm_021d44e4);
  FUN_021bdb3c(piVar1[0x10],piVar1[0xe],0);
  FUN_021c38d8(piVar1[0x10],piVar1[1]);
  (**(code **)(**(int **)(piVar1[0x10] + 4) + 0xd8))(*(int **)(piVar1[0x10] + 4),0);
  iVar2 = FUN_0203b414(2);
  DAT_020a0dd0 = *(undefined4 *)(*(int *)(iVar2 + 0x88) + 4);
  iVar2 = FUN_0203687c(0x40,0x40);
  piVar1[0x11] = iVar2;
  FUN_021bdb3c(iVar2,piVar1[0xf],0);
  FUN_021c38d8(piVar1[0x11],piVar1[1]);
  (**(code **)(**(int **)(piVar1[0x11] + 4) + 0xd8))(*(int **)(piVar1[0x11] + 4),0);
  FUN_021bc03c();
  switch((char)piVar1[0x2a]) {
  case '\0':
  case '\x03':
    unaff_r5 = 0x810000;
    unaff_r6 = 2;
    break;
  case '\x01':
    unaff_r5 = 0x810001;
    unaff_r6 = 4;
    break;
  case '\x02':
    unaff_r5 = 0x810002;
    unaff_r6 = 10;
  }
  local_8c = 0;
  local_90 = 0xa000;
  local_94 = 0x18000;
  FUN_021c3414(auStack_20,&local_94,&local_90,&local_8c);
  iVar2 = FUN_021c4588(piVar1,auStack_20,unaff_r6);
  piVar1[0x13] = iVar2;
  iVar2 = FUN_0203b3e4();
  iVar2 = FUN_021c4644(0xa01000,0,0x20,0,*(undefined4 *)(iVar2 + 0x88));
  piVar1[0x14] = iVar2;
  local_84 = 0x11000;
  local_88 = 0xe000;
  FUN_021bb970(piVar1[0x14],&local_88,&local_84);
  iVar2 = FUN_0203b404();
  iVar2 = FUN_021c4644(0x810000,unaff_r5,0x81,0,*(undefined4 *)(iVar2 + 0x88));
  piVar1[0x15] = iVar2;
  local_7c = 0;
  local_80 = 0x80000;
  FUN_021bb970(piVar1[0x15],&local_80,&local_7c);
  iVar2 = 2;
  do {
    iVar3 = FUN_0203b404();
    iVar3 = FUN_021c4644(0x820000,iVar2 + 0x81fffe,0x82,0,*(undefined4 *)(iVar3 + 0x88));
    piVar1[iVar2 + 0x14] = iVar3;
    FUN_021c38d8(iVar3,piVar1[1]);
    (**(code **)(**(int **)(piVar1[iVar2 + 0x14] + 4) + 0xd8))
              (*(int **)(piVar1[iVar2 + 0x14] + 4),0);
    iVar2 = iVar2 + 1;
  } while (iVar2 < 6);
  iVar2 = thunk_FUN_0201a228(0x78,s_ALNodeImp_h_021d43b4,s_Create_021d439c,0x4c3);
  if (iVar2 != 0) {
    jus_TagNDGR_0209c0b4::jus_TagNDGR_0209c0b4(iVar2,FUN_02024a30,1);
  }
  iVar2 = FUN_021acab4();
  (**(code **)(**(int **)(iVar2 + 4) + 0xd8))(*(int **)(iVar2 + 4),1);
  FUN_021c38d8(piVar1[0x14],iVar2);
  FUN_021c38d8(piVar1[0x15],iVar2);
  FUN_021c38d8(piVar1[0x13],iVar2);
  FUN_02023940(*(undefined4 *)(iVar2 + 4));
  FUN_021c33c4(&local_a4,iVar2,s_Position_021d4500);
  piVar4 = *(int **)(*(int *)(iVar2 + 4) + 0x68);
  (**(code **)(*piVar4 + 0xac))(piVar4,0);
  local_74 = 0;
  local_78 = 0x100000;
  FUN_021bb970(iVar2,&local_78,&local_74);
  FUN_02023c60(*(undefined4 *)(iVar2 + 4),local_a4,0,local_a0);
  local_6c = 0;
  local_70 = 0;
  FUN_021bb970(iVar2,&local_70,&local_6c);
  FUN_02023c60(*(undefined4 *)(iVar2 + 4),local_a4,8,local_a0);
  local_64 = 0;
  local_68 = 0;
  FUN_021bb970(iVar2,&local_68,&local_64);
  FUN_02023c60(*(undefined4 *)(iVar2 + 4),local_a4,0xf8,local_a0);
  local_5c = 0;
  local_60 = 0x100000;
  FUN_021bb970(iVar2,&local_60,&local_5c);
  FUN_02023c60(*(undefined4 *)(iVar2 + 4),local_a4,0x100,local_a0);
  FUN_02023c80(*(undefined4 *)(iVar2 + 4),local_a4,0x494c,local_a0);
  FUN_02023c70(*(undefined4 *)(iVar2 + 4),0);
  FUN_020239a0(*(undefined4 *)(iVar2 + 4));
  piVar4 = *(int **)(*(int *)(iVar2 + 4) + 0x68);
  (**(code **)(*piVar4 + 0xac))(piVar4,0);
  local_54 = 0;
  local_58 = 0x100000;
  FUN_021bb970(iVar2,&local_58,&local_54);
  FUN_02023c60(*(undefined4 *)(iVar2 + 4),local_a4,0,local_a0);
  local_4c = 0;
  local_50 = 0;
  FUN_021bb970(iVar2,&local_50,&local_4c);
  FUN_02023c60(*(undefined4 *)(iVar2 + 4),local_a4,8,local_a0);
  local_44 = 0;
  local_48 = 0;
  FUN_021bb970(iVar2,&local_48,&local_44);
  FUN_02023c60(*(undefined4 *)(iVar2 + 4),local_a4,0x100,local_a0);
  FUN_02023c80(*(undefined4 *)(iVar2 + 4),local_a4,0x494c,local_a0);
  FUN_02023c70(*(undefined4 *)(iVar2 + 4),1);
  local_3c = 0;
  local_40 = 0x100000;
  FUN_021bb970(iVar2,&local_40,&local_3c);
  FUN_02023894(*(undefined4 *)(iVar2 + 4),0,0);
  piVar1[2] = iVar2;
  if ((char)piVar1[0x2a] == '\x03') {
    *(byte *)((int)piVar1 + 0xa9) = *(byte *)((int)piVar1 + 0xa9) & 0xf7;
    FUN_02023894(*(undefined4 *)(piVar1[0x14] + 4),0xa01029,0);
    FUN_021bd794(piVar1[0x13]);
    piVar4 = *(int **)(*(int *)(piVar1[0x13] + 4) + 100);
    (**(code **)(*piVar4 + 0x68))(piVar4,&DAT_021d450c);
    iVar2 = FUN_0203b414(0);
    local_b4 = 0;
    piVar4 = *(int **)(*(int *)(iVar2 + 0x88) + 4);
    (**(code **)(*piVar4 + 0x10))(piVar4,&local_b4);
    iVar2 = FUN_0203b414(1);
    FUN_0203d0b4(*(undefined4 *)(*(int *)(iVar2 + 0x88) + 4),1);
    iVar2 = FUN_0203b414(1);
    FUN_0203d478(*(undefined4 *)(*(int *)(iVar2 + 0x88) + 4),4);
    iVar2 = FUN_0203b414(1);
    FUN_0203cfbc(*(undefined4 *)(*(int *)(iVar2 + 0x88) + 4),0x40,0x40);
    iVar2 = FUN_0203b414(1);
    piVar4 = *(int **)(*(int *)(iVar2 + 0x88) + 4);
    (**(code **)(*piVar4 + 0x90))(piVar4,0);
    iVar2 = FUN_0203b414(1);
    local_b0 = 0x1000;
    piVar4 = *(int **)(*(int *)(iVar2 + 0x88) + 4);
    (**(code **)(*piVar4 + 0x10))(piVar4,&local_b0);
    iVar2 = FUN_0203b414(2);
    FUN_0203d0b4(*(undefined4 *)(*(int *)(iVar2 + 0x88) + 4),1);
    iVar2 = FUN_0203b414(2);
    FUN_0203d478(*(undefined4 *)(*(int *)(iVar2 + 0x88) + 4),4);
    iVar2 = FUN_0203b414(2);
    FUN_0203cfbc(*(undefined4 *)(*(int *)(iVar2 + 0x88) + 4),0x40,0x40);
    iVar2 = FUN_0203b414(2);
    piVar4 = *(int **)(*(int *)(iVar2 + 0x88) + 4);
    (**(code **)(*piVar4 + 0x90))(piVar4,0x8000);
    iVar2 = FUN_0203b414(2);
    local_ac = 0x2000;
    piVar4 = *(int **)(*(int *)(iVar2 + 0x88) + 4);
    (**(code **)(*piVar4 + 0x10))(piVar4,&local_ac);
    iVar2 = FUN_0203b414(3);
    FUN_0203d0b4(*(undefined4 *)(*(int *)(iVar2 + 0x88) + 4),1);
    iVar2 = FUN_0203b414(3);
    FUN_0203d478(*(undefined4 *)(*(int *)(iVar2 + 0x88) + 4),4);
    iVar2 = FUN_0203b414(3);
    FUN_0203cfbc(*(undefined4 *)(*(int *)(iVar2 + 0x88) + 4),0x20,0x20);
    iVar2 = FUN_0203b414(3);
    piVar4 = *(int **)(*(int *)(iVar2 + 0x88) + 4);
    (**(code **)(*piVar4 + 0x90))(piVar4,0x8000);
    iVar2 = FUN_0203b414(3);
    local_a8 = 0x3000;
    piVar4 = *(int **)(*(int *)(iVar2 + 0x88) + 4);
    (**(code **)(*piVar4 + 0x10))(piVar4,&local_a8);
    iVar2 = FUN_0203b414(3);
    piVar4 = *(int **)(*(int *)(iVar2 + 0x88) + 4);
    (**(code **)(*piVar4 + 0x94))(piVar4,1);
    iVar2 = FUN_0203b414(3);
    uVar5 = *(undefined4 *)(*(int *)(iVar2 + 0x88) + 4);
    FUN_021c3394();
    DAT_020a0dd0 = uVar5;
    uVar5 = FUN_021bdb10(s_info_bg_dig_021d4528);
    FUN_02036ab8();
    iVar2 = FUN_021acab4();
    (**(code **)(**(int **)(iVar2 + 4) + 0x130))(*(int **)(iVar2 + 4),s_info_bg_atm_021d4534);
    FUN_021bdb3c(iVar2,uVar5,0);
    (**(code **)(**(int **)(iVar2 + 4) + 0xd8))(*(int **)(iVar2 + 4),1);
    FUN_02034d7c(uVar5);
    FUN_021bc03c();
    local_b8 = 0;
    local_bc = 0xfff00000;
    local_c0 = 0x100000;
    FUN_021c3414(auStack_2c,&local_c0,&local_bc,&local_b8);
    local_c4 = 0;
    local_c8 = 0;
    local_cc = 0;
    FUN_021c3414(auStack_38,&local_cc,&local_c8,&local_c4);
    FUN_021c33c4(&local_d4,iVar2,s_Position_021d4500);
    iVar3 = thunk_FUN_0201a228(0x4c,s_ALControllerImp_h_021d43f4,s_Create_021d43a4,0x2b9);
    piVar4 = (int *)0x0;
    if (iVar3 != 0) {
      piVar4 = (int *)jus_TagIPCT::jus_TagIPCT
                                (iVar3,0,local_d4,local_d0,0x494c,auStack_38,auStack_2c,0x400,2);
    }
    if (piVar4[6] == 0) {
      (**(code **)(*piVar4 + 0x14))();
    }
    FUN_02020f38(iVar2,piVar4[6]);
    piVar1[0x12] = iVar2;
  }
  else {
    *(byte *)((int)piVar1 + 0xa9) = *(byte *)((int)piVar1 + 0xa9) | 8;
    ALNodeImp::Create(piVar1);
  }
  return piVar1;
}

