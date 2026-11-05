
/* WARNING: Globals starting with '_' overlap smaller symbols at the same address */
/* JUS-GAME ALWidgetImp::Create [source-string-template] __FILE__="ALWidgetImp.h"
   __FUNCTION__="Create"; one of 7 instantiations in arm9_ov01 */

int ALWidgetImp::Create(undefined4 param_1,int param_2,int param_3,undefined4 param_4)

{
  int iVar1;
  undefined4 uVar2;
  int iVar3;
  int *piVar4;
  undefined4 uVar5;
  undefined2 local_24;
  undefined2 local_22;
  undefined2 local_20;
  undefined2 local_1e;
  int local_1c [2];
  
  iVar3 = FUN_0203b3f4();
  DAT_02093c08 = DAT_02093c08 + -1;
  uVar2 = *(undefined4 *)(*(int *)(iVar3 + 0x88) + 4);
  (&DAT_020a16d0)[DAT_02093c08] = DAT_020a0dd0;
  DAT_020a0dd0 = uVar2;
  uVar2 = _DAT_021d5154;
  uVar5 = *(undefined4 *)(param_2 + 4);
  iVar3 = thunk_FUN_0201a228(0x134,s_ALWidgetImp_h_0216b998,s_Create_0216c910,0x3e);
  if (iVar3 != 0) {
    func_0x021af0f8(iVar3,uVar5,uVar2,ALWidgetBaseImp::CreateDrawFunc);
  }
  iVar3 = FUN_0215b570();
  (**(code **)(**(int **)(iVar3 + 4) + 0x24))(*(int **)(iVar3 + 4),param_1);
  FUN_02027834(*(undefined4 *)(iVar3 + 4),8,param_4);
  func_0x021b4104(*(undefined4 *)(iVar3 + 4),*(undefined4 *)(iVar3 + 4),4);
  local_1c[1] = 0x20000;
  FUN_0214e6c0(iVar3,local_1c + 1);
  local_1c[0] = param_3 << 0xc;
  FUN_0215b3f4(iVar3,local_1c);
  local_24 = 0xffac;
  local_22 = 0;
  local_20 = 0;
  local_1e = 0x13;
  piVar4 = (int *)thunk_FUN_0201a228(0x70,s_ALCollision_inl_0216b9b8,s_Create_0216c908,0x1b2);
  if (piVar4 != (int *)0x0) {
    func_0x021b054c(piVar4,0,&DAT_02093c8c);
    *piVar4 = (int)&jus_Class_0216ba10::vftable;
    FUN_0214dad4(piVar4 + 0x1a,&local_24);
    *piVar4 = 0x21d1c58;
  }
  if (piVar4[6] == 0) {
    (**(code **)(*piVar4 + 0x14))();
  }
  FUN_02020e98(iVar3,piVar4[6]);
  (**(code **)(**(int **)(iVar3 + 4) + 0xd8))(*(int **)(iVar3 + 4),1);
  iVar1 = DAT_02093c08;
  DAT_02093c08 = DAT_02093c08 + 1;
  DAT_020a0dd0 = (&DAT_020a16d0)[iVar1];
  return iVar3;
}

