
/* JUS-GAME BattleChara::Battle_CharaCreate [source-string] __FILE__="BattleChara.cpp"
   __FUNCTION__="Battle_CharaCreate" lines=[37] passed to 1 source-location call(s) */

int BattleChara::Battle_CharaCreate(byte param_1,int *param_2,undefined4 param_3,undefined4 param_4)

{
  int iVar1;
  int iVar2;
  int *piVar3;
  undefined4 uVar4;
  int iVar5;
  undefined4 local_1c;
  undefined4 local_18;
  undefined4 uStack_14;
  
  uStack_14 = param_4;
  iVar1 = thunk_FUN_0201a228(0x1f0,s_BattleChara_cpp_0217213c,s_Battle_CharaCreate_02172128,0x25);
  FUN_020517fc(iVar1,0,0x1f0);
  *(char *)(iVar1 + 0x1eb) = (char)param_2[7];
  *(byte *)(iVar1 + 0x1e0) = param_1;
  *(int *)(iVar1 + 0x1c4) = param_2[4];
  *(int *)(iVar1 + 0x1c8) = param_2[5];
  *(undefined1 *)(iVar1 + 0x1ea) = *(undefined1 *)((int)param_2 + 0x1d);
  iVar2 = FUN_02026f94();
  *(int *)(iVar1 + 0x1c0) = iVar2;
  local_18 = 0x85000;
  (**(code **)(**(int **)(iVar2 + 4) + 0xa0))(*(int **)(iVar2 + 4),&local_18);
  FUN_02028384(*(undefined4 *)(*(int *)(iVar1 + 0x1c0) + 4),FUN_02156ddc);
  piVar3 = *(int **)(*(int *)(iVar1 + 0x1c0) + 4);
  (**(code **)(*piVar3 + 0x24))(piVar3,iVar1);
  piVar3 = *(int **)(*(int *)(iVar1 + 0x1c0) + 4);
  (**(code **)(*piVar3 + 0x94))(piVar3,0x1000 << (uint)param_1);
  *(int *)(iVar1 + 0x1bc) = param_2[1];
  iVar2 = *param_2;
  *(int *)(iVar1 + 0x1b4) = iVar2;
  *(byte *)(iVar2 + 0x5f0) = param_1;
  iVar2 = *(int *)(iVar1 + 0x1b4);
  *(code **)(iVar2 + 0x5e8) = FUN_021574cc;
  *(int *)(iVar2 + 0x5ec) = iVar1;
  if (*(char *)((int)param_2 + 0x1e) != '\0') {
    uVar4 = BattleCharaInfo::Battle_CharaInfoCreate();
    *(undefined4 *)(iVar1 + 0x1a4) = uVar4;
  }
  FUN_0215fb7c(iVar1 + 0x130,iVar1,*(undefined4 *)(iVar1 + 0x1b4),iVar1 + 0x7c);
  FUN_0215fab8(iVar1 + 0x120,*(undefined4 *)(iVar1 + 0x1b4),iVar1 + 0x130);
  iVar5 = param_2[6];
  uVar4 = BattleCharaDataLoad::Battle_CharaDataInit();
  *(undefined4 *)(iVar1 + 0x1a0) = uVar4;
  iVar2 = FUN_0203b3e4();
  FUN_0215f3e0(*(undefined4 *)(iVar1 + 0x1a0),*(undefined4 *)(iVar1 + 0x1bc),
               *(undefined4 *)(iVar2 + 0x88),*(undefined4 *)(iVar1 + 0x1b4),
               (int)*(char *)(iVar1 + 0x1e0));
  *(uint *)(iVar1 + 0x1cc) = (uint)*(ushort *)(*(int *)(*(int *)(iVar1 + 0x1a0) + 0x174) + 0x16);
  FUN_02083624(FUN_021570ec,iVar1,1 << (uint)*(byte *)(iVar1 + 0x1e0) & 0xffff,iVar5,0);
  *(undefined4 *)(*(int *)(iVar1 + 0x1a8) + 0x20) =
       **(undefined4 **)(*(int *)(iVar1 + 0x1a0) + 0x174);
  *(undefined1 *)(*(int *)(*(int *)(*(int *)(iVar1 + 0x1a8) + 0x10) + 0x5c) + 0x3e) = 0x80;
  iVar2 = *(int *)(*(int *)(iVar1 + 0x1a8) + 0x10);
  *(uint *)(iVar2 + 0x40) = *(uint *)(iVar2 + 0x40) | 8;
  *(uint *)(*(int *)(iVar1 + 0x1a8) + 0x2c) = *(uint *)(*(int *)(iVar1 + 0x1a8) + 0x2c) | 4;
  iVar2 = *(int *)(*(int *)(iVar1 + 0x1a8) + 0x10);
  *(uint *)(iVar2 + 0x78) = *(uint *)(iVar2 + 0x78) | 0x22;
  iVar2 = BattleCharaPursuer::Battle_PursuerCreate(*(undefined4 *)(iVar1 + 0x1a8));
  *(int *)(iVar1 + 0x1b8) = iVar2;
  local_1c = 0x8b000;
  piVar3 = *(int **)(*(int *)(*(int *)(iVar2 + 8) + 4) + 100);
  (**(code **)(*piVar3 + 0x10))(piVar3,&local_1c);
  piVar3 = *(int **)(*(int *)(*(int *)(iVar1 + 0x1b8) + 8) + 4);
  if (*(int *)(iVar1 + 0x1bc) == 0) {
    (**(code **)(*piVar3 + 0xd4))(piVar3,0);
  }
  else {
    (**(code **)(*piVar3 + 0xd4))(piVar3,*(undefined4 *)(*(int *)(iVar1 + 0x1bc) + 4));
  }
  piVar3 = *(int **)(*(int *)(*(int *)(iVar1 + 0x1b8) + 8) + 4);
  (**(code **)(*piVar3 + 0x94))(piVar3,1 << (uint)*(byte *)(iVar1 + 0x1e0));
  FUN_02161758(*(undefined4 *)(iVar1 + 0x1b8),
               *(undefined4 *)(*(int *)(*(int *)(iVar1 + 0x1a0) + 0x174) + 0xc));
  iVar2 = *(int *)(iVar1 + 0x1a8);
  BattleNoteTrack::Battle_NoteTrackCreate
            (iVar2 + 0x18,*(undefined4 *)(iVar2 + 8),iVar2,FUN_02157a44,iVar1);
  iVar2 = *(int *)(iVar2 + 0x18);
  *(int *)(iVar2 + 0x78) = iVar1 + 0x1c;
  FUN_02155634(iVar2,(int)*(char *)(iVar1 + 0x1e0));
  FUN_02157114(iVar1,iVar2);
  FUN_02159c90(iVar1,iVar1);
  FUN_0215d2e4(iVar1);
  FUN_0215da64(iVar1);
  FUN_0215ddec(iVar1);
  FUN_021586d0(iVar1,*(undefined4 *)(iVar1 + 0x1b4));
  FUN_021610d4(iVar1 + 0x1c,param_2[2],param_2[3]);
  return iVar1;
}

