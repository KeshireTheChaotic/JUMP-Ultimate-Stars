
/* WARNING: Removing unreachable block (ram,0x02163050) */
/* WARNING: Globals starting with '_' overlap smaller symbols at the same address */
/* JUS-GAME ALWidgetBaseImp::Create [source-string-template] __FILE__="ALWidgetBaseImp.h"
   __FUNCTION__="Create"; one of 5 instantiations in arm9_ov01 */

int ALWidgetBaseImp::Create(void)

{
  undefined4 uVar1;
  int iVar2;
  int *piVar3;
  
  uVar1 = _DAT_021d5154;
  iVar2 = thunk_FUN_0201a228(0x14c,s_ALWidgetBaseImp_h_0216b9dc,s_Create_0216ce5c,0x2a6);
  if (iVar2 != 0) {
    func_0x021b7950(iVar2,0,uVar1,CreateDrawFunc);
  }
  iVar2 = FUN_0214d37c();
  func_0x021b5898(*(undefined4 *)(iVar2 + 4));
  func_0x021b7744(*(undefined4 *)(iVar2 + 4),1);
  (**(code **)(**(int **)(iVar2 + 4) + 0xd8))(*(int **)(iVar2 + 4),1);
  FUN_02023940(*(undefined4 *)(iVar2 + 4));
  piVar3 = *(int **)(*(int *)(iVar2 + 4) + 0x68);
  (**(code **)(*piVar3 + 0xac))(piVar3,0);
  FUN_02023c70(*(undefined4 *)(iVar2 + 4),0);
  func_0x021b3f78(*(undefined4 *)(iVar2 + 4),0);
  return iVar2;
}

