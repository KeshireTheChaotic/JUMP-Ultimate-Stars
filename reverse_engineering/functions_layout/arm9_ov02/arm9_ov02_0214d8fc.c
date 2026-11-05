
/* WARNING: Globals starting with '_' overlap smaller symbols at the same address */
/* JUS-GAME ALWidgetImp::Create [source-string-template] __FILE__="ALWidgetImp.h"
   __FUNCTION__="Create"; one of 3 instantiations in arm9_ov02 */

int ALWidgetImp::Create(undefined4 param_1,int param_2,undefined4 *param_3,undefined4 param_4)

{
  undefined4 uVar1;
  int iVar2;
  int iVar3;
  int *piVar4;
  undefined4 uVar5;
  
  uVar1 = _DAT_021d5154;
  uVar5 = *(undefined4 *)(param_2 + 4);
  iVar2 = jus_AllocDebug(0x134,s_ALWidgetImp_h_0215bbfc,s_Create_0215bbd8,0x3e);
  if (iVar2 != 0) {
    func_0x021af0f8(iVar2,uVar5,uVar1,ALWidgetBaseImp::CreateDrawFunc);
  }
  iVar2 = FUN_0214d498();
  (**(code **)(**(int **)(iVar2 + 4) + 0x24))(*(int **)(iVar2 + 4),param_1);
  iVar3 = *(int *)(*(int *)(iVar2 + 4) + 0x50);
  *(undefined4 *)(iVar3 + 0xc) = *param_3;
  *(undefined4 *)(iVar3 + 0x10) = param_3[1];
  *(undefined4 *)(iVar3 + 0x14) = param_3[2];
  FUN_0214d4e8(iVar3,1);
  piVar4 = (int *)jus_AllocDebug(0x70,s_ALCollision_inl_0215bc1c,s_Create_0215bbe0,0x1b2);
  if (piVar4 != (int *)0x0) {
    func_0x021b054c(piVar4,0,&DAT_02093c8c);
    *piVar4 = (int)&jus_Class_0215bde0::vftable;
    FUN_0214da38(piVar4 + 0x1a,param_4);
    *piVar4 = 0x21d1c58;
  }
  if (piVar4[6] == 0) {
    (**(code **)(*piVar4 + 0x14))();
  }
  FUN_02020e98(iVar2,piVar4[6]);
  (**(code **)(**(int **)(iVar2 + 4) + 0xd8))(*(int **)(iVar2 + 4),1);
  return iVar2;
}

