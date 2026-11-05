
/* JUS-GAME ALWidgetImp::Create [source-string] __FILE__="ALWidgetImp.h" __FUNCTION__="Create"
   lines=[62] passed to 1 source-location call(s) */

void ALWidgetImp::Create(int param_1,undefined4 param_2,undefined4 param_3,undefined4 param_4)

{
  int iVar1;
  undefined4 uVar2;
  
  uVar2 = *(undefined4 *)(param_1 + 4);
  iVar1 = thunk_FUN_0201a228(0x134,s_ALWidgetImp_h_02169654,s_Create_02169634,0x3e,param_4);
  if (iVar1 != 0) {
    func_0x021af0f8(iVar1,uVar2,param_2,ALWidgetBaseImp::CreateDrawFunc);
  }
  FUN_0214f340();
  return;
}

