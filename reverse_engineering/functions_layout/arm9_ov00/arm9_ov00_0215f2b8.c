
/* JUS-GAME ALControllerImp::Create [source-string-template] __FILE__="ALControllerImp.h"
   __FUNCTION__="Create"; one of 8 instantiations in arm9_ov00 */

void ALControllerImp::Create(int param_1,undefined4 param_2,undefined4 param_3,undefined4 param_4)

{
  int iVar1;
  undefined4 uVar2;
  int iVar3;
  undefined4 local_2c;
  undefined4 local_28;
  undefined4 local_24;
  undefined4 local_20;
  undefined4 local_1c;
  undefined4 local_18;
  undefined4 uStack_14;
  
  iVar3 = *(int *)(*(int *)(param_1 + 4) + 0x10);
  uStack_14 = param_4;
  iVar1 = FUN_02155b08(*(undefined4 *)(iVar3 + 0x10),0x564d5049,0);
  iVar1 = (**(code **)(**(int **)(iVar1 + 4) + 0x68))();
  if (iVar1 != 0) {
    iVar1 = FUN_02155b08(*(undefined4 *)(iVar3 + 0x1c),0x564d5049,0);
    iVar1 = (**(code **)(**(int **)(iVar1 + 4) + 0x68))();
    if (iVar1 != 0) {
      if ((*(char *)(iVar3 + 0x68) != '\0') || (**(int **)(iVar3 + 100) == 3)) {
        FUN_0214ec4c(*(undefined4 *)(iVar3 + 0x60),2);
        FUN_020282f4(*(undefined4 *)(param_1 + 4));
      }
      FUN_02028384(*(undefined4 *)(param_1 + 4),FUN_0215ef44);
      FUN_0215edbc(iVar3);
      local_18 = 0xfff00000;
      FUN_0215dafc(*(undefined4 *)(iVar3 + 0x10),&local_18);
      local_1c = 0x100000;
      FUN_0215dafc(*(undefined4 *)(iVar3 + 0x1c),&local_1c);
      FUN_02150d54(&local_24,*(undefined4 *)(iVar3 + 0x10),s_Position_02161a3c);
      iVar1 = thunk_FUN_0201a228(0x4c,FUN_02160d6c,&DAT_021618e8,0x2ef);
      if (iVar1 != 0) {
        jus_TagIPMV::jus_TagIPMV(iVar1,0,local_24,local_20,0x3244,&DAT_02093c8c,0x1e,0,0);
      }
      uVar2 = FUN_021556a0();
      FUN_02020f38(*(undefined4 *)(iVar3 + 0x10),uVar2);
      FUN_02150d54(&local_2c,*(undefined4 *)(iVar3 + 0x1c),s_Position_02161a3c);
      iVar1 = thunk_FUN_0201a228(0x4c,FUN_02160d6c,&DAT_021618e8,0x2ef);
      if (iVar1 != 0) {
        jus_TagIPMV::jus_TagIPMV(iVar1,0,local_2c,local_28,0x3244,&DAT_02093c8c,0x1e,0,0);
      }
      iVar1 = FUN_021556a0();
      uVar2 = *(undefined4 *)(iVar1 + 4);
      iVar1 = thunk_FUN_0201a228(0x48,s_ALControllerImp_h_021618f0,s_Create_021618d8,0x3e3);
      if (iVar1 != 0) {
        jus_TagDLST::jus_TagDLST(iVar1,0,uVar2,10,1);
      }
      uVar2 = FUN_021556a0();
      FUN_02020f38(*(undefined4 *)(iVar3 + 0x1c),uVar2);
    }
  }
  return;
}

