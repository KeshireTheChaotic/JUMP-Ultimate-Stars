
/* WARNING: Globals starting with '_' overlap smaller symbols at the same address */
/* JUS-GAME ALWidgetImp::Create [source-string-template] __FILE__="ALWidgetImp.h"
   __FUNCTION__="Create"; one of 7 instantiations in arm9_ov01 */

int ALWidgetImp::Create(undefined4 param_1,int *param_2,undefined4 param_3,int param_4)

{
  undefined4 uVar1;
  int iVar2;
  undefined4 uVar3;
  undefined4 uVar4;
  undefined1 auStack_2c [8];
  int local_24;
  int local_20;
  int iStack_1c;
  
  iStack_1c = param_4;
  uVar1 = FUN_02160d54(0,0x510000,param_3,0x20);
  uVar3 = _DAT_021d5154;
  uVar4 = *(undefined4 *)(param_4 + 4);
  iVar2 = thunk_FUN_0201a228(0x134,s_ALWidgetImp_h_0216b998,s_Create_0216cbd8,0x3e);
  if (iVar2 != 0) {
    func_0x021af0f8(iVar2,uVar4,uVar3,ALWidgetBaseImp::CreateDrawFunc);
  }
  iVar2 = FUN_0214d37c();
  FUN_0214e688(iVar2,uVar1);
  (**(code **)(**(int **)(iVar2 + 4) + 0x24))(*(int **)(iVar2 + 4),param_1);
  func_0x021b3f78(*(undefined4 *)(iVar2 + 4),param_2[2]);
  func_0x021b4034(*(undefined4 *)(iVar2 + 4),param_2[2]);
  func_0x021b3fc4(*(undefined4 *)(iVar2 + 4),param_2[3]);
  func_0x021b3fb0(*(undefined4 *)(iVar2 + 4),param_2[2]);
  func_0x021b6760(*(undefined4 *)(iVar2 + 4),4,param_2[4]);
  *(undefined1 *)(*(int *)(iVar2 + 4) + 0xb1) = 1;
  FUN_02023894(*(undefined4 *)(iVar2 + 4),param_2[2],0);
  (**(code **)(**(int **)(*(int *)(iVar2 + 4) + 0x68) + 0x6c))();
  local_24 = param_2[1] << 0xc;
  local_20 = *param_2 << 0xc;
  FUN_021511c8(iVar2,&local_20,&local_24);
  *(undefined1 *)(*(int *)(iVar2 + 4) + 0xaa) = 1;
  *(undefined1 *)(*(int *)(iVar2 + 4) + 0xab) = 0;
  if (param_2[5] != 0) {
    func_0x021b77a8(*(undefined4 *)(iVar2 + 4));
  }
  FUN_0214dc98(auStack_2c,0xffffffd0,0xfffffff0,0,0);
  uVar3 = FUN_02150a40(0,auStack_2c,&DAT_02093c8c);
  FUN_02020e98(iVar2,uVar3);
  func_0x021b6214(*(undefined4 *)(iVar2 + 4),0);
  (**(code **)(**(int **)(iVar2 + 4) + 0xd8))(*(int **)(iVar2 + 4),1);
  return iVar2;
}

