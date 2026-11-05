
/* JUS-GAME ALControllerImp::Create [source-string] __FILE__="ALControllerImp.h"
   __FUNCTION__="Create" lines=[751] passed to 2 source-location call(s) */

int ALControllerImp::Create(int param_1)

{
  int iVar1;
  undefined4 uVar2;
  int iVar3;
  uint uVar4;
  int iVar5;
  longlong lVar6;
  undefined4 local_54;
  undefined4 local_50;
  undefined4 local_4c;
  undefined4 local_48;
  undefined4 local_44;
  undefined4 local_40;
  undefined4 local_3c;
  undefined4 local_38;
  undefined4 local_34;
  undefined4 local_30;
  undefined1 auStack_2c [12];
  undefined1 auStack_20 [12];
  
  iVar5 = *(int *)(*(int *)(param_1 + 4) + 0x10);
  lVar6 = FUN_02054b44();
  lVar6 = lVar6 - *(longlong *)(iVar5 + 0x80);
  uVar4 = (uint)lVar6;
  iVar3 = (int)((ulonglong)lVar6 >> 0x20);
  iVar1 = 0xe1808 - uVar4;
  if ((uint)(uVar4 < 0xe1809) <= (uint)-iVar3) {
    FUN_02169034(*(undefined4 *)(iVar5 + 0x70),iVar3,-(uint)(uVar4 >= 0xe1809) - iVar3);
    local_38 = 0;
    local_3c = 0;
    local_40 = 0;
    FUN_0214dc68(auStack_20,&local_38,&local_3c,&local_40);
    FUN_0214f714(&local_34,*(undefined4 *)(iVar5 + 0x5c),s_Position_0216d88c);
    iVar1 = jus_AllocDebug(0x4c,s_ALControllerImp_h_0216c958,s_Create_0216d6d4,0x2ef);
    if (iVar1 != 0) {
      jus_TagIPMV::jus_TagIPMV(iVar1,0,local_34,local_30,0x494c,auStack_20,6,0,1);
    }
    uVar2 = FUN_0215e28c();
    FUN_02020f38(*(undefined4 *)(iVar5 + 0x5c),uVar2);
    local_4c = 0;
    local_50 = 0;
    local_54 = 0;
    FUN_0214dc68(auStack_2c,&local_4c,&local_50,&local_54);
    FUN_0214f714(&local_48,*(undefined4 *)(iVar5 + 0x58),s_Position_0216d88c);
    iVar1 = jus_AllocDebug(0x4c,s_ALControllerImp_h_0216c958,s_Create_0216d6d4,0x2ef);
    if (iVar1 != 0) {
      jus_TagIPMV::jus_TagIPMV(iVar1,0,local_48,local_44,0x494c,auStack_2c,6,0,1);
    }
    uVar2 = FUN_0215e28c();
    FUN_02020f38(*(undefined4 *)(iVar5 + 0x58),uVar2);
    *(undefined2 *)(iVar5 + 0x96) = 0;
    iVar1 = FUN_02028384(*(undefined4 *)(param_1 + 4),FUN_02166250);
  }
  return iVar1;
}

