
/* JUS-GAME ALControllerImp::Create [source-string-template] __FILE__="ALControllerImp.h"
   __FUNCTION__="Create"; one of 8 instantiations in arm9_ov00 */

void ALControllerImp::Create(undefined4 param_1)

{
  int iVar1;
  undefined4 uVar2;
  undefined4 local_54;
  undefined4 local_50;
  undefined4 local_4c;
  undefined4 local_48;
  undefined4 local_44;
  undefined4 local_40;
  undefined4 local_3c;
  undefined4 local_38;
  undefined4 local_34;
  undefined1 auStack_30 [12];
  undefined1 auStack_24 [12];
  
  iVar1 = FUN_0203b404();
  iVar1 = FUN_02155334(0x500024,*(undefined4 *)(iVar1 + 0x88),0x80,0);
  *(undefined4 *)(*(int *)(iVar1 + 4) + 0x54) = 0x31305053;
  FUN_021552fc(param_1);
  local_34 = 0x81000;
  FUN_0214eed0(param_1,&local_34);
  local_54 = 0;
  local_4c = 0x111e;
  local_50 = 0x111e;
  FUN_02151038(auStack_30,&local_4c,&local_50,&local_54);
  local_40 = 0x1000;
  local_44 = 0x1000;
  local_48 = 0;
  FUN_02151038(auStack_24,&local_40,&local_44,&local_48);
  FUN_02150d54(&local_3c,param_1,s_Scale_0216126c);
  iVar1 = thunk_FUN_0201a228(0x4c,FUN_02161174,s_Create_02161044,0x2b9);
  if (iVar1 != 0) {
    jus_TagIPCT::jus_TagIPCT(iVar1,0,local_3c,local_38,0x494c,auStack_24,auStack_30,0x1e,0);
  }
  uVar2 = FUN_021556a0();
  FUN_02020f38(param_1,uVar2);
  return;
}

