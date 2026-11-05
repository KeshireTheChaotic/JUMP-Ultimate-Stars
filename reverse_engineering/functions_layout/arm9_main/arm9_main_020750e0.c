
/* JUS-GAME StageData::StageData_Create [source-string] __FILE__="StageData.cpp"
   __FUNCTION__="StageData_Create" lines=[31] passed to 1 source-location call(s) */

int * StageData::StageData_Create(void)

{
  int *piVar1;
  int *piVar2;
  int iVar3;
  undefined4 in_r3;
  
                    /* JUS-TAG strings=["StageData.cpp","StageData_Create","bin/stage.bin"] */
  piVar1 = (int *)jus_AllocDebug(8,s_StageData_cpp_0209f378,s_StageData_Create_0209f364,0x1f,in_r3);
  FUN_020517fc(piVar1,0,8);
  piVar2 = (int *)FUN_02033410(s_bin_stage_bin_0209f388,0,0);
  if (piVar2[7] == 0) {
    (**(code **)(*piVar2 + 0x10))();
  }
  iVar3 = piVar2[7];
  *piVar1 = iVar3;
  piVar2 = *(int **)(iVar3 + 4);
  iVar3 = (**(code **)(*piVar2 + 0x2c))(piVar2,0);
  piVar1[1] = iVar3;
  return piVar1;
}

