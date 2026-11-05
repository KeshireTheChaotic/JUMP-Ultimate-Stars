
/* JUS-GAME MissionData::MissionData_Create [source-string] __FILE__="MissionData.cpp"
   __FUNCTION__="MissionData_Create" lines=[37] passed to 1 source-location call(s) */

int * MissionData::MissionData_Create
                (int param_1,undefined4 param_2,undefined4 param_3,undefined4 param_4)

{
  int *piVar1;
  int *piVar2;
  int iVar3;
  
                    /* JUS-TAG
                       strings=["MissionData.cpp","MissionData_Create","jgalaxy/battle.bin","jgalaxy/mission.bin"]
                        */
  piVar1 = (int *)jus_AllocDebug(0x10,s_MissionData_cpp_0209f3e8,s_MissionData_Create_0209f3d4,0x25,
                                 param_4);
  FUN_020517fc(piVar1,0,0x10);
  *(char *)(piVar1 + 3) = (char)param_1;
  if (param_1 == 0) {
    iVar3 = FUN_02070b30(s_jgalaxy_mission_bin_0209f3f8,0,0);
    *piVar1 = iVar3;
  }
  else if (param_1 == 1) {
    iVar3 = FUN_02070b30(s_jgalaxy_battle_bin_0209f40c,0,0);
    *piVar1 = iVar3;
  }
  piVar2 = (int *)(**(code **)(**(int **)(*piVar1 + 4) + 0x2c))(*(int **)(*piVar1 + 4),0);
  piVar1[2] = *piVar2;
  iVar3 = (**(code **)(**(int **)(*piVar1 + 4) + 0x2c))(*(int **)(*piVar1 + 4),4);
  piVar1[1] = iVar3;
  return piVar1;
}

