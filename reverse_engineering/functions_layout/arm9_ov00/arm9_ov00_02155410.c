
/* WARNING: Removing unreachable block (ram,0x02155470) */
/* WARNING: Globals starting with '_' overlap smaller symbols at the same address */
/* JUS-GAME ALWidgetBaseImp::Create [source-string-template] __FILE__="ALWidgetBaseImp.h"
   __FUNCTION__="Create"; one of 2 instantiations in arm9_ov00 */

int ALWidgetBaseImp::Create(undefined4 param_1,int param_2,undefined4 param_3,undefined4 param_4)

{
  undefined4 uVar1;
  int iVar2;
  undefined4 local_18;
  undefined4 uStack_14;
  
  uVar1 = _DAT_021d5154;
  uStack_14 = param_4;
  iVar2 = thunk_FUN_0201a228(0x14c,s_ALWidgetBaseImp_h_02160d80,s_Create_0216104c,0x2a6);
  if (iVar2 != 0) {
    func_0x021b7950(iVar2,0,uVar1,CreateDrawFunc);
  }
  iVar2 = FUN_0214ed84();
  func_0x021b5898(*(undefined4 *)(iVar2 + 4));
  local_18 = 0x80000;
  FUN_0214eed0(iVar2,&local_18);
  (**(code **)(**(int **)(iVar2 + 4) + 0x24))(*(int **)(iVar2 + 4),param_1);
  if (param_2 != 0) {
    func_0x021b3ba4(iVar2,param_2);
  }
  func_0x021b6214(*(undefined4 *)(iVar2 + 4),1);
  (**(code **)(**(int **)(iVar2 + 4) + 0xd8))(*(int **)(iVar2 + 4),1);
  return iVar2;
}

