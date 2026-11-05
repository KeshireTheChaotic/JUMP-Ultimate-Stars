
/* JUS-GAME BattleAI_JobAtkBrh::BattleAIObj_CreateBranchNode [source-string]
   __FILE__="BattleAI_JobAtkBrh.cpp" __FUNCTION__="BattleAIObj_CreateBranchNode" lines=[122] passed
   to 1 source-location call(s) */

void BattleAI_JobAtkBrh::BattleAIObj_CreateBranchNode
               (int param_1,undefined4 param_2,undefined4 param_3,undefined4 param_4)

{
  int iVar1;
  int iVar2;
  int *piVar3;
  undefined4 local_18;
  undefined4 uStack_14;
  
  uStack_14 = param_4;
  iVar1 = thunk_FUN_0201a228(0x14,s_BattleAI_JobAtkBrh_cpp_021819e0,
                             s_BattleAIObj_CreateBranchNode_021819c0,0x7a);
  FUN_020517fc(iVar1,0,0x14);
  *(undefined4 *)(iVar1 + 4) = **(undefined4 **)(param_1 + 0x14);
  *(undefined1 *)(iVar1 + 0xe) = 0xff;
  iVar2 = FUN_02020d90();
  (**(code **)(**(int **)(iVar2 + 4) + 0x94))(*(int **)(iVar2 + 4),0x80000);
  FUN_02028384(*(undefined4 *)(iVar2 + 4),FUN_0217d0b4);
  local_18 = 0x94000;
  (**(code **)(**(int **)(iVar2 + 4) + 0xa0))(*(int **)(iVar2 + 4),&local_18);
  (**(code **)(**(int **)(iVar2 + 4) + 0x24))(*(int **)(iVar2 + 4),iVar1);
  piVar3 = *(int **)(iVar2 + 4);
  if (*(int *)(param_1 + 0x1c) == 0) {
    (**(code **)(*piVar3 + 0xd4))(piVar3,0);
  }
  else {
    (**(code **)(*piVar3 + 0xd4))(piVar3,*(undefined4 *)(*(int *)(param_1 + 0x1c) + 4));
  }
  FUN_020282f4(*(undefined4 *)(iVar2 + 4));
  *(int *)(param_1 + 0x34) = iVar2;
  return;
}

