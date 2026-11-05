
/* JUS-GAME JPowerData::JPowerData_Create [source-string] __FILE__="JPowerData.cpp"
   __FUNCTION__="JPowerData_Create" lines=[21] passed to 1 source-location call(s) */

int * JPowerData::JPowerData_Create(void)

{
  int *piVar1;
  int *piVar2;
  int iVar3;
  undefined4 in_r3;
  
  piVar1 = (int *)thunk_FUN_0201a228(8,s_JPowerData_cpp_021713ec,s_JPowerData_Create_021713d8,0x15,
                                     in_r3);
  FUN_020517fc(piVar1,0,8);
  piVar2 = (int *)FUN_02033410(s_bin_jpower_bin_021713fc,0,0);
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

