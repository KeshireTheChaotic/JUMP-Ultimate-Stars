
/* WARNING: Removing unreachable block (ram,0x0214fd90) */
/* JUS-GAME ALWidgetBaseImp::Create [source-string-template] __FILE__="ALWidgetBaseImp.h"
   __FUNCTION__="Create"; one of 5 instantiations in arm9_ov01 */

int ALWidgetBaseImp::Create
              (undefined4 param_1,undefined4 param_2,undefined4 param_3,undefined4 param_4)

{
  int iVar1;
  undefined4 uVar2;
  
  uVar2 = *puRam0214fde8;
  iVar1 = thunk_FUN_0201a228(0x14c,uRam0214fdec,uRam0214fdf0,uRam0214fdf4,param_4);
  if (iVar1 != 0) {
    func_0x021b7950(iVar1,0,uVar2,uRam0214fdf8);
  }
  iVar1 = FUN_0214d37c();
  func_0x021b5898(*(undefined4 *)(iVar1 + 4));
  (**(code **)(**(int **)(iVar1 + 4) + 0x24))(*(int **)(iVar1 + 4),param_1);
  func_0x021b6214(*(undefined4 *)(iVar1 + 4),0);
  func_0x021b7744(*(undefined4 *)(iVar1 + 4),0);
  (**(code **)(**(int **)(iVar1 + 4) + 0xd8))(*(int **)(iVar1 + 4),0);
  return iVar1;
}

