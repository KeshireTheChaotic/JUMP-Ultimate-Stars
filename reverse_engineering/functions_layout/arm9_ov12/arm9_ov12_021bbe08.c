
/* JUS-GAME ALWidgetImp::Create [source-string] __FILE__="ALWidgetImp.h" __FUNCTION__="Create"
   lines=[62] passed to 1 source-location call(s) */

void ALWidgetImp::Create(int param_1,undefined4 param_2,undefined4 param_3,undefined4 param_4)

{
  int iVar1;
  undefined4 uVar2;
  
  uVar2 = *(undefined4 *)(param_1 + 4);
  iVar1 = jus_AllocDebug(0x134,s_ALWidgetImp_h_021d3e5c,s_Create_021d3e04,0x3e,param_4);
  if (iVar1 != 0) {
    ALWidgetImp_021d0f9c::ALWidgetImp_021d0f9c(iVar1,uVar2,param_2,ALWidgetBaseImp::CreateDrawFunc);
  }
  FUN_021acab4();
  return;
}

