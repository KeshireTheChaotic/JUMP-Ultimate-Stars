
/* JUS-GAME ALWidgetImp::Create [source-string-template] __FILE__="ALWidgetImp.h"
   __FUNCTION__="Create"; one of 3 instantiations in arm9_ov03 */

void ALWidgetImp::Create(int param_1,undefined4 param_2,undefined4 param_3,undefined4 param_4)

{
  int iVar1;
  undefined4 uVar2;
  
  uVar2 = *(undefined4 *)(param_1 + 4);
  iVar1 = thunk_FUN_0201a228(0x134,s_ALWidgetImp_h_0215da90,&DAT_0215db2c,0x3e,param_4);
  if (iVar1 != 0) {
    func_0x021af0f8(iVar1,uVar2,param_2,ALWidgetBaseImp::CreateDrawFunc);
  }
  FUN_0214d47c();
  return;
}

