
/* WARNING: Globals starting with '_' overlap smaller symbols at the same address */
/* JUS-GAME ALWidgetImp::Create [source-string-template] __FILE__="ALWidgetImp.h"
   __FUNCTION__="Create"; one of 3 instantiations in arm9_ov00 */

int ALWidgetImp::Create(undefined4 param_1,int param_2,undefined4 param_3,undefined4 param_4)

{
  undefined4 uVar1;
  int iVar2;
  int *piVar3;
  undefined4 uVar4;
  
  uVar1 = _DAT_021d5154;
  uVar4 = *(undefined4 *)(param_2 + 4);
  iVar2 = thunk_FUN_0201a228(0x134,&DAT_02160d3c,s_Create_02161364,0x3e);
  if (iVar2 != 0) {
    func_0x021af0f8(iVar2,uVar4,uVar1,ALWidgetBaseImp::CreateDrawFunc);
  }
  iVar2 = FUN_0214ed84();
  (**(code **)(**(int **)(iVar2 + 4) + 0x24))(*(int **)(iVar2 + 4),param_1);
  piVar3 = (int *)thunk_FUN_0201a228(0x70,s_ALCollision_inl_02160d5c,s_Create_0216134c,0x1b2);
  if (piVar3 != (int *)0x0) {
    func_0x021b054c(piVar3,0,&DAT_02093c8c);
    *piVar3 = (int)&jus_Class_02160db0::vftable;
    FUN_0215115c(piVar3 + 0x1a,param_4);
    *piVar3 = 0x21d1c58;
  }
  if (piVar3[6] == 0) {
    (**(code **)(*piVar3 + 0x14))();
  }
  FUN_02020e98(iVar2,piVar3[6]);
  FUN_02151170(iVar2,param_3);
  (**(code **)(**(int **)(iVar2 + 4) + 0xd8))(*(int **)(iVar2 + 4),1);
  return iVar2;
}

