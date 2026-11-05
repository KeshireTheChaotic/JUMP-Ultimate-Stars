
/* JUS-GAME ALControllerImp::Create [source-string-template] __FILE__="ALControllerImp.h"
   __FUNCTION__="Create"; one of 4 instantiations in arm9_ov02 */

void ALControllerImp::Create(int param_1)

{
  byte bVar1;
  int iVar2;
  undefined4 uVar3;
  undefined4 uVar4;
  undefined4 local_54;
  undefined4 local_50;
  undefined4 local_4c;
  undefined4 local_48;
  undefined4 local_44;
  undefined4 local_40;
  undefined4 local_3c;
  undefined4 local_38;
  undefined1 auStack_34 [12];
  undefined1 auStack_28 [12];
  
  bVar1 = *(byte *)(*(int *)(param_1 + 0x84) + 0x51);
  iVar2 = FUN_0203b424(0);
  uVar3 = FUN_02156d08(s_jgalaxy_ba_m_sel01_0215c06c,*(undefined4 *)(iVar2 + 0x88));
  *(undefined4 *)(param_1 + 100) = uVar3;
  iVar2 = FUN_0203b424(2);
  uVar3 = FUN_02156d08(s_jgalaxy_ba_m_sel00_0215c080,*(undefined4 *)(iVar2 + 0x88));
  *(undefined4 *)(param_1 + 0x60) = uVar3;
  iVar2 = FUN_0203b424(3);
  uVar3 = FUN_02156d08(*(undefined4 *)(&DAT_0215c570 + (uint)bVar1 * 8),
                       *(undefined4 *)(iVar2 + 0x88));
  *(undefined4 *)(param_1 + 0x5c) = uVar3;
  local_4c = 0x100000;
  local_50 = 0xfff00000;
  local_54 = 0;
  FUN_0214e39c(auStack_34,&local_4c,&local_50,&local_54);
  local_40 = 0;
  local_44 = 0;
  local_48 = 0;
  FUN_0214e39c(auStack_28,&local_40,&local_44,&local_48);
  FUN_0214ef10(&local_3c,uVar3,s_Position_0215c048);
  iVar2 = thunk_FUN_0201a228(0x4c,s_ALControllerImp_h_0215bff4,&DAT_0215be90,0x2b9);
  if (iVar2 != 0) {
    jus_TagIPCT::jus_TagIPCT(iVar2,0,local_3c,local_38,0x494c,auStack_28,auStack_34,0x400,2);
  }
  uVar4 = FUN_0214f194();
  FUN_02020f38(uVar3,uVar4);
  iVar2 = FUN_0203b414(1);
  FUN_0214d614(*(undefined4 *)(iVar2 + 0x88));
  iVar2 = FUN_0203687c(0x20,0x20);
  (**(code **)(**(int **)(iVar2 + 4) + 0xd8))(*(int **)(iVar2 + 4),1);
  *(int *)(param_1 + 0x68) = iVar2;
  FUN_0214d6e8();
  iVar2 = 1;
  do {
    FUN_0214d678(*(undefined4 *)(param_1 + iVar2 * 4 + 0x5c),*(undefined4 *)(param_1 + 4));
    iVar2 = iVar2 + 1;
  } while (iVar2 < 4);
  return;
}

