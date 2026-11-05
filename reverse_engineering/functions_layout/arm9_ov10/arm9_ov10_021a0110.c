
/* JUS-GAME WiFiGame::WiFiGame_Static_SendCUSTOM [source-string] __FILE__="WiFiGame.cpp"
   __FUNCTION__="WiFiGame_Static_SendCUSTOM" lines=[524] passed to 1 source-location call(s) */

void WiFiGame::WiFiGame_Static_SendCUSTOM(ushort param_1,int param_2,int param_3,undefined4 param_4)

{
  int iVar1;
  char cVar2;
  int iVar3;
  uint uVar4;
  ushort local_20 [2];
  undefined4 uStack_1c;
  
  if (DAT_0214ccf8 != 0) {
    uStack_1c = param_4;
    cVar2 = FUN_0219b620();
    iVar1 = (int)cVar2;
    if (-1 < iVar1) {
      if (param_2 == 0) {
        param_3 = 0;
      }
      iVar3 = jus_AllocDebug(param_3 + 2,s_WiFiGame_cpp_021a72dc,
                             s_WiFiGame_Static_SendCUSTOM_021a7234,0x20c);
      local_20[0] = param_1 | 0x8000;
      FUN_02051890(local_20,iVar3,2);
      if (param_2 != 0) {
        FUN_02051890(param_2,iVar3 + 2,param_3);
      }
      FUN_0219d928(iVar3,param_3 + 2,iVar1,0xff);
      uVar4 = thunk_FUN_021766fc();
      if ((1 << (uVar4 & 0xff) & 0xffU) != 0) {
        WiFiGame_SendMess_ONEWAY(iVar1,iVar3,param_3 + 2);
      }
      FUN_0201b268(iVar3);
    }
  }
  return;
}

