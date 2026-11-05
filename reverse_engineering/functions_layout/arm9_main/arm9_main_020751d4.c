
/* JUS-GAME ClearlstData::ClearlstData_Create [source-string] __FILE__="ClearlstData.cpp"
   __FUNCTION__="ClearlstData_Create" lines=[23] passed to 1 source-location call(s) */

int * ClearlstData::ClearlstData_Create(void)

{
  int *piVar1;
  int *piVar2;
  int iVar3;
  undefined4 in_r3;
  
                    /* JUS-TAG strings=["ClearlstData.cpp","ClearlstData_Create","bin/clearlst.bin"]
                        */
  piVar1 = (int *)thunk_FUN_0201a228(8,s_ClearlstData_cpp_0209f3ac,s_ClearlstData_Create_0209f398,
                                     0x17,in_r3);
  FUN_020517fc(piVar1,0,8);
  piVar2 = (int *)FUN_02033410(s_bin_clearlst_bin_0209f3c0,0,0);
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

