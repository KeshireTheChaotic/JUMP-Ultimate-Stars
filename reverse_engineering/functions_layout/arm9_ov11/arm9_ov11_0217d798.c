
/* JUS-GAME BattleAI_JobAtkCmd::BattleAIObj_CreateCommandNode [source-string]
   __FILE__="BattleAI_JobAtkCmd.cpp" __FUNCTION__="BattleAIObj_CreateCommandNode" lines=[122] passed
   to 1 source-location call(s) */

void BattleAI_JobAtkCmd::BattleAIObj_CreateCommandNode
               (int param_1,undefined4 param_2,undefined4 param_3,undefined4 param_4)

{
  undefined4 *puVar1;
  int iVar2;
  int *piVar3;
  undefined4 local_18;
  undefined4 uStack_14;
  
  uStack_14 = param_4;
  puVar1 = (undefined4 *)
           jus_AllocDebug(0x10,s_BattleAI_JobAtkCmd_cpp_02181a18,
                          s_BattleAIObj_CreateCommandNode_021819f8,0x7a);
  FUN_020517fc(puVar1,0,0x10);
  *puVar1 = **(undefined4 **)(param_1 + 0x14);
  puVar1[1] = *(undefined4 *)(param_1 + 0x18);
  puVar1[2] = 0;
  iVar2 = FUN_02020d90();
  (**(code **)(**(int **)(iVar2 + 4) + 0x94))(*(int **)(iVar2 + 4),0x80000);
  FUN_02028384(*(undefined4 *)(iVar2 + 4),&LAB_0217d92c);
  local_18 = 0x95000;
  (**(code **)(**(int **)(iVar2 + 4) + 0xa0))(*(int **)(iVar2 + 4),&local_18);
  (**(code **)(**(int **)(iVar2 + 4) + 0x24))(*(int **)(iVar2 + 4),puVar1);
  piVar3 = *(int **)(iVar2 + 4);
  if (*(int *)(param_1 + 0x1c) == 0) {
    (**(code **)(*piVar3 + 0xd4))(piVar3,0);
  }
  else {
    (**(code **)(*piVar3 + 0xd4))(piVar3,*(undefined4 *)(*(int *)(param_1 + 0x1c) + 4));
  }
  *(int *)(param_1 + 0x30) = iVar2;
  return;
}

