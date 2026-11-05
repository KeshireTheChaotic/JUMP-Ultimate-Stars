
/* JUS-GAME ALCollisionImp::CloneMain [source-string] __FILE__="ALCollisionImp.h"
   __FUNCTION__="CloneMain" lines=[422] passed to 1 source-location call(s) */

undefined4 *
ALCollisionImp::CloneMain(int param_1,undefined4 param_2,undefined4 param_3,undefined4 param_4)

{
  undefined4 *puVar1;
  
  puVar1 = (undefined4 *)
           thunk_FUN_0201a228(0x70,s_ALCollisionImp_h_021d192c,s_CloneMain_021d18b0,0x1a6,param_4);
  if (puVar1 != (undefined4 *)0x0) {
    jus_Class_021d1be8::jus_Class_021d1be8(puVar1,param_1);
    *puVar1 = &ALCollision_021d0a1c::vftable;
    FUN_021ac9b0(puVar1 + 0x1a,param_1 + 0x68);
    *puVar1 = &vftable;
  }
  return puVar1;
}

