
/* WARNING: Globals starting with '_' overlap smaller symbols at the same address */
/* JUS-GAME JQuizCommon::JQuizCmn_BaseBG_Create [source-string] __FILE__="JQuizCommon.cpp"
   __FUNCTION__="JQuizCmn_BaseBG_Create" lines=[301] passed to 1 source-location call(s) */

int * JQuizCommon::JQuizCmn_BaseBG_Create
                (int param_1,undefined4 param_2,undefined4 param_3,undefined4 param_4)

{
  int *piVar1;
  int iVar2;
  int iVar3;
  int iVar4;
  undefined4 local_20;
  undefined4 local_1c;
  undefined4 uStack_18;
  
  uStack_18 = param_4;
  piVar1 = (int *)thunk_FUN_0201a228(8,s_JQuizCommon_cpp_02160a38,s_JQuizCmn_BaseBG_Create_0216092c,
                                     0x12d);
  FUN_020517fc(piVar1,0,8);
  FUN_0203d0b4(*(undefined4 *)(param_1 + 4),1);
  FUN_0203d478(*(undefined4 *)(param_1 + 4),4);
  FUN_0203cfbc(*(undefined4 *)(param_1 + 4),0x20,0x20);
  (**(code **)(**(int **)(param_1 + 4) + 0x90))(*(int **)(param_1 + 4),0x8000);
  local_1c = 0x3000;
  (**(code **)(**(int **)(param_1 + 4) + 0x10))(*(int **)(param_1 + 4),&local_1c);
  (**(code **)(**(int **)(param_1 + 4) + 0x94))(*(int **)(param_1 + 4),1);
  iVar2 = FUN_0214e880(s_info_bg_atm_021603b8,s_info_bg_dig_021603c4,param_1);
  FUN_0214e92c(iVar2,s_jquiz_quiz_bg_ncl_021603d0);
  iVar3 = ALWidgetBaseImp::Create(piVar1,0);
  (**(code **)(**(int **)(iVar3 + 4) + 0xd8))(*(int **)(iVar3 + 4),1);
  func_0x021b6214(*(undefined4 *)(iVar3 + 4),1);
  iVar4 = ALWidgetImp::Create(iVar3,_DAT_021d5154);
  (**(code **)(**(int **)(iVar4 + 4) + 0xd8))(*(int **)(iVar4 + 4),1);
  (**(code **)(**(int **)(iVar4 + 4) + 0x24))(*(int **)(iVar4 + 4),piVar1);
  FUN_02028384(*(undefined4 *)(iVar4 + 4),FUN_0214e168);
  local_20 = 0x84000;
  (**(code **)(**(int **)(iVar4 + 4) + 0xa0))(*(int **)(iVar4 + 4),&local_20);
  (**(code **)(**(int **)(iVar2 + 4) + 0xd8))(*(int **)(iVar2 + 4),1);
  FUN_0214e478(iVar4,iVar2);
  *piVar1 = iVar3;
  return piVar1;
}

