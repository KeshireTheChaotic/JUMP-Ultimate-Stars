
/* JUS-GAME BattleDemo::Battle_DemoKoCreate [source-string] __FILE__="BattleDemo.cpp"
   __FUNCTION__="Battle_DemoKoCreate" lines=[230] passed to 1 source-location call(s) */

int * BattleDemo::Battle_DemoKoCreate(void)

{
  int *piVar1;
  int iVar2;
  int iVar3;
  undefined4 local_38;
  undefined4 local_34;
  undefined4 local_30;
  undefined4 local_2c;
  undefined4 local_28;
  
  piVar1 = (int *)jus_AllocDebug(0x24,s_BattleDemo_cpp_02171dec,s_Battle_DemoKoCreate_02171dd8,0xe6)
  ;
  FUN_020517fc(piVar1,0,0x24);
  *(undefined1 *)(piVar1 + 8) = 0;
  iVar2 = FUN_02026f94();
  *piVar1 = iVar2;
  local_38 = 0x9b000;
  (**(code **)(**(int **)(iVar2 + 4) + 0xa0))(*(int **)(iVar2 + 4),&local_38);
  FUN_02028384(*(undefined4 *)(*piVar1 + 4),FUN_02153b44);
  (**(code **)(**(int **)(*piVar1 + 4) + 0x24))(*(int **)(*piVar1 + 4),piVar1);
  (**(code **)(**(int **)(*piVar1 + 4) + 0x94))(*(int **)(*piVar1 + 4),0x100000);
  iVar2 = FUN_020101f4(s_battle_ko_aar_02171dfc,0);
  piVar1[1] = iVar2;
  FUN_021532f4();
  iVar2 = FUN_0203b404();
  iVar3 = 0;
  DAT_020a0dd0 = *(undefined4 *)(*(int *)(iVar2 + 0x88) + 4);
  do {
    iVar2 = FUN_021533fc(0x530000);
    piVar1[iVar3 + 2] = iVar2;
    (**(code **)(**(int **)(iVar2 + 4) + 0x24))(*(int **)(iVar2 + 4),piVar1);
    local_28 = 0x20000;
    FUN_02153684(piVar1[iVar3 + 2],&local_28);
    FUN_02023894(*(undefined4 *)(piVar1[iVar3 + 2] + 4),iVar3 + 0x530000,0);
    local_2c = 0x43000;
    FUN_021512bc(piVar1[iVar3 + 2],&local_2c);
    (**(code **)(**(int **)(piVar1[iVar3 + 2] + 4) + 0x94))(*(int **)(piVar1[iVar3 + 2] + 4),0x800);
    (**(code **)(**(int **)(piVar1[iVar3 + 2] + 4) + 0xd8))(*(int **)(piVar1[iVar3 + 2] + 4),0);
    FUN_020282f4(*(undefined4 *)(piVar1[iVar3 + 2] + 4));
    iVar3 = iVar3 + 1;
  } while (iVar3 < 5);
  local_34 = 0x38000;
  local_30 = 0x80000;
  FUN_021519d0(piVar1[6],&local_30,&local_34);
  FUN_02153324();
  return piVar1;
}

