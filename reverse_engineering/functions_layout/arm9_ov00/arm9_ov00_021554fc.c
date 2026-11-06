
/* WARNING: Globals starting with '_' overlap smaller symbols at the same address */
/* JUS-GAME ALWidgetImp::Create [source-string-template] __FILE__="ALWidgetImp.h"
   __FUNCTION__="Create"; one of 3 instantiations in arm9_ov00 */

int ALWidgetImp::Create(undefined4 param_1,undefined4 param_2,int *param_3,int param_4,
                       undefined4 param_5,int param_6,undefined4 param_7)

{
  undefined4 uVar1;
  int iVar2;
  int iVar3;
  int *piVar4;
  undefined4 uVar5;
  int local_30;
  int local_2c;
  int local_28;
  int iStack_24;
  
  iStack_24 = param_4;
  iVar2 = FUN_02155334(0,param_5,param_6,param_7);
  uVar1 = _DAT_021d5154;
  if (param_4 == 0) {
    iVar3 = thunk_FUN_0201a228(0x134,&DAT_02160d3c,s_Create_02161064,0x3e);
    if (iVar3 != 0) {
      func_0x021af0f8(iVar3,0,uVar1,ALWidgetBaseImp::CreateDrawFunc);
    }
    iVar3 = FUN_0214ed84();
  }
  else {
    uVar5 = *(undefined4 *)(param_4 + 4);
    iVar3 = thunk_FUN_0201a228(0x134,&DAT_02160d3c,s_Create_02161064,0x3e);
    if (iVar3 != 0) {
      func_0x021af0f8(iVar3,uVar5,uVar1,ALWidgetBaseImp::CreateDrawFunc);
    }
    iVar3 = FUN_0214ed84();
  }
  *(undefined4 *)(*(int *)(iVar2 + 4) + 0x54) = 0x31305053;
  local_28 = param_6 << 0xc;
  FUN_0214eed0(iVar3,&local_28);
  FUN_021552fc(iVar3,iVar2);
  (**(code **)(**(int **)(iVar3 + 4) + 0x24))(*(int **)(iVar3 + 4),param_1);
  func_0x021b3f78(*(undefined4 *)(iVar3 + 4),param_2);
  func_0x021b3fb0(*(undefined4 *)(iVar3 + 4),param_2);
  func_0x021b3fc4(*(undefined4 *)(iVar3 + 4),param_2);
  FUN_02023894(*(undefined4 *)(iVar3 + 4),param_2,0);
  (**(code **)(**(int **)(*(int *)(iVar3 + 4) + 0x68) + 0x6c))();
  piVar4 = *(int **)(*(int *)(iVar3 + 4) + 0x68);
  (**(code **)(*piVar4 + 0xac))(piVar4,0);
  local_30 = param_3[1] << 0xc;
  local_2c = *param_3 << 0xc;
  FUN_0214f418(iVar3,&local_2c,&local_30);
  return iVar3;
}

