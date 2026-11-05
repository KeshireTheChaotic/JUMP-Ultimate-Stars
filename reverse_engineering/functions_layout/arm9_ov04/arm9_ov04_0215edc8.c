
/* JUS-GAME JQuizMainSubWaitPlayer::JQuizMainSubWaitPlayerClass_Create [source-string]
   __FILE__="JQuizMainSubWaitPlayer.cpp" __FUNCTION__="JQuizMainSubWaitPlayerClass_Create"
   lines=[30] passed to 1 source-location call(s) */

int * JQuizMainSubWaitPlayer::JQuizMainSubWaitPlayerClass_Create
                (undefined4 param_1,undefined4 param_2,undefined4 param_3,undefined4 param_4)

{
  int *piVar1;
  int iVar2;
  undefined4 local_18;
  undefined4 local_14;
  undefined4 uStack_10;
  
  uStack_10 = param_4;
  piVar1 = (int *)thunk_FUN_0201a228(4,s_JQuizMainSubWaitPlayer_cpp_02161c88,
                                     s_JQuizMainSubWaitPlayerClass_Crea_02161c64,0x1e);
  FUN_020517fc(piVar1,0,4);
  local_18 = 0xc0;
  local_14 = 0xb4;
  iVar2 = FUN_0203b3f4();
  iVar2 = FUN_0214ee60(param_1,*(undefined4 *)(iVar2 + 0x88),0x820000,0xb,0x20,&local_18);
  (**(code **)(**(int **)(iVar2 + 4) + 0xd8))(*(int **)(iVar2 + 4),0);
  *piVar1 = iVar2;
  return piVar1;
}

