
/* JUS-GAME ALControllerImp::Create [source-string-template] __FILE__="ALControllerImp.h"
   __FUNCTION__="Create"; one of 4 instantiations in arm9_ov02 */

void ALControllerImp::Create(int param_1)

{
  int iVar1;
  int *piVar2;
  uint uVar3;
  int iVar4;
  int iVar5;
  undefined4 uVar6;
  int iVar7;
  undefined4 local_54;
  undefined1 auStack_50 [4];
  int local_4c;
  int local_48;
  undefined4 local_44;
  undefined4 local_40;
  int local_3c [3];
  undefined1 auStack_30 [12];
  uint local_24 [3];
  
  iVar7 = *(int *)(*(int *)(param_1 + 0x84) + 0x34);
  iVar4 = (short)(ushort)*(byte *)(*(int *)(param_1 + 0x88) + 0x2c) * 0x48;
  iVar1 = FUN_0203b3e4();
  FUN_0214d614(*(undefined4 *)(iVar1 + 0x88));
  func_0x021c5fb4(0);
  iVar1 = FUN_0214d498();
  piVar2 = *(int **)(*(int *)(iVar1 + 4) + 100);
  (**(code **)(*piVar2 + 0xa4))(piVar2,1);
  piVar2 = *(int **)(*(int *)(iVar1 + 4) + 100);
  (**(code **)(*piVar2 + 0xa8))(piVar2,2);
  (**(code **)(**(int **)(iVar1 + 4) + 0xd8))(*(int **)(iVar1 + 4),1);
  local_3c[2] = 0x20000;
  FUN_0214d650(iVar1,local_3c + 2);
  FUN_0214f960(iVar1,0x215bf0c);
  piVar2 = *(int **)(*(int *)(iVar1 + 4) + 100);
  (**(code **)(*piVar2 + 0x68))(piVar2,*(undefined4 *)(param_1 + 0x88));
  FUN_0214d678(iVar1,*(undefined4 *)(param_1 + 0x68));
  FUN_0214d6b0(*(undefined4 *)(param_1 + 8),iVar1);
  func_0x021c5fb4(0);
  iVar1 = FUN_0214d498();
  piVar2 = *(int **)(*(int *)(iVar1 + 4) + 100);
  (**(code **)(*piVar2 + 0xa4))(piVar2,1);
  piVar2 = *(int **)(*(int *)(iVar1 + 4) + 100);
  (**(code **)(*piVar2 + 0xa8))(piVar2,0);
  local_3c[1] = 0x61000;
  FUN_0214d650(iVar1,local_3c + 1);
  (**(code **)(**(int **)(iVar1 + 4) + 0xd8))(*(int **)(iVar1 + 4),1);
  FUN_0214fa00(local_24,&DAT_0215bf18);
  uVar3 = FUN_02074294(iVar7 + iVar4);
  if (uVar3 < 7) {
    iVar5 = (6 - uVar3) * -6 + 0x48;
  }
  else {
    iVar5 = uVar3 * 0xc;
  }
  FUN_0214f960(iVar1,local_24);
  local_3c[0] = ((local_24[0] >> 0xc) - iVar5) * 0x1000;
  FUN_0214ef60(iVar1,local_3c);
  piVar2 = *(int **)(*(int *)(iVar1 + 4) + 100);
  (**(code **)(*piVar2 + 0x68))(piVar2,iVar7 + iVar4);
  FUN_0214d678(iVar1,*(undefined4 *)(param_1 + 0x68));
  FUN_0214d6b0(*(undefined4 *)(param_1 + 8),iVar1);
  FUN_0214f990(&local_4c,iVar1);
  local_48 = local_4c + 0x100000;
  local_54 = 0;
  FUN_0214f9a4(auStack_50,iVar1);
  FUN_0214e39c(auStack_30,&local_48,auStack_50,&local_54);
  FUN_0214ef10(&local_44,iVar1,s_Position_0215c048);
  iVar4 = thunk_FUN_0201a228(0x4c,s_ALControllerImp_h_0215c008,s_Create_0215bec0,0x2ef);
  if (iVar4 != 0) {
    jus_TagIPMV::jus_TagIPMV(iVar4,0,local_44,local_40,0x494c,auStack_30,8,0,1);
  }
  iVar4 = FUN_0214f194();
  uVar6 = *(undefined4 *)(iVar4 + 4);
  iVar4 = thunk_FUN_0201a228(0x48,s_ALControllerImp_h_0215bfe0,&DAT_0215beb0,0x3e3);
  if (iVar4 != 0) {
    jus_TagDLST::jus_TagDLST(iVar4,0,uVar6,0x78,0);
  }
  uVar6 = FUN_0214f194();
  FUN_02020f38(iVar1,uVar6);
  FUN_0214d6e8();
  return;
}

