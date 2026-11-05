
/* JUS-GAME CommonEffect::CloneMain [source-string] __FILE__="CommonEffect.h"
   __FUNCTION__="CloneMain" lines=[162] passed to 1 source-location call(s) */

undefined4 *
CommonEffect::CloneMain(int param_1,undefined4 param_2,undefined4 param_3,undefined4 param_4)

{
  undefined4 *puVar1;
  
                    /* JUS-TAG strings=["CloneMain","CommonEffect.h"] */
  puVar1 = (undefined4 *)
           jus_AllocDebug(0x84,s_CommonEffect_h_0209e040,s_CloneMain_0209dfc4,0xa2,param_4);
  if (puVar1 != (undefined4 *)0x0) {
    CommonEffect_0209c30c::CommonEffect_0209c30c(puVar1,param_1);
    *puVar1 = &CommonEffect_0209e114::vftable;
    *(undefined2 *)(puVar1 + 0x20) = *(undefined2 *)(param_1 + 0x80);
  }
  return puVar1;
}

