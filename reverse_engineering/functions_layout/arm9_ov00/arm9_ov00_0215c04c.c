
/* JUS-GAME ALControllerImp::Create [source-string-template] __FILE__="ALControllerImp.h"
   __FUNCTION__="Create"; one of 8 instantiations in arm9_ov00 */

void ALControllerImp::Create(int param_1,int *param_2,undefined4 param_3,undefined4 param_4)

{
  int iVar1;
  undefined4 uVar2;
  int extraout_r1;
  int iVar3;
  undefined4 local_6c;
  undefined4 local_68;
  undefined4 local_64;
  int local_60;
  int local_5c [5];
  undefined4 local_48;
  undefined4 local_44;
  undefined4 local_40;
  undefined4 local_3c;
  undefined4 local_38;
  undefined1 auStack_34 [12];
  undefined4 uStack_28;
  
  uStack_28 = param_4;
  iVar1 = ALNodeImp::Create();
  *param_2 = iVar1;
  (**(code **)(**(int **)(iVar1 + 4) + 0x24))(*(int **)(iVar1 + 4),param_2);
  local_68 = 0xaf000;
  iVar1 = FUN_0214eddc(0xa03000,0xa03000,param_3,&local_68,*param_2);
  (**(code **)(**(int **)(iVar1 + 4) + 0xd8))(*(int **)(iVar1 + 4),1);
  param_2[3] = iVar1;
  local_6c = 0x83000;
  iVar1 = FUN_0214eddc(0xa03002,0xa03000,param_3,&local_6c,*param_2);
  (**(code **)(**(int **)(iVar1 + 4) + 0xd8))(*(int **)(iVar1 + 4),1);
  param_2[5] = iVar1;
  local_3c = 0x60000;
  local_38 = 0xfff80000;
  FUN_0214f418(param_2[3],&local_38,&local_3c);
  local_44 = 0xb4000;
  local_40 = 0x128000;
  FUN_0214f418(param_2[5],&local_40,&local_44);
  (**(code **)(**(int **)(param_2[5] + 4) + 0x24))(*(int **)(param_2[5] + 4),param_1);
  FUN_02028384(*(undefined4 *)(param_2[5] + 4),FUN_0215dfe8);
  local_5c[3] = 0xfff80000;
  local_5c[2] = 0x60000;
  local_5c[1] = 0;
  FUN_02151038(auStack_34,local_5c + 3,local_5c + 2,local_5c + 1);
  FUN_02150d54(local_5c + 4,param_2[3],s_Position_0216188c);
  iVar1 = thunk_FUN_0201a228(0x4c,FUN_02160d6c,s_Create_0216173c,0x2ef);
  if (iVar1 != 0) {
    jus_TagIPMV::jus_TagIPMV(iVar1,0,local_5c[4],local_48,0x3244,auStack_34,0x1e,0,0);
  }
  uVar2 = FUN_021556a0();
  FUN_02020f38(param_2[3],uVar2);
  for (iVar1 = 0; iVar1 < (int)(uint)*(byte *)(param_1 + 0x1b4); iVar1 = iVar1 + 1) {
    local_5c[0] = (0xae - iVar1) * 0x1000;
    iVar3 = *(int *)(*(int *)(param_1 + 0x40) + (uint)*(byte *)(param_1 + iVar1 + 0x1b8) * 0x58) +
            -1;
    FUN_0200d338(iVar3,0xe);
    iVar3 = FUN_0214eddc(iVar3 * 2 + 0xa01000,(iVar3 - extraout_r1) * 2 + 0xa01000,param_3,local_5c,
                         *param_2);
    local_60 = ((iVar1 + 1) * 0x30 + 0x128) * 0x1000;
    local_64 = 0xb4000;
    FUN_0214f418(iVar3,&local_60,&local_64);
    (**(code **)(**(int **)(iVar3 + 4) + 0x24))(*(int **)(iVar3 + 4),param_1);
    FUN_02028384(*(undefined4 *)(iVar3 + 4),FUN_0215dfe8);
  }
  return;
}

