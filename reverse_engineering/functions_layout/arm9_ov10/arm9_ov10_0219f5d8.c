
/* JUS-GAME ALObjectImp::PostSyncMessage [source-string-template] __FILE__="ALObjectImp.h"
   __FUNCTION__="PostSyncMessage"; one of 5 instantiations in arm9_ov10 */

void ALObjectImp::PostSyncMessage(void)

{
  int iVar1;
  undefined4 uVar2;
  undefined4 uVar3;
  
                    /* JUS-TAG source_file_inferred="WiFiGame.cpp" */
  if (*(int *)(DAT_0214ccf8 + 0x1c3c) != 0) {
    uVar3 = *(undefined4 *)(*(int *)(DAT_0214ccf8 + 0x1c3c) + 4);
    iVar1 = thunk_FUN_0201a228(0x2c,s_ALObjectImp_h_021a71c4,s_PostSyncMessage_021a71d4,0x121);
    uVar2 = 0;
    if (iVar1 != 0) {
      uVar2 = WiFiGame::WiFiGame(iVar1,0x70000007,0,0,0,0);
    }
    FUN_020287f8(uVar3,uVar2,0);
  }
  return;
}

