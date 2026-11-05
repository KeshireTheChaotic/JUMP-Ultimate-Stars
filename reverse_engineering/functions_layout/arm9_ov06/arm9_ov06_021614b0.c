
/* JUS-GAME BattleCharaParam::Battle_CharaParamCreate [source-string]
   __FILE__="BattleCharaParam.cpp" __FUNCTION__="Battle_CharaParamCreate" lines=[25] passed to 1
   source-location call(s) */

int * BattleCharaParam::Battle_CharaParamCreate(void)

{
  int iVar1;
  undefined4 in_r3;
  
  DAT_02172984 = (int *)thunk_FUN_0201a228(0x10,s_BattleCharaParam_cpp_0217234c,
                                           s_Battle_CharaParamCreate_02172334,0x19,in_r3);
  FUN_020517fc(DAT_02172984,0,0x10);
  iVar1 = FUN_02161580(s_bin_state_bin_02172364,0,0);
  *DAT_02172984 = iVar1;
  iVar1 = (**(code **)(**(int **)(*DAT_02172984 + 4) + 0x2c))(*(int **)(*DAT_02172984 + 4),0);
  DAT_02172984[1] = iVar1;
  iVar1 = FUN_02161580(s_bin_exadd_bin_02172374,0,0);
  DAT_02172984[2] = iVar1;
  iVar1 = (**(code **)(**(int **)(DAT_02172984[2] + 4) + 0x2c))(*(int **)(DAT_02172984[2] + 4),0);
  DAT_02172984[3] = iVar1;
  return DAT_02172984;
}

