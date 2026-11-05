
/* JUS-GAME ALDrawLinkImp::CreateDrawFunc [source-string] __FILE__="ALDrawLinkImp.h"
   __FUNCTION__="CreateDrawFunc" lines=[50] passed to 1 source-location call(s) */

undefined4 *
ALDrawLinkImp::CreateDrawFunc
          (undefined4 param_1,undefined4 param_2,undefined4 param_3,undefined4 param_4)

{
  undefined4 *puVar1;
  
  puVar1 = (undefined4 *)
           jus_AllocDebug(0x40,s_ALDrawLinkImp_h_021d3c30,s_CreateDrawFunc_021d3c20,0x32,param_4);
  if (puVar1 != (undefined4 *)0x0) {
    jus_Class_02095a08::jus_Class_02095a08(puVar1,param_1,0);
    *puVar1 = &ALWidgetImp_020958dc::vftable;
  }
  return puVar1;
}

