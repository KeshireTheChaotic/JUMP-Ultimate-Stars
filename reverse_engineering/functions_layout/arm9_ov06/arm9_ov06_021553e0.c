
/* JUS-GAME BattleNoteTrack::Battle_NoteTrackCreate [source-string] __FILE__="BattleNoteTrack.cpp"
   __FUNCTION__="Battle_NoteTrackCreate" lines=[50] passed to 1 source-location call(s) */

void BattleNoteTrack::Battle_NoteTrackCreate
               (int *param_1,undefined4 param_2,undefined4 param_3,undefined4 param_4,
               undefined4 param_5)

{
  int iVar1;
  int iVar2;
  int *piVar3;
  undefined4 local_20;
  undefined4 uStack_1c;
  
  uStack_1c = param_4;
  iVar1 = thunk_FUN_0201a228(0xa8,s_BattleNoteTrack_cpp_02172114,s_Battle_NoteTrackCreate_021720fc,
                             0x32);
  FUN_020517fc(iVar1,0,0xa8);
  *(undefined4 *)(iVar1 + 0x88) = param_2;
  *(undefined4 *)(iVar1 + 0x98) = 0xffffffff;
  *(undefined4 *)(iVar1 + 0x94) = 0xffffffff;
  *(undefined1 *)(iVar1 + 0xa3) = 0xff;
  *(undefined4 *)(iVar1 + 0x7c) = param_3;
  *(undefined4 *)(iVar1 + 0x70) = param_4;
  *(undefined4 *)(iVar1 + 0x74) = param_5;
  iVar2 = FUN_02026f94();
  *(int *)(iVar1 + 0x8c) = iVar2;
  local_20 = 0x86000;
  (**(code **)(**(int **)(iVar2 + 4) + 0xa0))(*(int **)(iVar2 + 4),&local_20);
  FUN_02028384(*(undefined4 *)(*(int *)(iVar1 + 0x8c) + 4),FUN_02155688);
  piVar3 = *(int **)(*(int *)(iVar1 + 0x8c) + 4);
  (**(code **)(*piVar3 + 0x24))(piVar3,iVar1);
  *param_1 = iVar1;
  FUN_02155688(*(undefined4 *)(iVar1 + 0x8c));
  return;
}

