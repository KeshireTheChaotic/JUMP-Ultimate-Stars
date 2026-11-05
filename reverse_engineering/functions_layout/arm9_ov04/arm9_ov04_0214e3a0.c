
/* JUS-GAME ALWidgetImp::Create [source-string-template] __FILE__="ALWidgetImp.h"
   __FUNCTION__="Create"; one of 3 instantiations in arm9_ov04 */

void ALWidgetImp::Create(int param_1,undefined4 param_2,undefined4 param_3,undefined4 param_4)

{
  int iVar1;
  undefined4 uVar2;
  
  uVar2 = *(undefined4 *)(param_1 + 4);
  iVar1 = jus_AllocDebug(0x134,s_ALWidgetImp_h_021608d4,s_Create_021608c4,0x3e,param_4);
  if (iVar1 != 0) {
    func_0x021af0f8(iVar1,uVar2,param_2,ALWidgetBaseImp::CreateDrawFunc);
  }
  FUN_0214e3ec();
  return;
}

