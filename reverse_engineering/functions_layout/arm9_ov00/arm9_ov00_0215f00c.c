
/* JUS-GAME ALControllerImp::Create [source-string-template] __FILE__="ALControllerImp.h"
   __FUNCTION__="Create"; one of 8 instantiations in arm9_ov00 */

void ALControllerImp::Create(int param_1)

{
  short sVar1;
  int *piVar2;
  int iVar3;
  undefined4 uVar4;
  int iVar5;
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
  sVar1 = *(short *)(iVar5 + 0x6c);
  *(short *)(iVar5 + 0x6c) = sVar1 + -1;
  if (sVar1 == 0) {
    piVar2 = *(int **)(*(int *)(iVar5 + 0x20) + 4);
    (**(code **)(*piVar2 + 0xd8))(piVar2,0);
    if (*(char *)(iVar5 + 0x69) == '\0') {
      *(undefined2 *)(iVar5 + 0x6c) = 0x1e;
      piVar2 = *(int **)(*(int *)(iVar5 + 0x20) + 4);
      (**(code **)(*piVar2 + 0xd8))(piVar2,1);
      FUN_02028384(*(undefined4 *)(param_1 + 4),FUN_0215f234);
    }
    else {
      FUN_02028384(*(undefined4 *)(param_1 + 4),Create);
      local_38 = 0x100000;
      local_3c = 0;
      local_40 = 0;
      FUN_02151038(auStack_20,&local_38,&local_3c,&local_40);
      FUN_02150d54(&local_34,*(undefined4 *)(iVar5 + 0x10),s_Position_02161a3c);
      iVar3 = jus_AllocDebug(0x4c,s_ALControllerImp_h_02160d6c,s_Create_021618e8,0x2ef);
      if (iVar3 != 0) {
        jus_TagIPMV::jus_TagIPMV(iVar3,0,local_34,local_30,0x3244,auStack_20,0x1e,0,0);
      }
      uVar4 = FUN_021556a0();
      FUN_02020f38(*(undefined4 *)(iVar5 + 0x10),uVar4);
      local_4c = 0xfff00000;
      local_50 = 0;
      local_54 = 0;
      FUN_02151038(auStack_2c,&local_4c,&local_50,&local_54);
      FUN_02150d54(&local_48,*(undefined4 *)(iVar5 + 0x1c),s_Position_02161a3c);
      iVar3 = jus_AllocDebug(0x4c,s_ALControllerImp_h_02160d6c,s_Create_021618e8,0x2ef);
      if (iVar3 != 0) {
        jus_TagIPMV::jus_TagIPMV(iVar3,0,local_48,local_44,0x3244,auStack_2c,0x1e,0,0);
      }
      iVar3 = FUN_021556a0();
      uVar4 = *(undefined4 *)(iVar3 + 4);
      iVar3 = jus_AllocDebug(0x48,s_ALControllerImp_h_021618f0,s_Create_021618d8,0x3e3);
      if (iVar3 != 0) {
        jus_TagDLST::jus_TagDLST(iVar3,0,uVar4,10,1);
      }
      uVar4 = FUN_021556a0();
      FUN_02020f38(*(undefined4 *)(iVar5 + 0x1c),uVar4);
    }
  }
  return;
}

