
/* WARNING: Globals starting with '_' overlap smaller symbols at the same address */
/* JUS-GAME ALWidgetImp::Create [source-string-template] __FILE__="ALWidgetImp.h"
   __FUNCTION__="Create"; one of 3 instantiations in arm9_ov04 */

void ALWidgetImp::Create(int param_1,undefined4 param_2,undefined4 param_3,undefined4 param_4,
                        undefined4 param_5,short param_6,short param_7,undefined4 param_8)

{
  undefined4 uVar1;
  int iVar2;
  undefined4 uVar3;
  
  uVar1 = _DAT_021d5154;
  uVar3 = *(undefined4 *)(param_1 + 4);
  iVar2 = jus_AllocDebug(0x134,s_ALWidgetImp_h_021608d4,s_Create_02160af8,0x3e);
  if (iVar2 != 0) {
    func_0x021af0f8(iVar2,uVar3,uVar1,ALWidgetBaseImp::CreateDrawFunc);
  }
  iVar2 = FUN_0214e3ec();
  (**(code **)(**(int **)(iVar2 + 4) + 0xd8))(*(int **)(iVar2 + 4),1);
  JQuizCommonScore::JQuizCommonScoreClass_Create
            (iVar2,param_2,param_3,param_4,param_5,(int)param_6,(int)param_7,param_8);
  return;
}

