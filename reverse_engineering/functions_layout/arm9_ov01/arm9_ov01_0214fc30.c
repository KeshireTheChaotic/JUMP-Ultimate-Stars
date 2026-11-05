
/* WARNING: Globals starting with '_' overlap smaller symbols at the same address */
/* JUS-GAME ALWidgetImp::Create [source-string-template] __FILE__="ALWidgetImp.h"
   __FUNCTION__="Create"; one of 7 instantiations in arm9_ov01 */

int ALWidgetImp::Create(int param_1,undefined4 param_2,undefined4 param_3,int param_4,int param_5,
                       int *param_6)

{
  undefined4 uVar1;
  int iVar2;
  int iVar3;
  int *piVar4;
  undefined4 uVar5;
  int local_20;
  
  uVar1 = _DAT_021d5154;
  uVar5 = *(undefined4 *)(param_1 + 4);
  local_20 = param_4;
  iVar2 = thunk_FUN_0201a228(0x134,s_ALWidgetImp_h_0216b998,s_Create_0216bd04,0x3e);
  if (iVar2 != 0) {
    func_0x021af0f8(iVar2,uVar5,uVar1,ALWidgetBaseImp::CreateDrawFunc);
  }
  iVar2 = FUN_0214d37c();
  iVar3 = FUN_0214fba8(param_2,param_3,param_4,param_5);
  piVar4 = *(int **)(iVar3 + 4);
  (**(code **)(**(int **)(iVar2 + 4) + 0xb4))(*(int **)(iVar2 + 4),piVar4);
  (**(code **)(*piVar4 + 0xc))();
  local_20 = param_5 << 0xc;
  FUN_0214e6c0(iVar2,&local_20);
  iVar3 = param_6[1];
  piVar4 = *(int **)(*(int *)(iVar2 + 4) + 0x50);
  piVar4[3] = *param_6 << 0xc;
  piVar4[4] = iVar3 << 0xc;
  if (*(byte *)(piVar4 + 9) != (*(byte *)(piVar4 + 9) | 1)) {
    (**(code **)(*piVar4 + 0x18))();
  }
  *(byte *)(piVar4 + 9) = *(byte *)(piVar4 + 9) | 0x31;
  return iVar2;
}

