
/* WARNING: Globals starting with '_' overlap smaller symbols at the same address */
/* JUS-GAME ALWidgetImp::Create [source-string-template] __FILE__="ALWidgetImp.h"
   __FUNCTION__="Create"; one of 3 instantiations in arm9_ov05 */

int ALWidgetImp::Create(undefined4 param_1,int param_2,int param_3,undefined4 param_4,
                       undefined4 param_5,undefined4 param_6,undefined4 param_7,undefined4 param_8)

{
  undefined4 uVar1;
  int iVar2;
  int *piVar3;
  undefined4 uVar4;
  undefined4 uVar5;
  
  uVar1 = _DAT_021d5154;
  uVar4 = *(undefined4 *)(param_2 + 4);
  uVar5 = param_4;
  iVar2 = jus_AllocDebug(0x134,s_ALWidgetImp_h_021706e4,s_Create_021711a8,0x3e);
  if (iVar2 != 0) {
    func_0x021af0f8(iVar2,uVar4,uVar1,ALWidgetBaseImp::CreateDrawFunc);
  }
  iVar2 = FUN_021504fc();
  if (param_3 != 0) {
    FUN_02163b38(0,param_4,param_5,iVar2,param_6,uVar5);
    FUN_02023894(*(undefined4 *)(iVar2 + 4),param_3,0);
    (**(code **)(**(int **)(*(int *)(iVar2 + 4) + 0x68) + 0x6c))();
  }
  (**(code **)(**(int **)(iVar2 + 4) + 0x24))(*(int **)(iVar2 + 4),param_1);
  piVar3 = (int *)jus_AllocDebug(0x70,s_ALCollision_inl_0216f8b4,s_Create_021711b8,0x1b2);
  if (piVar3 != (int *)0x0) {
    func_0x021b054c(piVar3,0,&DAT_02093c8c);
    *piVar3 = (int)&jus_Class_0216f578::vftable;
    FUN_021509e4(piVar3 + 0x1a,param_8);
    *piVar3 = 0x21d1c58;
  }
  if (piVar3[6] == 0) {
    (**(code **)(*piVar3 + 0x14))();
  }
  FUN_02020e98(iVar2,piVar3[6]);
  FUN_021639a8(iVar2,param_7);
  (**(code **)(**(int **)(iVar2 + 4) + 0xd8))(*(int **)(iVar2 + 4),1);
  return iVar2;
}

