
/* WARNING: Globals starting with '_' overlap smaller symbols at the same address */
/* JUS-GAME ALWidgetImp::Create [source-string-template] __FILE__="ALWidgetImp.h"
   __FUNCTION__="Create"; one of 7 instantiations in arm9_ov01 */

int ALWidgetImp::Create(undefined4 param_1,int *param_2,int param_3,undefined4 param_4)

{
  undefined4 uVar1;
  int iVar2;
  int iVar3;
  int *piVar4;
  undefined4 uVar5;
  int local_1c;
  int local_18;
  
  iVar2 = FUN_02162e10(0,param_2[3],param_4,0x80);
  uVar1 = _DAT_021d5154;
  uVar5 = *(undefined4 *)(param_3 + 4);
  iVar3 = thunk_FUN_0201a228(0x134,s_ALWidgetImp_h_0216b998,&DAT_0216ce44,0x3e);
  if (iVar3 != 0) {
    func_0x021af0f8(iVar3,uVar5,uVar1,ALWidgetBaseImp::CreateDrawFunc);
  }
  iVar3 = FUN_0214d37c();
  FUN_0214e688(iVar3,iVar2);
  (**(code **)(**(int **)(iVar3 + 4) + 0x24))(*(int **)(iVar3 + 4),param_1);
  func_0x021b3f78(*(undefined4 *)(iVar3 + 4),param_2[2]);
  func_0x021b3fc4(*(undefined4 *)(iVar3 + 4),param_2[2]);
  *(undefined1 **)(*(int *)(iVar3 + 4) + 0xdc) = &LAB_02163990_1;
  if (param_2[2] == 0) {
    (**(code **)(**(int **)(iVar2 + 4) + 0xd8))(*(int **)(iVar2 + 4),0);
  }
  else {
    FUN_02023894(*(undefined4 *)(iVar3 + 4),param_2[2],0);
    (**(code **)(**(int **)(*(int *)(iVar3 + 4) + 0x68) + 0x6c))();
  }
  local_1c = param_2[1] << 0xc;
  local_18 = *param_2 << 0xc;
  FUN_021511c8(iVar3,&local_18,&local_1c);
  piVar4 = (int *)thunk_FUN_0201a228(0x70,s_ALCollision_inl_0216b9b8,s_Create_0216ce4c,0x1b2);
  if (piVar4 != (int *)0x0) {
    func_0x021b054c(piVar4,0,&DAT_02093c8c);
    *piVar4 = (int)&jus_Class_0216ba10::vftable;
    FUN_0214dad4(piVar4 + 0x1a,param_2 + 5);
    *piVar4 = 0x21d1c58;
  }
  if (piVar4[6] == 0) {
    (**(code **)(*piVar4 + 0x14))();
  }
  FUN_02020e98(iVar3,piVar4[6]);
  (**(code **)(**(int **)(iVar3 + 4) + 0xd8))(*(int **)(iVar3 + 4),1);
  return iVar3;
}

