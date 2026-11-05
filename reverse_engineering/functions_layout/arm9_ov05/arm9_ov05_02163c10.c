
/* WARNING: Removing unreachable block (ram,0x02163cac) */
/* WARNING: Globals starting with '_' overlap smaller symbols at the same address */
/* JUS-GAME ALWidgetBaseImp::Create [source-string-template] __FILE__="ALWidgetBaseImp.h"
   __FUNCTION__="Create"; one of 2 instantiations in arm9_ov05 */

int ALWidgetBaseImp::Create(undefined4 param_1,int param_2)

{
  undefined4 uVar1;
  int iVar2;
  undefined4 uVar3;
  
  uVar1 = _DAT_021d5154;
  if (param_2 == 0) {
    iVar2 = thunk_FUN_0201a228(0x14c,s_ALWidgetBaseImp_h_021706f4,s_Create_021711d0,0x2a6);
    if (iVar2 != 0) {
      func_0x021b7950(iVar2,0,uVar1,CreateDrawFunc);
    }
    iVar2 = FUN_021504fc();
  }
  else {
    uVar3 = *(undefined4 *)(param_2 + 4);
    iVar2 = thunk_FUN_0201a228(0x14c,s_ALWidgetBaseImp_h_021706f4,s_Create_021711d0,0x2a6);
    if (iVar2 != 0) {
      func_0x021b7950(iVar2,uVar3,uVar1,CreateDrawFunc);
    }
    iVar2 = FUN_021504fc();
  }
  func_0x021b5898(*(undefined4 *)(iVar2 + 4));
  (**(code **)(**(int **)(iVar2 + 4) + 0x24))(*(int **)(iVar2 + 4),param_1);
  (**(code **)(**(int **)(iVar2 + 4) + 0xd8))(*(int **)(iVar2 + 4),1);
  return iVar2;
}

