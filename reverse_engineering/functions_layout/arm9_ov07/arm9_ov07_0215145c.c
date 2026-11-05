
/* WARNING: Removing unreachable block (ram,0x021514b8) */
/* WARNING: Globals starting with '_' overlap smaller symbols at the same address */
/* JUS-GAME ALWidgetBaseImp::Create [source-string] __FILE__="ALWidgetBaseImp.h"
   __FUNCTION__="Create" lines=[678] passed to 1 source-location call(s) */

int ALWidgetBaseImp::Create(undefined4 param_1,int param_2)

{
  undefined4 uVar1;
  int iVar2;
  
  uVar1 = _DAT_021d5154;
  iVar2 = jus_AllocDebug(0x14c,s_ALWidgetBaseImp_h_02169754,s_Create_0216974c,0x2a6);
  if (iVar2 != 0) {
    func_0x021b7950(iVar2,0,uVar1,CreateDrawFunc);
  }
  iVar2 = FUN_0214f340();
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

