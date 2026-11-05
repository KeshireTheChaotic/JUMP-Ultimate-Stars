
/* JUS-GAME ALControllerImp::Create [source-string-template] __FILE__="ALControllerImp.h"
   __FUNCTION__="Create"; one of 8 instantiations in arm9_ov00 */

void ALControllerImp::Create(int *param_1,undefined4 param_2,undefined4 param_3,undefined4 param_4)

{
  int iVar1;
  undefined4 uVar2;
  undefined4 local_24;
  undefined4 local_20;
  undefined4 local_1c;
  undefined4 local_18;
  undefined4 uStack_14;
  
  uStack_14 = param_4;
  FUN_02028330(*(undefined4 *)(*param_1 + 4));
  FUN_02150d54(&local_1c,param_1[4],s_Position_02161a3c);
  iVar1 = jus_AllocDebug(0x4c,s_ALControllerImp_h_02160d6c,s_Create_021618e8,0x2ef);
  if (iVar1 != 0) {
    jus_TagIPMV::jus_TagIPMV(iVar1,0,local_1c,local_18,0x3244,&DAT_02093c8c,0x1e,0,0);
  }
  uVar2 = FUN_021556a0();
  FUN_02020f38(param_1[4],uVar2);
  FUN_02150d54(&local_24,param_1[7],s_Position_02161a3c);
  iVar1 = jus_AllocDebug(0x4c,s_ALControllerImp_h_02160d6c,s_Create_021618e8,0x2ef);
  if (iVar1 != 0) {
    jus_TagIPMV::jus_TagIPMV(iVar1,0,local_24,local_20,0x3244,&DAT_02093c8c,0x1e,0,0);
  }
  iVar1 = FUN_021556a0();
  uVar2 = *(undefined4 *)(iVar1 + 4);
  iVar1 = jus_AllocDebug(0x48,s_ALControllerImp_h_021618f0,s_Create_021618d8,0x3e3);
  if (iVar1 != 0) {
    jus_TagDLST::jus_TagDLST(iVar1,0,uVar2,10,1);
  }
  uVar2 = FUN_021556a0();
  FUN_02020f38(param_1[7],uVar2);
  return;
}

