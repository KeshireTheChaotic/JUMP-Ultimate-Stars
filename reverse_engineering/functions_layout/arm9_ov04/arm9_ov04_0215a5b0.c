
/* WARNING: Globals starting with '_' overlap smaller symbols at the same address */
/* JUS-GAME ALWidgetImp::Create [source-string-template] __FILE__="ALWidgetImp.h"
   __FUNCTION__="Create"; one of 3 instantiations in arm9_ov04 */

void ALWidgetImp::Create(int *param_1,int param_2,undefined4 param_3,undefined4 param_4)

{
  int iVar1;
  int *piVar2;
  undefined4 uVar3;
  int iVar4;
  undefined4 uVar5;
  undefined4 local_24;
  undefined4 local_20;
  undefined4 uStack_1c;
  
  uVar3 = _DAT_021d5154;
  uVar5 = *(undefined4 *)(param_2 + 4);
  uStack_1c = param_4;
  iVar1 = jus_AllocDebug(0x134,s_ALWidgetImp_h_021608d4,s_Create_021613ec,0x3e);
  piVar2 = (int *)0x0;
  if (iVar1 != 0) {
    piVar2 = (int *)func_0x021af0f8(iVar1,uVar5,uVar3,ALWidgetBaseImp::CreateDrawFunc);
  }
  if (piVar2[6] == 0) {
    (**(code **)(*piVar2 + 0x14))();
  }
  iVar1 = piVar2[6];
  piVar2 = *(int **)(iVar1 + 4);
  (**(code **)(*piVar2 + 0xd8))(piVar2,1);
  (**(code **)(**(int **)(*param_1 + 4) + 0xd8))(*(int **)(*param_1 + 4),1);
  FUN_0214e478(iVar1,*param_1);
  iVar1 = FUN_0203b404();
  iVar1 = FUN_0214e9f0(*(undefined4 *)(iVar1 + 0x88),0x880000,0,0x81);
  if ((char)param_1[4] == '\0') {
    local_24 = 0x800;
    FUN_0215a7a4(iVar1,&local_24);
  }
  else {
    local_20 = 0x800;
    FUN_0215a7a4(iVar1,&local_20);
  }
  piVar2 = *(int **)(*(int *)(iVar1 + 4) + 0x50);
  piVar2[3] = 0x80000;
  piVar2[4] = 0x38000;
  if (*(byte *)(piVar2 + 9) != (*(byte *)(piVar2 + 9) | 1)) {
    (**(code **)(*piVar2 + 0x18))();
  }
  *(byte *)(piVar2 + 9) = *(byte *)(piVar2 + 9) | 0x31;
  FUN_0214e478(param_2,iVar1);
  if ((char)param_1[4] == '\0') {
    uVar3 = FUN_021545b0(iVar1);
    iVar1 = CommonPaletteAnime::CommonPaletteAnime_Create(uVar3,1,6,0,0x80);
    param_1[2] = iVar1;
    FUN_0215a7c8(iVar1,8,1);
  }
  else {
    uVar3 = FUN_021545b0(*param_1);
    iVar4 = CommonPaletteAnime::CommonPaletteAnime_Create(uVar3,1,2,0,0x80);
    param_1[2] = iVar4;
    FUN_0215a7c8(iVar4,0x10,1);
    uVar3 = FUN_021545b0(iVar1);
    iVar1 = CommonPaletteAnime::CommonPaletteAnime_Create(uVar3,1,0xb,0,0x80);
    param_1[3] = iVar1;
    FUN_0215a7c8(iVar1,8,2);
  }
  return;
}

