
/* JUS-GAME BattleCharaPursuer::Battle_PursuerCreate [source-string]
   __FILE__="BattleCharaPursuer.cpp" __FUNCTION__="Battle_PursuerCreate" lines=[30] passed to 1
   source-location call(s) */

undefined4 *
BattleCharaPursuer::Battle_PursuerCreate
          (undefined4 param_1,undefined4 param_2,undefined4 param_3,undefined4 param_4)

{
  undefined4 *puVar1;
  int iVar2;
  int *piVar3;
  undefined4 local_18;
  undefined4 local_14;
  undefined4 uStack_10;
  
  uStack_10 = param_4;
  puVar1 = (undefined4 *)
           thunk_FUN_0201a228(0x2c,s_BattleCharaPursuer_cpp_0217239c,s_Battle_PursuerCreate_02172384
                              ,0x1e);
  FUN_020517fc(puVar1,0,0x2c);
  *puVar1 = param_1;
  DAT_02093c08 = DAT_02093c08 + -1;
  (&DAT_020a16d0)[DAT_02093c08] = DAT_020a0dd0;
  iVar2 = FUN_0203b404();
  DAT_020a0dd0 = *(undefined4 *)(*(int *)(iVar2 + 0x88) + 4);
  piVar3 = (int *)FUN_020329d4();
  if (piVar3[6] == 0) {
    (**(code **)(*piVar3 + 0x14))();
  }
  iVar2 = piVar3[6];
  puVar1[2] = iVar2;
  FUN_02028384(*(undefined4 *)(iVar2 + 4),FUN_021618e4);
  (**(code **)(**(int **)(puVar1[2] + 4) + 0x24))(*(int **)(puVar1[2] + 4),puVar1);
  local_18 = 0;
  local_14 = 0;
  FUN_021519d0(puVar1[2],&local_14,&local_18);
  (**(code **)(**(int **)(puVar1[2] + 4) + 0xd8))(*(int **)(puVar1[2] + 4),0);
  FUN_020282f4(*(undefined4 *)(puVar1[2] + 4));
  DAT_020a0dd0 = (&DAT_020a16d0)[DAT_02093c08];
  DAT_02093c08 = DAT_02093c08 + 1;
  FUN_02161758(puVar1,0);
  return puVar1;
}

