
/* JUS-GAME WiFiGame::WiFi_SendPersonalData [source-string] __FILE__="WiFiGame.cpp"
   __FUNCTION__="WiFi_SendPersonalData" lines=[876] passed to 1 source-location call(s) */

void WiFiGame::WiFi_SendPersonalData
               (undefined4 param_1,int param_2,undefined4 param_3,undefined4 param_4)

{
  int iVar1;
  int iVar2;
  undefined4 uVar3;
  bool bVar4;
  undefined1 auStack_34 [32];
  undefined4 uStack_14;
  
  if (DAT_0214ccf8 != 0) {
    uStack_14 = param_4;
    iVar1 = thunk_FUN_0201a228(0x4c,s_WiFiGame_cpp_021a72dc,s_WiFi_SendPersonalData_021a71e4,0x36c);
    FUN_02051890(param_1,iVar1,0x4c);
    iVar2 = FUN_0219b620();
    bVar4 = param_2 == iVar2;
    if (bVar4) {
      iVar2 = (int)*(char *)(DAT_0214ccf8 + 0x5c);
    }
    if (bVar4 && iVar2 == 0) {
      FUN_020517fc(auStack_34,0,0x20);
      uVar3 = FUN_0219a610();
      FUN_020725e0(iVar1,uVar3,0);
      FUN_0207260c(iVar1,auStack_34,0);
      FUN_020517fc(iVar1 + 0x40,0,0xc);
      iVar2 = FUN_0219a5e8();
      if (iVar2 != 0) {
        FUN_0207269c(iVar1,0);
      }
    }
    WiFiGame_Static_SendCOMM(0x23,iVar1,0x4c,(int)(char)param_2,0xff);
    FUN_0201b244(iVar1);
  }
  return;
}

