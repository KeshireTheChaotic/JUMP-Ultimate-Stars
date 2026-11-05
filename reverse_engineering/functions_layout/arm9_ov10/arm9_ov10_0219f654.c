
/* JUS-GAME WiFiGame::WiFiGame_SendMess_ONEWAY [source-string] __FILE__="WiFiGame.cpp"
   __FUNCTION__="WiFiGame_SendMess_ONEWAY" lines=[289, 405, 421] passed to 4 source-location
   call(s); header inlines: ALObjectImp.h:PostSyncMessage */

void WiFiGame::WiFiGame_SendMess_ONEWAY(int param_1,int param_2,int param_3,undefined4 param_4)

{
  int iVar1;
  undefined4 uVar2;
  ushort *puVar3;
  undefined4 uVar4;
  uint uVar5;
  undefined4 uVar6;
  undefined4 uVar7;
  undefined4 uVar8;
  ushort local_20 [2];
  undefined4 uStack_1c;
  
  if (*(int *)(DAT_0214ccf8 + 0x1c3c) != 0) {
    uStack_1c = param_4;
    FUN_02051890(param_2,local_20,2);
    if ((local_20[0] & 0x8000) == 0) {
      if ((local_20[0] & 0x7f00) == 0) {
        uVar5 = local_20[0] & 0xff | param_1 << 8;
        uVar4 = 0x70000004;
      }
      else {
        uVar4 = 0x7ff00000;
        uVar5 = local_20[0] & 0xfff | param_1 << 0xc;
      }
      if (param_3 < 3) {
        uVar6 = 0;
        uVar7 = uVar6;
      }
      else {
        uVar6 = jus_AllocDebug(param_3 + -2,s_WiFiGame_cpp_021a72dc,
                               s_WiFiGame_SendMess_ONEWAY_021a71fc,0x195);
        FUN_02051890(param_2 + 2,uVar6,param_3 + -2);
        uVar7 = 4;
      }
      uVar8 = *(undefined4 *)(*(int *)(DAT_0214ccf8 + 0x1c3c) + 4);
      iVar1 = jus_AllocDebug(0x2c,s_ALObjectImp_h_021a71c4,s_PostSyncMessage_021a71d4,0x121);
      uVar2 = 0;
      if (iVar1 != 0) {
        uVar2 = WiFiGame(iVar1,uVar4,0,uVar5,uVar6,uVar7);
      }
      FUN_020287f8(uVar8,uVar2,uVar7);
    }
    else {
      puVar3 = (ushort *)
               jus_AllocDebug(param_3,s_WiFiGame_cpp_021a72dc,s_WiFiGame_SendMess_ONEWAY_021a71fc,
                              0x1a5);
      FUN_02051890(param_2,puVar3,param_3);
      *puVar3 = *puVar3 & 0x7fff;
      uVar7 = *(undefined4 *)(*(int *)(DAT_0214ccf8 + 0x1c3c) + 4);
      iVar1 = jus_AllocDebug(0x2c,s_ALObjectImp_h_021a71c4,s_PostSyncMessage_021a71d4,0x121);
      uVar4 = 0;
      if (iVar1 != 0) {
        uVar4 = WiFiGame(iVar1,0x70000005,0,puVar3,param_3,2);
      }
      FUN_020287f8(uVar7,uVar4,2);
    }
  }
  return;
}

