
/* WARNING: Globals starting with '_' overlap smaller symbols at the same address */
/* JUS-GAME ALWidgetImp::Create [source-string-template] __FILE__="ALWidgetImp.h"
   __FUNCTION__="Create"; one of 7 instantiations in arm9_ov01 */

int ALWidgetImp::Create(undefined4 param_1,undefined4 *param_2,int param_3,int param_4,int param_5)

{
  int iVar1;
  undefined4 uVar2;
  int iVar3;
  int *piVar4;
  undefined4 uVar5;
  int local_20;
  int iStack_1c;
  
  uVar2 = _DAT_021d5154;
  uVar5 = *(undefined4 *)(param_3 + 4);
  iStack_1c = param_4;
  iVar1 = thunk_FUN_0201a228(0x134,s_ALWidgetImp_h_0216b998,s_Create_0216b980,0x3e);
  if (iVar1 != 0) {
    func_0x021af0f8(iVar1,uVar5,uVar2,ALWidgetBaseImp::CreateDrawFunc);
  }
  iVar1 = FUN_0214d37c();
  DAT_02093c08 = DAT_02093c08 + -1;
  uVar5 = *(undefined4 *)(param_5 + 4);
  uVar2 = param_2[2];
  (&DAT_020a16d0)[DAT_02093c08] = DAT_020a0dd0;
  DAT_020a0dd0 = uVar5;
  FUN_020329ec(uVar2);
  iVar3 = FUN_0214d37c();
  local_20 = param_4 << 0xc;
  *(undefined4 *)(*(int *)(iVar3 + 4) + 0x54) = 0x31305053;
  piVar4 = *(int **)(*(int *)(iVar3 + 4) + 100);
  (**(code **)(*piVar4 + 0x10))(piVar4,&local_20);
  (**(code **)(**(int **)(iVar3 + 4) + 0xd8))(*(int **)(iVar3 + 4),1);
  piVar4 = *(int **)(iVar3 + 4);
  if (iVar1 == 0) {
    (**(code **)(*piVar4 + 0xd4))(piVar4,0);
  }
  else {
    (**(code **)(*piVar4 + 0xd4))(piVar4,*(undefined4 *)(iVar1 + 4));
  }
  piVar4 = *(int **)(iVar3 + 4);
  (**(code **)(**(int **)(iVar1 + 4) + 0xb4))(*(int **)(iVar1 + 4),piVar4);
  (**(code **)(*piVar4 + 0xc))();
  DAT_020a0dd0 = (&DAT_020a16d0)[DAT_02093c08];
  DAT_02093c08 = DAT_02093c08 + 1;
  (**(code **)(**(int **)(iVar1 + 4) + 0x24))(*(int **)(iVar1 + 4),param_1);
  piVar4 = *(int **)(*(int *)(iVar1 + 4) + 0x50);
  piVar4[3] = param_2[3];
  piVar4[4] = param_2[4];
  piVar4[5] = param_2[5];
  if (*(byte *)(piVar4 + 9) != (*(byte *)(piVar4 + 9) | 1)) {
    (**(code **)(*piVar4 + 0x18))();
  }
  *(byte *)(piVar4 + 9) = *(byte *)(piVar4 + 9) | 0x31;
  piVar4 = (int *)thunk_FUN_0201a228(0x70,s_ALCollision_inl_0216b9b8,s_Create_0216b990,0x1b2);
  if (piVar4 != (int *)0x0) {
    func_0x021b054c(piVar4,0,&DAT_02093c8c);
    *piVar4 = (int)&jus_Class_0216ba10::vftable;
    FUN_0214dad4(piVar4 + 0x1a,param_2 + 6);
    *piVar4 = 0x21d1c58;
  }
  if (piVar4[6] == 0) {
    (**(code **)(*piVar4 + 0x14))();
  }
  FUN_02020e98(iVar1,piVar4[6]);
  (**(code **)(**(int **)(iVar1 + 4) + 0xd8))(*(int **)(iVar1 + 4),1);
  func_0x021b3f78(*(undefined4 *)(iVar1 + 4),*param_2);
  func_0x021b3fc4(*(undefined4 *)(iVar1 + 4),param_2[1]);
  func_0x021b3fb0(*(undefined4 *)(iVar1 + 4),*param_2);
  *(undefined1 *)(*(int *)(iVar1 + 4) + 0xaa) = 1;
  if (param_2[9] != 0) {
    func_0x021b77a8(*(undefined4 *)(iVar1 + 4));
  }
  func_0x021b6760(*(undefined4 *)(iVar1 + 4),4,param_2[8]);
  *(undefined1 *)(*(int *)(iVar1 + 4) + 0xb1) = 1;
  *(undefined1 *)(*(int *)(iVar1 + 4) + 0xab) = 0;
  func_0x021b6214(*(undefined4 *)(iVar1 + 4));
  FUN_02023894(*(undefined4 *)(iVar1 + 4),*param_2,0);
  (**(code **)(**(int **)(*(int *)(iVar1 + 4) + 0x68) + 0x6c))();
  return iVar1;
}

