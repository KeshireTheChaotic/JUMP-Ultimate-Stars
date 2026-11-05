
/* JUS-GAME TitleData::TitleData_Create [source-string] __FILE__="TitleData.cpp"
   __FUNCTION__="TitleData_Create" lines=[29] passed to 1 source-location call(s) */

int * TitleData::TitleData_Create(void)

{
  int *piVar1;
  int *piVar2;
  int iVar3;
  undefined4 in_r3;
  
                    /* JUS-TAG strings=["TitleData.cpp","TitleData_Create","bin/title.bin"] */
  piVar1 = (int *)jus_AllocDebug(8,s_TitleData_cpp_0209e8ec,s_TitleData_Create_0209e82c,0x1d,in_r3);
  FUN_020517fc(piVar1,0,8);
  piVar2 = (int *)FUN_02033410(s_bin_title_bin_0209e8fc,0,0);
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

