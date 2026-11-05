
/* JUS-GAME BattleAI_Deck::BattleAIDeck_CallBackCobjWorkCreate [source-string]
   __FILE__="BattleAI_Deck.cpp" __FUNCTION__="BattleAIDeck_CallBackCobjWorkCreate" lines=[2549]
   passed to 1 source-location call(s) */

int * BattleAI_Deck::BattleAIDeck_CallBackCobjWorkCreate
                (int param_1,int param_2,undefined4 param_3,undefined4 param_4)

{
  uint uVar1;
  undefined1 uVar2;
  int iVar3;
  int *piVar4;
  int iVar5;
  undefined4 local_20;
  undefined4 uStack_1c;
  
  iVar5 = *(int *)(param_1 + 0x28);
  uStack_1c = param_4;
  FUN_02175628(*(undefined4 *)(iVar5 + 0x30));
  iVar3 = FUN_02175628();
  uVar1 = 1 << (*(uint *)(*(int *)(*(int *)(iVar3 + 4) + 0x10) + 0xd4) >> 0x1c);
  *(uint *)(param_2 + 0x10) = *(uint *)(param_2 + 0x10) | uVar1 | 0x10200000;
  *(uint *)(param_2 + 0x14) = *(uint *)(param_2 + 0x14) | uVar1 | uVar1 << 4 | 0x10200800;
  piVar4 = (int *)thunk_FUN_0201a228(0x24,s_BattleAI_Deck_cpp_02181820,
                                     s_BattleAIDeck_CallBackCobjWorkCre_021817fc,0x9f5);
  FUN_020517fc(piVar4,0,0x24);
  iVar3 = FUN_02020d90();
  FUN_02174de4(iVar3,*(undefined4 *)(param_1 + 0x18));
  (**(code **)(**(int **)(iVar3 + 4) + 0x24))(*(int **)(iVar3 + 4),piVar4);
  FUN_02028384(*(undefined4 *)(iVar3 + 4),FUN_02176460);
  local_20 = 0x8f000;
  FUN_02172e14(iVar3,&local_20);
  piVar4[7] = iVar3;
  *piVar4 = iVar5;
  piVar4[1] = param_2;
  uVar2 = FUN_0217568c(*(undefined4 *)(param_1 + 0x18));
  *(undefined1 *)((int)piVar4 + 0x21) = uVar2;
  return piVar4;
}

