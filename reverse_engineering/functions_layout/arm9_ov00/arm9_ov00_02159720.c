
/* JUS-GAME ALWidgetImp::CreateDrawFunc [source-string] __FILE__="ALWidgetImp.h"
   __FUNCTION__="CreateDrawFunc" lines=[334] passed to 1 source-location call(s) */

undefined4 *
ALWidgetImp::CreateDrawFunc
          (undefined4 param_1,undefined4 param_2,undefined4 param_3,undefined4 param_4)

{
  undefined4 *puVar1;
  
  puVar1 = (undefined4 *)
           thunk_FUN_0201a228(0x44,FUN_02161608,s_CreateDrawFunc_02161618,0x14e,param_4);
  if (puVar1 != (undefined4 *)0x0) {
    jus_Class_02095a08::jus_Class_02095a08(puVar1,param_1,0);
    *puVar1 = 0x21d2a24;
    *(undefined1 *)(puVar1 + 0x10) = 1;
    *puVar1 = 0x21d080c;
  }
  return puVar1;
}

