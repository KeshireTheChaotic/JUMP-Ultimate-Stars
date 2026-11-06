
/* JUS-GAME ALControllerImp::Create [source-string-template] __FILE__="ALControllerImp.h"
   __FUNCTION__="Create"; one of 8 instantiations in arm9_ov00 */

int ALControllerImp::Create
              (undefined4 *param_1,undefined4 param_2,undefined4 param_3,undefined4 param_4,
              undefined1 param_5,undefined1 param_6)

{
  int iVar1;
  int *piVar2;
  undefined4 uVar3;
  undefined4 uVar4;
  
  uVar3 = param_1[1];
  uVar4 = *param_1;
  iVar1 = thunk_FUN_0201a228(0x4c,&DAT_02160d6c,&DAT_02160d20,0x2ef);
  piVar2 = (int *)0x0;
  if (iVar1 != 0) {
    piVar2 = (int *)jus_TagIPMV::jus_TagIPMV
                              (iVar1,0,uVar4,uVar3,param_2,param_3,param_4,param_5,param_6);
  }
  if (piVar2[6] == 0) {
    (**(code **)(*piVar2 + 0x14))();
  }
  return piVar2[6];
}

