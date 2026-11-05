
/* JUS-GAME ALObjectImp::PostMessage [source-string-template] __FILE__="ALObjectImp.h"
   __FUNCTION__="PostMessage"; one of 2 instantiations in arm9_ov10 */

void ALObjectImp::PostMessage(int param_1,undefined4 param_2,undefined4 param_3,undefined4 param_4)

{
  int iVar1;
  undefined4 uVar2;
  undefined4 uVar3;
  undefined4 uVar4;
  
  iVar1 = FUN_0219b088();
  if (iVar1 != 0) {
    if (*(int *)(DAT_0214ccf8 + 0x1c40) != 0) {
      uVar3 = *(undefined4 *)(param_1 + 4);
      uVar4 = *(undefined4 *)(*(int *)(DAT_0214ccf8 + 0x1c40) + 4);
      iVar1 = jus_AllocDebug(0x2c,s_ALObjectImp_h_021a71b4,s_PostMessage_021a71a8,0x10a);
      uVar2 = 0;
      if (iVar1 != 0) {
        uVar2 = WiFiGame::WiFiGame(iVar1,0x70000006,uVar3,0,0,0,param_4);
      }
      FUN_02028644(uVar4,uVar2,0);
    }
    FUN_02088260();
  }
  return;
}

