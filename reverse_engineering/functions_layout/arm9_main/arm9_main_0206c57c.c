
/* JUS-GAME CommonEffect::CreateImpFunc [source-string] __FILE__="CommonEffect.h"
   __FUNCTION__="CreateImpFunc" lines=[149] passed to 1 source-location call(s) */

void CommonEffect::CreateImpFunc(void)

{
  int iVar1;
  undefined4 in_r3;
  
                    /* JUS-TAG strings=["CommonEffect.h","CreateImpFunc"] */
  iVar1 = jus_AllocDebug(0x84,s_CommonEffect_h_0209e000,s_CreateImpFunc_0209dfd0,0x95,in_r3);
  if (iVar1 == 0) {
    return;
  }
  CommonEffect_0209e114::CommonEffect_0209e114(iVar1,FUN_02024a30);
  return;
}

