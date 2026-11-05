
/* WARNING: Removing unreachable block (ram,0x0215854c) */
/* WARNING: Globals starting with '_' overlap smaller symbols at the same address */
/* JUS-GAME ALWidgetBaseImp::Create [source-string-template] __FILE__="ALWidgetBaseImp.h"
   __FUNCTION__="Create"; one of 2 instantiations in arm9_ov00 */

int ALWidgetBaseImp::Create(int param_1,undefined4 param_2,undefined4 param_3,undefined4 param_4)

{
  undefined4 uVar1;
  int iVar2;
  undefined4 uVar3;
  
  uVar1 = _DAT_021d5154;
  if (param_1 == 0) {
    iVar2 = thunk_FUN_0201a228(0x14c,s_ALWidgetBaseImp_h_02160d80,s_Create_02161344,0x2a6,param_4);
    if (iVar2 != 0) {
      func_0x021b7950(iVar2,0,uVar1,CreateDrawFunc);
    }
    iVar2 = FUN_0214ed84();
  }
  else {
    uVar3 = *(undefined4 *)(param_1 + 4);
    iVar2 = thunk_FUN_0201a228(0x14c,s_ALWidgetBaseImp_h_02160d80,s_Create_02161344,0x2a6,param_4);
    if (iVar2 != 0) {
      func_0x021b7950(iVar2,uVar3,uVar1,CreateDrawFunc);
    }
    iVar2 = FUN_0214ed84();
  }
  func_0x021b7744(*(undefined4 *)(iVar2 + 4),1);
  func_0x021b5898(*(undefined4 *)(iVar2 + 4));
  (**(code **)(**(int **)(iVar2 + 4) + 0xd8))(*(int **)(iVar2 + 4),1);
  return iVar2;
}

