
/* JUS-GAME ALObjectImp::PostMessage [source-string-template] __FILE__="ALObjectImp.h"
   __FUNCTION__="PostMessage"; one of 3 instantiations in arm9_ov12 */

void ALObjectImp::PostMessage(int param_1,undefined4 param_2,uint param_3)

{
  int iVar1;
  undefined4 uVar2;
  undefined4 *puVar3;
  uint uVar4;
  undefined4 uVar5;
  
  for (uVar4 = 0; uVar4 < *(uint *)(param_1 + 0x88); uVar4 = uVar4 + 1) {
    puVar3 = (undefined4 *)(*(int *)(param_1 + 0x84) + uVar4 * 8);
    if ((*(ushort *)(puVar3 + 1) & param_3) != 0) {
      uVar5 = *puVar3;
      iVar1 = jus_AllocDebug(0x2c,s_ALObjectImp_h_021d3c10,s_PostMessage_021d3be4,0x10a);
      uVar2 = 0;
      if (iVar1 != 0) {
        uVar2 = jus_Class_021d293c::jus_Class_021d293c(iVar1,param_2,param_1,param_3,0,0);
      }
      FUN_02028644(uVar5,uVar2,0);
    }
  }
  return;
}

