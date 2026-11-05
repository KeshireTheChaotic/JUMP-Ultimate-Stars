
/* JUS-GAME ALWidgetImp::CreateDrawFunc [source-string] __FILE__="ALWidgetImp.h"
   __FUNCTION__="CreateDrawFunc" lines=[334] passed to 1 source-location call(s) */

undefined4 *
ALWidgetImp::CreateDrawFunc
          (undefined4 param_1,undefined4 param_2,undefined4 param_3,undefined4 param_4)

{
  undefined4 *puVar1;
  
  puVar1 = (undefined4 *)
           thunk_FUN_0201a228(0x44,s_ALWidgetImp_h_0215e560,s_CreateDrawFunc_0215e580,0x14e,param_4)
  ;
  if (puVar1 != (undefined4 *)0x0) {
    ALWidgetImp_020958dc::ALWidgetImp_020958dc(puVar1,param_1);
    *puVar1 = 0x21d2a24;
    *(undefined1 *)(puVar1 + 0x10) = 1;
    *puVar1 = 0x21d080c;
  }
  return puVar1;
}

