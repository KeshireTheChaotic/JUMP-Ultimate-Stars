
/* JUS-GAME BattleMarker::Battle_MarkerCreate [source-string] __FILE__="BattleMarker.cpp"
   __FUNCTION__="Battle_MarkerCreate" lines=[43] passed to 1 source-location call(s) */

undefined4 *
BattleMarker::Battle_MarkerCreate(int param_1,int param_2,int param_3,undefined4 param_4)

{
  undefined4 *puVar1;
  int iVar2;
  undefined4 uVar3;
  int *piVar4;
  char extraout_r1;
  char extraout_r1_00;
  undefined4 *puVar6;
  undefined4 *puVar5;
  uint uVar7;
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
  char local_40;
  char local_3f;
  undefined1 local_3e;
  undefined1 auStack_3d [13];
  undefined1 auStack_30 [12];
  
  puVar1 = (undefined4 *)
           thunk_FUN_0201a228(0xb4,s_BattleMarker_cpp_02172688,s_Battle_MarkerCreate_02172674,0x2b);
  if (puVar1 != (undefined4 *)0x0) {
    puVar5 = puVar1;
    do {
      puVar6 = puVar5 + 10;
      *puVar5 = 0;
      puVar5 = puVar6;
    } while (puVar6 < puVar1 + 0x28);
  }
  FUN_020517fc(puVar1,0,0xb4);
  puVar1[0x2b] = param_1;
  *(char *)(puVar1 + 0x2c) = (char)param_3;
  iVar2 = FUN_02026f94();
  puVar1[0x2a] = iVar2;
  local_68 = 0x84000;
  (**(code **)(**(int **)(iVar2 + 4) + 0xa0))(*(int **)(iVar2 + 4),&local_68);
  FUN_02028384(*(undefined4 *)(puVar1[0x2a] + 4),FUN_021686d8);
  (**(code **)(**(int **)(puVar1[0x2a] + 4) + 0x24))(*(int **)(puVar1[0x2a] + 4),puVar1);
  (**(code **)(**(int **)(puVar1[0x2a] + 4) + 0x94))(*(int **)(puVar1[0x2a] + 4),0x100000);
  if (param_2 == 0) {
    uVar3 = FUN_020101f4(s_battle_marker_b_aar_021726b0,0);
  }
  else {
    uVar3 = FUN_020101f4(s_battle_marker_t_aar_0217269c,0);
  }
  puVar1[0x28] = uVar3;
  if (param_3 == 0) {
    uVar3 = FUN_020101f4(s_battle_rank_aar_021726d8,0);
  }
  else {
    thunk_FUN_0207400c(auStack_3d,s_battle_symbol___aar_021726c4);
    local_3e = 0;
    FUN_0200d12c(param_4,10);
    local_3f = extraout_r1 + '0';
    uVar3 = FUN_0200d12c(param_4,10);
    FUN_0200d12c(uVar3,10);
    local_40 = extraout_r1_00 + '0';
    thunk_FUN_02074258(auStack_30,&local_40);
    uVar3 = FUN_020101f4(auStack_3d,0);
  }
  puVar1[0x29] = uVar3;
  DAT_02093c08 = DAT_02093c08 + -1;
  (&DAT_020a16d0)[DAT_02093c08] = DAT_020a0dd0;
  iVar2 = FUN_0203b404();
  DAT_020a0dd0 = *(undefined4 *)(*(int *)(iVar2 + 0x88) + 4);
  puVar5 = puVar1;
  for (uVar7 = 0; (int)uVar7 < param_1; uVar7 = uVar7 + 1) {
    if (param_2 == 0) {
      *(char *)((int)puVar5 + 0x25) = (char)uVar7;
    }
    else {
      *(undefined1 *)((int)puVar5 + 0x25) = 0;
    }
    uVar3 = FUN_021533fc(0x500000);
    puVar5[2] = uVar3;
    local_44 = 0x4c000;
    FUN_021512bc(puVar5[2],&local_44);
    iVar2 = *(char *)((int)puVar5 + 0x25) + 0x500000;
    puVar5[6] = iVar2;
    puVar5[5] = iVar2;
    FUN_02023894(*(undefined4 *)(puVar5[2] + 4),iVar2,0);
    (**(code **)(**(int **)(*(int *)(puVar5[2] + 4) + 0x68) + 0x6c))();
    (**(code **)(**(int **)(puVar5[2] + 4) + 0x24))(*(int **)(puVar5[2] + 4),puVar5);
    local_4c = 0;
    local_48 = 0;
    FUN_021519d0(puVar5[2],&local_48,&local_4c);
    (**(code **)(**(int **)(puVar5[2] + 4) + 0xd8))(*(int **)(puVar5[2] + 4),1);
    iVar2 = 1 << (uVar7 & 0xff);
    (**(code **)(**(int **)(puVar5[2] + 4) + 0x94))(*(int **)(puVar5[2] + 4),iVar2);
    puVar5[8] = 0xffffffff;
    uVar3 = FUN_021533fc(0x501000);
    puVar5[3] = uVar3;
    local_50 = 0x4c000;
    FUN_021512bc(puVar5[3],&local_50);
    FUN_02023894(*(undefined4 *)(puVar5[3] + 4),0x501000,0);
    (**(code **)(**(int **)(*(int *)(puVar5[3] + 4) + 0x68) + 0x6c))();
    local_58 = 0;
    local_54 = 0;
    FUN_021519d0(puVar5[3],&local_54,&local_58);
    (**(code **)(**(int **)(puVar5[3] + 4) + 0xd8))(*(int **)(puVar5[3] + 4),0);
    (**(code **)(**(int **)(puVar5[3] + 4) + 0x94))(*(int **)(puVar5[3] + 4),iVar2);
    if (param_3 != 0) {
      uVar3 = FUN_021533fc(0x501000);
      puVar5[4] = uVar3;
      local_5c = 0x4b000;
      FUN_021512bc(puVar5[4],&local_5c);
      FUN_02023894(*(undefined4 *)(puVar5[4] + 4),0x501000,0);
      (**(code **)(**(int **)(*(int *)(puVar5[4] + 4) + 0x68) + 0x6c))();
      local_64 = 0x2000;
      local_60 = 0x4000;
      FUN_021519d0(puVar5[4],&local_60,&local_64);
      (**(code **)(**(int **)(puVar5[4] + 4) + 0xd8))(*(int **)(puVar5[4] + 4),0);
      (**(code **)(**(int **)(puVar5[4] + 4) + 0x94))(*(int **)(puVar5[4] + 4),iVar2);
      FUN_021544c8(puVar5[4],puVar5[3]);
      piVar4 = *(int **)(*(int *)(puVar5[4] + 4) + 100);
      (**(code **)(*piVar4 + 0x20))(piVar4,0);
    }
    *(undefined1 *)((int)puVar5 + 0x26) = 0;
    puVar5 = puVar5 + 10;
  }
  puVar5 = &DAT_020a16d0 + DAT_02093c08;
  DAT_02093c08 = DAT_02093c08 + 1;
  DAT_020a0dd0 = *puVar5;
  return puVar1;
}

