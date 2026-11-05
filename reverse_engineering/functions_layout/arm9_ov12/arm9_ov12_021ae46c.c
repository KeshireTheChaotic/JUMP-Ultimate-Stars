
/* JUS-GAME ALWidgetBaseImp::CreateDrawFunc [source-string] __FILE__="ALWidgetBaseImp.h"
   __FUNCTION__="CreateDrawFunc" lines=[261] passed to 1 source-location call(s) */

undefined4 *
ALWidgetBaseImp::CreateDrawFunc
          (undefined4 param_1,undefined4 param_2,undefined4 param_3,undefined4 param_4)

{
  undefined4 *puVar1;
  
  puVar1 = (undefined4 *)
           jus_AllocDebug(0x44,s_ALWidgetBaseImp_h_021d17a4,s_CreateDrawFunc_021d1738,0x105,param_4)
  ;
  if (puVar1 != (undefined4 *)0x0) {
    jus_Class_02095a08::jus_Class_02095a08(puVar1,param_1,0);
    *puVar1 = &ALDrawLinkImp_021d2a24::vftable;
    *(undefined1 *)(puVar1 + 0x10) = 1;
  }
  return puVar1;
}

