
/* WARNING: Globals starting with '_' overlap smaller symbols at the same address */
/* JUS-GAME ALWidgetBaseImp::Create [source-string-template] __FILE__="ALWidgetBaseImp.h"
   __FUNCTION__="Create"; one of 5 instantiations in arm9_ov01 */

int ALWidgetBaseImp::Create(int param_1,undefined4 param_2,undefined4 param_3,undefined4 param_4)

{
  undefined4 uVar1;
  int iVar2;
  int *piVar3;
  undefined4 uVar4;
  undefined4 local_10;
  
  uVar1 = _DAT_021d5154;
                    /* JUS-TAG source_file_inferred="DeckSelect.cpp" */
  local_10 = param_4;
  if (param_1 == 0) {
    iVar2 = thunk_FUN_0201a228(0x14c,s_ALWidgetBaseImp_h_0216b9dc,s_Create_0216c444,0x2a6);
    if (iVar2 != 0) {
      func_0x021b7950(iVar2,0,uVar1,CreateDrawFunc);
    }
    iVar2 = FUN_0214d37c();
  }
  else {
    uVar4 = *(undefined4 *)(param_1 + 4);
    iVar2 = thunk_FUN_0201a228(0x14c,s_ALWidgetBaseImp_h_0216b9dc,s_Create_0216c444,0x2a6);
    if (iVar2 != 0) {
      func_0x021b7950(iVar2,uVar4,uVar1,CreateDrawFunc);
    }
    iVar2 = FUN_0214d37c();
  }
  FUN_0214d354(iVar2,0);
  (**(code **)(**(int **)(iVar2 + 4) + 0xd8))(*(int **)(iVar2 + 4),1);
  FUN_02023940(*(undefined4 *)(iVar2 + 4));
  piVar3 = *(int **)(*(int *)(iVar2 + 4) + 0x68);
  (**(code **)(*piVar3 + 0xac))(piVar3,0);
  FUN_02023c70(*(undefined4 *)(iVar2 + 4),0);
  func_0x021b3f78(*(undefined4 *)(iVar2 + 4),0);
  local_10 = 0xfb000;
  FUN_0214e6c0(iVar2,&local_10);
  return iVar2;
}

