
/* JUS-GAME BattleMapItem::BattleMapGripInit [source-string] __FILE__="BattleMapItem.cpp"
   __FUNCTION__="BattleMapGripInit" lines=[2661] passed to 1 source-location call(s) */

undefined4 *
BattleMapItem::BattleMapGripInit
          (int param_1,undefined4 *param_2,undefined4 param_3,undefined4 param_4)

{
  int iVar1;
  int iVar2;
  int iVar3;
  undefined4 local_24;
  undefined4 local_20;
  undefined4 uStack_1c;
  
  uStack_1c = param_4;
  iVar1 = FUN_0203b404();
  FUN_02085aac(param_1,0x300000,*(undefined4 *)(iVar1 + 0x88),0x400,0xa3);
  iVar3 = *(int *)(param_1 + 8);
  FUN_021544c8(iVar3,*(undefined4 *)(DAT_02172968 + 4));
  iVar1 = FUN_02020dac();
  *(undefined4 *)(*(int *)(iVar3 + 4) + 0x54) = 0x31305053;
  (**(code **)(**(int **)(iVar1 + 4) + 0xb4))(*(int **)(iVar1 + 4),*(undefined4 *)(iVar3 + 4));
  iVar2 = jus_AllocDebug(0x84,s_BattleMapItem_cpp_021725ec,s_BattleMapGripInit_021725d8,0xa65);
  if (iVar2 != 0) {
    CommonEffect_0209e114::CommonEffect_0209e114(iVar2,FUN_02024a30);
  }
  iVar2 = FUN_02151294();
  *(undefined4 *)(*(int *)(iVar2 + 4) + 0x54) = 0x31304e47;
  FUN_021544c8(iVar2,iVar3);
  (**(code **)(**(int **)(iVar1 + 4) + 0xb4))(*(int **)(iVar1 + 4),*(undefined4 *)(iVar2 + 4));
  *(int *)(param_1 + 0xc) = iVar1;
  local_24 = *param_2;
  local_20 = param_2[1];
  FUN_02165438(*(undefined4 *)(param_1 + 8),&local_24);
  return param_2;
}

