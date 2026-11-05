
/* JUS-GAME JQuizMainSingleScore::JQuizMainSingleScoreClass_Create [source-string]
   __FILE__="JQuizMainSingleScore.cpp" __FUNCTION__="JQuizMainSingleScoreClass_Create" lines=[69]
   passed to 1 source-location call(s) */

int * JQuizMainSingleScore::JQuizMainSingleScoreClass_Create
                (undefined4 param_1,undefined4 param_2,undefined4 param_3,undefined4 param_4)

{
  int *piVar1;
  int iVar2;
  int iVar3;
  undefined4 uVar4;
  undefined4 uVar5;
  undefined4 local_28;
  undefined4 local_24;
  undefined4 local_20;
  undefined4 local_1c;
  undefined4 local_18;
  undefined4 uStack_14;
  
  uStack_14 = param_4;
  piVar1 = (int *)jus_AllocDebug(0x20,s_JQuizMainSingleScore_cpp_0216113c,
                                 s_JQuizMainSingleScoreClass_Create_02161118,0x45);
  FUN_020517fc(piVar1,0,0x20);
  iVar2 = ALWidgetBaseImp::Create(piVar1,param_1);
  (**(code **)(**(int **)(iVar2 + 4) + 0xd8))(*(int **)(iVar2 + 4),1);
  piVar1[1] = iVar2;
  iVar3 = FUN_0203b404();
  iVar3 = ALWidgetImp::Create(iVar2,*(undefined4 *)(iVar3 + 0x88),4,0x810000,0x1c,0xe,0x12,0x6e);
  piVar1[7] = iVar3;
  FUN_021501e4(iVar3,0xda,0xb5);
  FUN_02150270(piVar1[7],0);
  FUN_021502f0(piVar1[7],0x19);
  FUN_021502fc(piVar1[7],3);
  iVar3 = FUN_0203b404();
  FUN_0214f1b8(*(undefined4 *)(iVar3 + 0x88));
  iVar3 = FUN_0203b404();
  uVar5 = *(undefined4 *)(iVar3 + 0x88);
  uVar4 = FUN_0214f288();
  iVar3 = FUN_0214eaa0(uVar5,uVar4,0,0x6e);
  uVar4 = FUN_02071f08();
  FUN_0214ece0(iVar3,uVar4,10);
  local_20 = 0xa4000;
  local_24 = 0x46000;
  FUN_0214e1b8(iVar3,&local_24,&local_20);
  (**(code **)(**(int **)(iVar3 + 4) + 0xd8))(*(int **)(iVar3 + 4),1);
  FUN_0214e478(iVar2,iVar3);
  iVar3 = FUN_0203b404();
  iVar3 = FUN_0214e9f0(*(undefined4 *)(iVar3 + 0x88),0x810000,0x3a,0x80);
  local_18 = 0xac000;
  local_1c = 0xa0000;
  FUN_0214e1b8(iVar3,&local_1c,&local_18);
  (**(code **)(**(int **)(iVar3 + 4) + 0xd8))(*(int **)(iVar3 + 4),1);
  FUN_0214e478(iVar2,iVar3);
  uVar4 = FUN_021545b0(iVar3);
  iVar2 = CommonPaletteAnime::CommonPaletteAnime_Create(uVar4,0x21,1,7,0x80);
  piVar1[4] = iVar2;
  FUN_02157ac8(iVar2,1);
  uVar4 = FUN_021545b0(iVar3);
  iVar2 = CommonPaletteAnime::CommonPaletteAnime_Create(uVar4,0x21,1,6,0x80);
  piVar1[3] = iVar2;
  FUN_02157ac8(iVar2,1);
  iVar2 = FUN_02026f94();
  *piVar1 = iVar2;
  local_28 = 0x80000;
  (**(code **)(**(int **)(iVar2 + 4) + 0xa0))(*(int **)(iVar2 + 4),&local_28);
  FUN_02028384(*(undefined4 *)(*piVar1 + 4),&DAT_02157b70);
  (**(code **)(**(int **)(*piVar1 + 4) + 0x24))(*(int **)(*piVar1 + 4),piVar1);
  return piVar1;
}

