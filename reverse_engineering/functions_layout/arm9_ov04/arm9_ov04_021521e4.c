
/* WARNING: Globals starting with '_' overlap smaller symbols at the same address */
/* JUS-GAME JQuizStartBackPlate::JQuizStartBackPlateClass_Create [source-string]
   __FILE__="JQuizStartBackPlate.cpp" __FUNCTION__="JQuizStartBackPlateClass_Create" lines=[40, 62]
   passed to 2 source-location call(s); header inlines: ALWidgetImp.h:Create */

int * JQuizStartBackPlate::JQuizStartBackPlateClass_Create
                (int param_1,undefined4 param_2,undefined4 param_3,undefined4 param_4)

{
  undefined4 uVar1;
  int *piVar2;
  int iVar3;
  int iVar4;
  int *piVar5;
  undefined4 uVar6;
  undefined4 local_50;
  undefined4 local_4c;
  undefined4 local_48;
  undefined4 local_44;
  undefined4 local_40;
  undefined4 local_3c;
  undefined4 local_38;
  undefined4 local_34;
  undefined4 local_30;
  undefined4 local_2c;
  undefined4 local_28;
  undefined4 local_24;
  
  piVar2 = (int *)thunk_FUN_0201a228(0x14,s_JQuizStartBackPlate_cpp_02160cb4,
                                     s_JQuizStartBackPlateClass_Create_02160c94,0x28);
  FUN_020517fc(piVar2,0,0x14);
  iVar3 = FUN_0214e880(FUN_02160ccc,s_JArena_direction_dig_02160ce4,param_2);
  FUN_0214e92c(iVar3,s_jquiz_q_direction00_ncl_02160cfc);
  iVar4 = ALWidgetBaseImp::Create(piVar2,param_4);
  *piVar2 = iVar4;
  (**(code **)(**(int **)(iVar4 + 4) + 0xd8))(*(int **)(iVar4 + 4),1);
  FUN_02023940(*(undefined4 *)(iVar4 + 4));
  FUN_02151ebc(&local_30,iVar4,&DAT_02160d14);
  FUN_02151ebc(&local_38,iVar4,s_Position_02160d1c);
  (**(code **)(**(int **)(iVar4 + 4) + 0xd8))(*(int **)(iVar4 + 4),1);
  FUN_02023c60(*(undefined4 *)(iVar4 + 4),local_30,0,local_2c);
  local_48 = 0;
  local_44 = 0xfff00000;
  FUN_0214e1b8(iVar4,&local_44,&local_48);
  FUN_02023c60(*(undefined4 *)(iVar4 + 4),local_38,0,local_34);
  local_50 = 0;
  local_4c = 0;
  FUN_0214e1b8(iVar4,&local_4c,&local_50);
  FUN_02023c60(*(undefined4 *)(iVar4 + 4),local_38,8,local_34);
  piVar5 = *(int **)(*(int *)(iVar4 + 4) + 0x68);
  (**(code **)(*piVar5 + 0xac))(piVar5,0);
  FUN_02023c80(*(undefined4 *)(iVar4 + 4),local_38,0x494c,local_34);
  FUN_02023c70(*(undefined4 *)(iVar4 + 4),1);
  func_0x021b4034(*(undefined4 *)(iVar4 + 4),1);
  func_0x021b6760(*(undefined4 *)(iVar4 + 4),0x10,FUN_021526c4);
  (**(code **)(**(int **)(iVar4 + 4) + 0xd8))(*(int **)(iVar4 + 4),0);
  uVar1 = _DAT_021d5154;
  uVar6 = *(undefined4 *)(*piVar2 + 4);
  iVar4 = thunk_FUN_0201a228(0x134,s_ALWidgetImp_h_021608d4,s_Create_02160c8c,0x3e);
  piVar5 = (int *)0x0;
  if (iVar4 != 0) {
    piVar5 = (int *)func_0x021af0f8(iVar4,uVar6,uVar1,ALWidgetBaseImp::CreateDrawFunc);
  }
  if (piVar5[6] == 0) {
    (**(code **)(*piVar5 + 0x14))();
  }
  iVar4 = piVar5[6];
  piVar2[1] = iVar4;
  (**(code **)(**(int **)(iVar4 + 4) + 0xd8))(*(int **)(iVar4 + 4),1);
  (**(code **)(**(int **)(iVar4 + 4) + 0x24))(*(int **)(iVar4 + 4),piVar2);
  (**(code **)(**(int **)(iVar3 + 4) + 0xd8))(*(int **)(iVar3 + 4),1);
  piVar5 = *(int **)(iVar3 + 4);
  (**(code **)(**(int **)(iVar4 + 4) + 0xb4))(*(int **)(iVar4 + 4),piVar5);
  (**(code **)(*piVar5 + 0xc))();
  local_28 = 0xa8;
  local_24 = 0x88;
  iVar3 = FUN_0214ee60(*piVar2,param_3,0x820000,param_1 + 6,0xa0,&local_28);
  FUN_02152648(iVar3,piVar2[1]);
  (**(code **)(**(int **)(iVar3 + 4) + 0xd8))(*(int **)(iVar3 + 4),1);
  local_28 = 0x3b;
  local_24 = 0x60;
  iVar3 = FUN_0214ee60(*piVar2,param_3,0x820000,0,0xa0,&local_28);
  FUN_02152648(iVar3,piVar2[1]);
  (**(code **)(**(int **)(iVar3 + 4) + 0xd8))(*(int **)(iVar3 + 4),1);
  FUN_02023940(*(undefined4 *)(iVar3 + 4));
  FUN_02151ebc(&local_40,iVar3,s_2DRot_02160d28);
  FUN_02023738(*(undefined4 *)(iVar3 + 4),0);
  FUN_02023c60(*(undefined4 *)(iVar3 + 4),local_40,0,local_3c);
  FUN_02023738(*(undefined4 *)(iVar3 + 4),0x4000);
  FUN_02023c60(*(undefined4 *)(iVar3 + 4),local_40,0x1e,local_3c);
  FUN_02023738(*(undefined4 *)(iVar3 + 4),0x8000);
  FUN_02023c60(*(undefined4 *)(iVar3 + 4),local_40,0x3c,local_3c);
  FUN_02023738(*(undefined4 *)(iVar3 + 4),0xc000);
  FUN_02023c60(*(undefined4 *)(iVar3 + 4),local_40,0x5a,local_3c);
  FUN_02023738(*(undefined4 *)(iVar3 + 4),0x10000);
  FUN_02023c60(*(undefined4 *)(iVar3 + 4),local_40,0x78,local_3c);
  piVar5 = *(int **)(*(int *)(iVar3 + 4) + 0x68);
  (**(code **)(*piVar5 + 0xac))(piVar5,1);
  FUN_02023c80(*(undefined4 *)(iVar3 + 4),local_40,0x494c,local_3c);
  FUN_02023c70(*(undefined4 *)(iVar3 + 4),1);
  FUN_02023894(*(undefined4 *)(iVar3 + 4),1,0);
  (**(code **)(**(int **)(*(int *)(iVar3 + 4) + 0x68) + 0x6c))();
  return piVar2;
}

