
/* WARNING: Removing unreachable block (ram,0x0214ede0) */
/* WARNING: Globals starting with '_' overlap smaller symbols at the same address */
/* JUS-GAME ALWidgetBaseImp::Create [source-string] __FILE__="ALWidgetBaseImp.h"
   __FUNCTION__="Create" lines=[678] passed to 1 source-location call(s) */

int ALWidgetBaseImp::Create(undefined4 param_1,int param_2)

{
  undefined4 uVar1;
  int iVar2;
  
  uVar1 = _DAT_021d5154;
  iVar2 = thunk_FUN_0201a228(0x14c,s_ALWidgetBaseImp_h_02160904,s_Create_021608cc,0x2a6);
  if (iVar2 != 0) {
    func_0x021b7950(iVar2,0,uVar1,CreateDrawFunc);
  }
  iVar2 = FUN_0214e3ec();
  func_0x021b5898(*(undefined4 *)(iVar2 + 4));
  (**(code **)(**(int **)(iVar2 + 4) + 0x24))(*(int **)(iVar2 + 4),param_1);
  func_0x021b6214(*(undefined4 *)(iVar2 + 4),0);
  func_0x021b7744(*(undefined4 *)(iVar2 + 4),0);
  if (param_2 != 0) {
    func_0x021b3ba4(iVar2,param_2);
  }
  (**(code **)(**(int **)(iVar2 + 4) + 0xd8))(*(int **)(iVar2 + 4),0);
  return iVar2;
}

