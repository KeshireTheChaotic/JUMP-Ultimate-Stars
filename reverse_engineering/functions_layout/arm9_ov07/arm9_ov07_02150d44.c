
/* JUS-GAME CommuMenuCommon::CMMenuCmn_PackArc_InitLoad [source-string]
   __FILE__="CommuMenuCommon.cpp" __FUNCTION__="CMMenuCmn_PackArc_InitLoad" lines=[249] passed to 1
   source-location call(s) */

void CommuMenuCommon::CMMenuCmn_PackArc_InitLoad(undefined4 param_1)

{
  undefined4 uVar1;
  
  if (DAT_0216ad6c == (undefined4 *)0x0) {
    DAT_0216ad6c = (undefined4 *)thunk_FUN_0201a228(8,&DAT_02169890,&DAT_02169780,0xf9);
    FUN_020517fc(DAT_0216ad6c,0,8);
    DAT_0216ad6c[1] = param_1;
    uVar1 = FUN_020101f4(s_Commu_commu_pack_aar_021698a4,0);
    *DAT_0216ad6c = uVar1;
    return;
  }
  return;
}

