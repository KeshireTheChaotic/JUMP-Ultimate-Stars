
/* WARNING: Removing unreachable block (ram,0x0215e978) */
/* WARNING: Globals starting with '_' overlap smaller symbols at the same address */
/* JUS-GAME ALWidgetBaseImp::Create [source-string-template] __FILE__="ALWidgetBaseImp.h"
   __FUNCTION__="Create"; one of 2 instantiations in arm9_ov05 */

int ALWidgetBaseImp::Create(undefined4 param_1,int param_2,int param_3,undefined4 param_4)

{
  undefined4 uVar1;
  int iVar2;
  int local_20;
  undefined4 uStack_1c;
  
  uVar1 = _DAT_021d5154;
  uStack_1c = param_4;
  iVar2 = jus_AllocDebug(0x14c,s_ALWidgetBaseImp_h_021706f4,s_Create_021706d4,0x2a6);
  if (iVar2 != 0) {
    func_0x021b7950(iVar2,0,uVar1,CreateDrawFunc);
  }
  iVar2 = FUN_021504fc();
  func_0x021b7744(*(undefined4 *)(iVar2 + 4),param_4);
  (**(code **)(**(int **)(iVar2 + 4) + 0x24))(*(int **)(iVar2 + 4),param_1);
  func_0x021b5898(*(undefined4 *)(iVar2 + 4));
  local_20 = param_2 << 0xc;
  FUN_0214d494(iVar2,&local_20);
  (**(code **)(**(int **)(iVar2 + 4) + 0xd8))(*(int **)(iVar2 + 4),1);
  if (param_3 != 0) {
    func_0x021b3ba4(iVar2,param_3);
  }
  return iVar2;
}

