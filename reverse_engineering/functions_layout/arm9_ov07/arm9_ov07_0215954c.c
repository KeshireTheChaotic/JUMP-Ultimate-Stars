
/* JUS-GAME ALObjectImp::PostMessage [source-string] __FILE__="ALObjectImp.h"
   __FUNCTION__="PostMessage" lines=[266] passed to 1 source-location call(s) */

void ALObjectImp::PostMessage
               (int param_1,int param_2,undefined4 param_3,undefined4 param_4,undefined4 param_5,
               undefined4 param_6)

{
  undefined4 *puVar1;
  undefined4 uVar2;
  undefined4 uVar3;
  
  uVar2 = *(undefined4 *)(param_1 + 4);
  uVar3 = *(undefined4 *)(param_2 + 4);
  puVar1 = (undefined4 *)
           thunk_FUN_0201a228(0x2c,s_ALObjectImp_h_0216a0e8,s_PostMessage_0216a0dc,0x10a,param_4);
  if (puVar1 != (undefined4 *)0x0) {
    *puVar1 = &DAT_02094584;
    puVar1[3] = 0;
    puVar1[4] = DAT_02093c24;
    puVar1[5] = uVar2;
    puVar1[6] = param_3;
    *puVar1 = &jus_Class_0216a13c::vftable;
    puVar1[8] = param_4;
    puVar1[9] = param_5;
    puVar1[10] = param_6;
  }
  FUN_02028644(uVar3,puVar1,param_6);
  return;
}

