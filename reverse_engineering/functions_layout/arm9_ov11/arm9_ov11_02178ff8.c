
/* JUS-GAME BattleAI_State::BattleAIState_Create [source-string] __FILE__="BattleAI_State.cpp"
   __FUNCTION__="BattleAIState_Create" lines=[126] passed to 1 source-location call(s) */

int BattleAI_State::BattleAIState_Create
              (int param_1,undefined4 param_2,undefined4 param_3,undefined4 param_4)

{
  int iVar1;
  int iVar2;
  int *piVar3;
  undefined4 uVar4;
  undefined4 local_20;
  undefined4 uStack_1c;
  
  uStack_1c = param_4;
  iVar1 = thunk_FUN_0201a228(0x68,s_BattleAI_State_cpp_0218195c,s_BattleAIState_Create_021818f4,0x7e
                            );
  FUN_020517fc(iVar1,0,0x68);
  iVar2 = FUN_02020d90();
  (**(code **)(**(int **)(iVar2 + 4) + 0x94))(*(int **)(iVar2 + 4),0x80000);
  local_20 = 0x90000;
  (**(code **)(**(int **)(iVar2 + 4) + 0xa0))(*(int **)(iVar2 + 4),&local_20);
  FUN_02028384(*(undefined4 *)(iVar2 + 4),FUN_02179694);
  (**(code **)(**(int **)(iVar2 + 4) + 0x24))(*(int **)(iVar2 + 4),iVar1);
  piVar3 = *(int **)(iVar2 + 4);
  if (param_1 == 0) {
    (**(code **)(*piVar3 + 0xd4))(piVar3,0);
  }
  else {
    (**(code **)(*piVar3 + 0xd4))(piVar3,*(undefined4 *)(param_1 + 4));
  }
  *(int *)(iVar1 + 0x30) = iVar2;
  FUN_02179648(iVar1,param_2,param_3);
  uVar4 = FUN_02031070(*(undefined4 *)(DAT_020a0da8 + 4));
  *(undefined4 *)(iVar1 + 0x38) = uVar4;
  return iVar1;
}

