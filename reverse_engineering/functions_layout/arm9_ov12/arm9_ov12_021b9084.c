
/* JUS-GAME ALObjectImp::PostMessage [source-string-template] __FILE__="ALObjectImp.h"
   __FUNCTION__="PostMessage"; one of 3 instantiations in arm9_ov12 */

void ALObjectImp::PostMessage(int param_1,int *param_2)

{
  int *piVar1;
  undefined4 uVar2;
  int iVar3;
  int iVar4;
  undefined4 uVar5;
  int local_28;
  int local_24;
  int local_20;
  int local_1c [3];
  
  local_1c[2] = *(int *)(param_1 + 0x98) * 0x1000 + *(int *)(param_1 + 0x9c) * -0x2000 +
                *(int *)(*(int *)(param_1 + 0xb0) + 0x98) * -0x1000;
  if (*param_2 < local_1c[2]) {
    piVar1 = param_2;
  }
  else {
    piVar1 = local_1c + 2;
  }
  if (*piVar1 < 0) {
    local_1c[1] = 0;
    param_2 = local_1c + 1;
  }
  else if (local_1c[2] <= *param_2) {
    param_2 = local_1c + 2;
  }
  iVar4 = *param_2;
  if ((*(uint *)(param_1 + 0xac) & 1) == 0) {
    local_1c[0] = iVar4 + *(int *)(param_1 + 0x9c) * 0x1000;
    FUN_021b6454(*(undefined4 *)(param_1 + 0xb0),local_1c);
    iVar3 = *(int *)(param_1 + 0x98);
  }
  else {
    local_20 = iVar4 + *(int *)(param_1 + 0x9c) * 0x1000;
    FUN_021acadc(*(undefined4 *)(param_1 + 0xb0),&local_20);
    iVar3 = (int)*(short *)(*(int *)(param_1 + 0x90) + 0xcc);
  }
  if ((*(int *)(param_1 + 0xa8) != 0) && (*(int *)(param_1 + 0xa4) != 0)) {
    iVar4 = FUN_0200d338(iVar4 * ((*(int *)(param_1 + 0xa4) + 1) - *(int *)(param_1 + 0xa8)),
                         (iVar3 + *(int *)(param_1 + 0x9c) * -2) -
                         *(int *)(*(int *)(param_1 + 0xb0) + 0x98));
    if (iVar4 < 0) {
      local_28 = iVar4 + -0x7ff;
      piVar1 = &local_28;
    }
    else {
      local_24 = iVar4 + 0x7ff;
      piVar1 = &local_24;
    }
    iVar3 = *piVar1;
    uVar5 = *(undefined4 *)(param_1 + 0x90);
    iVar4 = jus_AllocDebug(0x2c,s_ALObjectImp_h_021d3c10,s_PostMessage_021d3be4,0x10a);
    uVar2 = 0;
    if (iVar4 != 0) {
      uVar2 = jus_Class_021d293c::jus_Class_021d293c
                        (iVar4,0x80011002,param_1,
                         (int)(iVar3 + ((uint)(iVar3 >> 0xb) >> 0x14)) >> 0xc,0,0);
    }
    FUN_02028644(uVar5,uVar2,0);
  }
  return;
}

