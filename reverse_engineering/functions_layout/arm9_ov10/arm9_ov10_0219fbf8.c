
/* JUS-GAME WiFiGame::WiFiGame_Static_SendCOMMUnreliable [source-string] __FILE__="WiFiGame.cpp"
   __FUNCTION__="WiFiGame_Static_SendCOMMUnreliable" lines=[499] passed to 1 source-location call(s)
    */

void WiFiGame::WiFiGame_Static_SendCOMMUnreliable
               (undefined2 param_1,undefined4 param_2,undefined4 param_3,undefined4 param_4,
               undefined1 param_5)

{
  int iVar1;
  char cVar2;
  int iVar3;
  uint uVar4;
  int iVar5;
  undefined1 uStack00000000;
  undefined2 local_18;
  undefined2 local_16;
  undefined4 uStack_14;
  
  if (DAT_0214ccf8 != 0) {
    local_16 = param_1;
    uStack_14 = param_4;
    cVar2 = FUN_0219b620();
    iVar1 = (int)cVar2;
    iVar5 = 2;
    if (-1 < iVar1) {
      if (&param_5 == (undefined1 *)0x16) {
        iVar5 = 0;
      }
      iVar3 = jus_AllocDebug(iVar5 + 2,s_WiFiGame_cpp_021a72dc,
                             s_WiFiGame_Static_SendCOMMUnreliab_021a72b8,499);
      local_18 = 0x106;
      FUN_02051890(&local_18,iVar3,2);
      if (&local_16 != (undefined2 *)0x0) {
        FUN_02051890(&local_16,iVar3 + 2,iVar5);
      }
      WiFiDataSendRecv::WiFiDataSendRecv_DataSendONEWAYUnreliable(iVar3,iVar5 + 2,iVar1,0xff);
      uVar4 = thunk_FUN_021766fc();
      if ((1 << (uVar4 & 0xff) & 0xffU) != 0) {
        WiFiGame_SendMess_ONEWAY(iVar1,iVar3,iVar5 + 2);
      }
      FUN_0201b268(iVar3);
    }
  }
  return;
}

