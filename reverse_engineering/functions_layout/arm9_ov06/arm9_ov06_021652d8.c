
/* JUS-GAME BattleMapItem::BattleMapItemInit [source-string] __FILE__="BattleMapItem.cpp"
   __FUNCTION__="BattleMapItemInit" lines=[758] passed to 1 source-location call(s) */

int BattleMapItem::BattleMapItemInit(int param_1,int *param_2)

{
  int iVar1;
  undefined4 uVar2;
  int iVar3;
  int iVar4;
  
  iVar3 = *param_2;
  *(undefined **)(iVar3 + 0x10) = &DAT_02165d4c;
  *(code **)(iVar3 + 0x14) = FUN_02165d50;
  *(code **)(iVar3 + 0x18) = FUN_02165d50;
  *(code **)(iVar3 + 0x28) = FUN_02165d50;
  iVar1 = FUN_0203b404();
  FUN_02085aac(param_1,0,*(undefined4 *)(iVar1 + 0x88),0x200,(short)param_2[4]);
  iVar4 = *(int *)(param_1 + 8);
  FUN_021544c8(iVar4,*(undefined4 *)(DAT_02172968 + 4));
  uVar2 = FUN_02020dac();
  *(undefined4 *)(*(int *)(iVar4 + 4) + 0x54) = 0x31305053;
  FUN_02165400(uVar2,iVar4);
  iVar1 = jus_AllocDebug(0x84,s_BattleMapItem_cpp_021725ec,s_BattleMapItemInit_021725c4,0x2f6);
  if (iVar1 != 0) {
    CommonEffect_0209e114::CommonEffect_0209e114(iVar1,FUN_02024a30);
  }
  iVar1 = FUN_02151294();
  *(undefined4 *)(*(int *)(iVar1 + 4) + 0x54) = 0x31304e47;
  FUN_021544c8(iVar1,iVar4);
  FUN_02165400(uVar2,iVar1);
  *(undefined4 *)(param_1 + 0xc) = uVar2;
  FUN_02083b74(param_1,FUN_021656ac,1);
  *(code **)(param_1 + 0x28) = FUN_02165528;
  FUN_02165438(*(undefined4 *)(param_1 + 8),param_2 + 1);
  return iVar3;
}

