
/* JUS-GAME ALControllerImp::Create [source-string-template] __FILE__="ALControllerImp.h"
   __FUNCTION__="Create"; one of 2 instantiations in arm9_ov05 */

void ALControllerImp::Create(int param_1)

{
  int iVar1;
  undefined4 uVar2;
  int iVar3;
  int *piVar4;
  undefined4 local_3c;
  undefined4 local_38;
  undefined4 local_34;
  undefined4 local_30;
  undefined4 local_2c;
  undefined4 local_28;
  undefined4 local_24;
  undefined1 auStack_20 [12];
  
  iVar1 = FUN_0203b3f4();
  iVar1 = FUN_0215e2d4(*(undefined4 *)(iVar1 + 0x88),0x820000,0x27,0xfffffffc,0,0x5f);
  (**(code **)(**(int **)(iVar1 + 4) + 0xd8))(*(int **)(iVar1 + 4),1);
  iVar3 = *(int *)(param_1 + 4);
  *(undefined2 *)(iVar3 + 0xbc) = 0;
  *(undefined2 *)(iVar3 + 0xbe) = 3;
  piVar4 = *(int **)(iVar1 + 4);
  (**(code **)(**(int **)(param_1 + 4) + 0xb4))(*(int **)(param_1 + 4),piVar4);
  (**(code **)(*piVar4 + 0xc))();
  local_38 = 0x5f000;
  piVar4 = *(int **)(*(int *)(param_1 + 4) + 100);
  (**(code **)(*piVar4 + 0x10))(piVar4,&local_38);
  local_2c = 0;
  local_30 = 0;
  local_34 = 0;
  FUN_021595f4(auStack_20,&local_2c,&local_30,&local_34);
  piVar4 = *(int **)(param_1 + 4);
  uVar2 = FUN_020326b0(s_Position_02170170);
  uVar2 = (**(code **)(*piVar4 + 0x40))(piVar4,s_Position_02170170,&local_3c,uVar2);
  FUN_0202c4a4(&local_28,uVar2,local_3c);
  iVar1 = thunk_FUN_0201a228(0x4c,s_ALControllerImp_h_02170018,s_Create_0216fc54,0x2ef);
  if (iVar1 != 0) {
    jus_TagIPMV::jus_TagIPMV(iVar1,0,local_28,local_24,0x494c,auStack_20,4,1,0);
  }
  uVar2 = FUN_021595cc();
  FUN_02020f38(param_1,uVar2);
  return;
}

