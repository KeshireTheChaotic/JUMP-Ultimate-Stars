
/* JUS-GAME BattleCharaDataLoad::Battle_CharaDataInit [source-string]
   __FILE__="BattleCharaDataLoad.cpp" __FUNCTION__="Battle_CharaDataInit" lines=[34] passed to 1
   source-location call(s) */

int BattleCharaDataLoad::Battle_CharaDataInit(void)

{
  int iVar1;
  
  iVar1 = jus_AllocDebug(0x1c4,s_BattleCharaDataLoad_cpp_021721f8,s_Battle_CharaDataInit_021721e0,
                         0x22);
  FUN_020517fc(iVar1,0,0x1c4);
  *(undefined4 *)(iVar1 + 0x1bc) = 0;
  return iVar1;
}

