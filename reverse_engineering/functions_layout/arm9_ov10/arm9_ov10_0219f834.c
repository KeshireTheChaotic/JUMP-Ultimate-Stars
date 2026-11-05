
/* JUS-GAME WiFiGame::WiFiGame_Static_SendCOMM [source-string] __FILE__="WiFiGame.cpp"
   __FUNCTION__="WiFiGame_Static_SendCOMM" lines=[475] passed to 1 source-location call(s) */

void WiFiGame::WiFiGame_Static_SendCOMM
               (undefined2 param_1,int param_2,int param_3,int param_4,byte param_5)

{
  int iVar1;
  uint uVar2;
  undefined2 local_20 [2];
  int iStack_1c;
  
  if (-1 < param_4) {
    if (param_2 == 0) {
      param_3 = 0;
    }
    iStack_1c = param_4;
    iVar1 = jus_AllocDebug(param_3 + 2,s_WiFiGame_cpp_021a72dc,s_WiFiGame_Static_SendCOMM_021a7218,
                           0x1db);
    local_20[0] = param_1;
    FUN_02051890(local_20,iVar1,2);
    if (param_2 != 0) {
      FUN_02051890(param_2,iVar1 + 2,param_3);
    }
    FUN_0219d928(iVar1,param_3 + 2,param_4,param_5);
    uVar2 = thunk_FUN_021766fc();
    if (((uint)param_5 & 1 << (uVar2 & 0xff)) != 0) {
      WiFiGame_SendMess_ONEWAY(param_4,iVar1,param_3 + 2);
    }
    FUN_0201b268(iVar1);
  }
  return;
}

