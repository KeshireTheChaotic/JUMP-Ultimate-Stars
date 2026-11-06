
/* JUS-GAME EndingPiece::EndingPiece_Create [source-string] __FILE__="EndingPiece.cpp"
   __FUNCTION__="EndingPiece_Create" lines=[160, 697] passed to 3 source-location call(s); header
   inlines: ALControllerImp.h:Create */

undefined4 * EndingPiece::EndingPiece_Create(undefined4 param_1)

{
  undefined4 *puVar1;
  int *piVar2;
  int iVar3;
  undefined4 uVar4;
  undefined4 uVar5;
  int iVar6;
  uint uVar7;
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
  undefined1 auStack_3c [12];
  undefined1 auStack_30 [12];
  
  puVar1 = (undefined4 *)
           thunk_FUN_0201a228(0x1e4,s_EndingPiece_cpp_021617c4,s_EndingPiece_Create_02161744,0xa0);
  if (puVar1 != (undefined4 *)0x0) {
    puVar1[0x1a] = 0;
    puVar1[0x31] = 0;
    puVar1[0x48] = 0;
    puVar1[0x5f] = 0;
  }
  FUN_020517fc(puVar1,0,0x1e4);
  *puVar1 = param_1;
  piVar2 = (int *)FUN_02033410(s_ending_TitleOrder_bin_021617d4,0,0);
  if (piVar2[7] == 0) {
    (**(code **)(*piVar2 + 0x10))();
  }
  iVar3 = piVar2[7];
  puVar1[3] = iVar3;
  piVar2 = *(int **)(iVar3 + 4);
  uVar4 = (**(code **)(*piVar2 + 0x2c))(piVar2,0);
  puVar1[0x10] = uVar4;
  *(undefined1 *)(puVar1 + 0x6d) = 0;
  for (iVar3 = 0; uVar7 = *(uint *)(puVar1[0x10] + iVar3 * 0x58), uVar7 != 0; iVar3 = iVar3 + 1) {
    if ((*(uint *)(&DAT_020b0b9c + (uVar7 >> 5) * 4) & 1 << (uVar7 & 0x1f)) != 0) {
      *(char *)((int)puVar1 + *(byte *)(puVar1 + 0x6d) + 0x1b8) = (char)iVar3;
      *(char *)(puVar1 + 0x6d) = *(char *)(puVar1 + 0x6d) + '\x01';
    }
  }
  iVar3 = FUN_02020d90();
  puVar1[1] = iVar3;
  (**(code **)(**(int **)(iVar3 + 4) + 0x24))(*(int **)(iVar3 + 4),puVar1);
  FUN_02028384(*(undefined4 *)(puVar1[1] + 4),FUN_0215cbbc);
  FUN_020282f4(*(undefined4 *)(puVar1[1] + 4));
  iVar3 = FUN_02026f94();
  puVar1[2] = iVar3;
  (**(code **)(**(int **)(iVar3 + 4) + 0x24))(*(int **)(iVar3 + 4),puVar1);
  FUN_02028384(*(undefined4 *)(puVar1[2] + 4),FUN_0215c7a8);
  FUN_020282f4(*(undefined4 *)(puVar1[2] + 4));
  uVar4 = FUN_020101f4(s_chr_ChrArc_aar_021617ec,0);
  puVar1[7] = uVar4;
  uVar4 = FUN_020101f4(s_demo_demo_aar_021617fc,0);
  puVar1[4] = uVar4;
  uVar4 = FUN_020101f4(s_ending_window_00_aar_0216180c,0);
  puVar1[5] = uVar4;
  uVar4 = FUN_020101f4(s_ending_sakuhin_chr_aar_02161824,0);
  puVar1[6] = uVar4;
  iVar3 = FUN_0203b414(2);
  uVar4 = FUN_0214ec98(s_ending_bg_00_atm_0216183c,&DAT_02161850,*(undefined4 *)(iVar3 + 0x88));
  puVar1[9] = uVar4;
  iVar3 = FUN_0203b414(1);
  uVar4 = FUN_0214ec98(s_info_bg_atm_02161860,&DAT_0216186c,*(undefined4 *)(iVar3 + 0x88));
  puVar1[10] = uVar4;
  iVar3 = FUN_0203b424(2);
  iVar3 = FUN_0214ec98(s_ending_bg_00_atm_0216183c,&DAT_02161850,*(undefined4 *)(iVar3 + 0x88));
  puVar1[0xb] = iVar3;
  (**(code **)(**(int **)(iVar3 + 4) + 0xd8))(*(int **)(iVar3 + 4),0);
  iVar3 = FUN_0203b424(2);
  uVar4 = FUN_0214ec98(&DAT_02161878,&DAT_02161850,*(undefined4 *)(iVar3 + 0x88));
  puVar1[0xd] = uVar4;
  iVar3 = FUN_0203b424(1);
  uVar4 = FUN_0214ec98(s_info_bg_atm_02161860,&DAT_0216186c,*(undefined4 *)(iVar3 + 0x88));
  puVar1[0xe] = uVar4;
  iVar3 = FUN_0203b414(2);
  uVar4 = FUN_0214ec98(&DAT_02161878,&DAT_02161850,*(undefined4 *)(iVar3 + 0x88));
  puVar1[0xf] = uVar4;
  uVar4 = puVar1[10];
  local_48 = 0x100000;
  local_4c = 0xfff00000;
  local_50 = 0;
  FUN_02151038(auStack_30,&local_48,&local_4c,&local_50);
  FUN_02150d54(&local_44,uVar4,s_Position_0216188c);
  iVar3 = thunk_FUN_0201a228(0x4c,&DAT_02161174,&DAT_02161734,0x2b9);
  if (iVar3 != 0) {
    jus_TagIPCT::jus_TagIPCT(iVar3,0,local_44,local_40,0x494c,&DAT_02093c8c,auStack_30,0x400,2);
  }
  uVar5 = FUN_021556a0();
  FUN_02020f38(uVar4,uVar5);
  uVar4 = puVar1[0xe];
  local_5c = 0x100000;
  local_60 = 0xfff00000;
  local_64 = 0;
  FUN_02151038(auStack_3c,&local_5c,&local_60,&local_64);
  FUN_02150d54(&local_58,uVar4,s_Position_0216188c);
  iVar3 = thunk_FUN_0201a228(0x4c,&DAT_02161174,&DAT_02161734,0x2b9);
  if (iVar3 != 0) {
    jus_TagIPCT::jus_TagIPCT(iVar3,0,local_58,local_54,0x494c,&DAT_02093c8c,auStack_3c,0x400,2);
  }
  uVar5 = FUN_021556a0();
  FUN_02020f38(uVar4,uVar5);
  iVar3 = FUN_0203b3e4();
  ALControllerImp::Create(puVar1,puVar1 + 0x11,*(undefined4 *)(iVar3 + 0x88));
  iVar3 = FUN_0203b3e4();
  puVar1[0x25] = *(undefined4 *)(iVar3 + 0x88);
  iVar3 = FUN_0203b424(3);
  puVar1[0x26] = *(undefined4 *)(iVar3 + 0x88);
  *(undefined1 *)((int)puVar1 + 0x9d) = 0;
  *(undefined1 *)((int)puVar1 + 0x9e) = 1;
  iVar3 = FUN_0203b3f4();
  ALControllerImp::Create(puVar1,puVar1 + 0x28,*(undefined4 *)(iVar3 + 0x88));
  iVar3 = FUN_0203b3f4();
  puVar1[0x3c] = *(undefined4 *)(iVar3 + 0x88);
  iVar3 = FUN_0203b414(3);
  puVar1[0x3d] = *(undefined4 *)(iVar3 + 0x88);
  *(undefined1 *)((int)puVar1 + 0xf9) = 1;
  *(undefined1 *)((int)puVar1 + 0xfa) = 0;
  iVar3 = FUN_0203b3f4();
  ALControllerImp::Create(puVar1,puVar1 + 0x3f,*(undefined4 *)(iVar3 + 0x88));
  (**(code **)(**(int **)(puVar1[0x3f] + 4) + 0xd8))(*(int **)(puVar1[0x3f] + 4),0);
  iVar3 = FUN_0203b3f4();
  puVar1[0x53] = *(undefined4 *)(iVar3 + 0x88);
  iVar3 = FUN_0203b414(3);
  puVar1[0x54] = *(undefined4 *)(iVar3 + 0x88);
  *(undefined1 *)((int)puVar1 + 0x155) = 0;
  *(undefined1 *)((int)puVar1 + 0x156) = 0;
  iVar3 = FUN_0203b3e4();
  ALControllerImp::Create(puVar1,puVar1 + 0x56,*(undefined4 *)(iVar3 + 0x88));
  (**(code **)(**(int **)(puVar1[0x56] + 4) + 0xd8))(*(int **)(puVar1[0x56] + 4),0);
  iVar3 = FUN_0203b3e4();
  puVar1[0x6a] = *(undefined4 *)(iVar3 + 0x88);
  iVar3 = FUN_0203b424(3);
  puVar1[0x6b] = *(undefined4 *)(iVar3 + 0x88);
  *(undefined1 *)((int)puVar1 + 0x1b1) = 1;
  *(undefined1 *)((int)puVar1 + 0x1b2) = 1;
  iVar3 = 0;
  do {
    iVar6 = FUN_0203b3f4();
    uVar4 = FUN_0214eef8(*(undefined4 *)(iVar6 + 0x88),0x60,0x78,2);
    puVar1[iVar3 + 0x17] = uVar4;
    FUN_021552fc(puVar1[0x11],uVar4);
    FUN_0214f3e0(puVar1[iVar3 + 0x17],puVar1[0x11]);
    piVar2 = *(int **)(*(int *)(puVar1[iVar3 + 0x17] + 4) + 100);
    (**(code **)(*piVar2 + 0xa8))(piVar2,8);
    iVar6 = FUN_0203b3e4();
    uVar4 = FUN_0214eef8(*(undefined4 *)(iVar6 + 0x88),0x60,0x78,2);
    puVar1[iVar3 + 0x2e] = uVar4;
    FUN_021552fc(puVar1[0x28],uVar4);
    FUN_0214f3e0(puVar1[iVar3 + 0x2e],puVar1[0x28]);
    piVar2 = *(int **)(*(int *)(puVar1[iVar3 + 0x2e] + 4) + 100);
    (**(code **)(*piVar2 + 0xa8))(piVar2,2);
    iVar6 = FUN_0203b3e4();
    uVar4 = FUN_0214eef8(*(undefined4 *)(iVar6 + 0x88),0x60,0x78,2);
    puVar1[iVar3 + 0x45] = uVar4;
    FUN_021552fc(puVar1[0x3f],uVar4);
    FUN_0214f3e0(puVar1[iVar3 + 0x45],puVar1[0x3f]);
    piVar2 = *(int **)(*(int *)(puVar1[iVar3 + 0x45] + 4) + 100);
    (**(code **)(*piVar2 + 0xa8))(piVar2,8);
    iVar6 = FUN_0203b3f4();
    uVar4 = FUN_0214eef8(*(undefined4 *)(iVar6 + 0x88),0x60,0x78,2);
    puVar1[iVar3 + 0x5c] = uVar4;
    FUN_021552fc(puVar1[0x56],uVar4);
    FUN_0214f3e0(puVar1[iVar3 + 0x5c],puVar1[0x56]);
    piVar2 = *(int **)(*(int *)(puVar1[iVar3 + 0x5c] + 4) + 100);
    (**(code **)(*piVar2 + 0xa8))(piVar2,2);
    iVar3 = iVar3 + 1;
  } while (iVar3 < 3);
  CommonEffect::CommonEffect_Init(puVar1[1]);
  return puVar1;
}

