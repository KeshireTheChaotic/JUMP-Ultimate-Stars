
/* JUS-GAME LocationData::LocationData_Create [source-string] __FILE__="LocationData.cpp"
   __FUNCTION__="LocationData_Create" lines=[20] passed to 1 source-location call(s) */

int * LocationData::LocationData_Create(void)

{
  int *piVar1;
  int *piVar2;
  int iVar3;
  undefined4 in_r3;
  
                    /* JUS-TAG strings=["LocationData.cpp","LocationData_Create","bin/location.bin"]
                        */
  piVar1 = (int *)thunk_FUN_0201a228(0xc,s_LocationData_cpp_0209f434,s_LocationData_Create_0209f420,
                                     0x14,in_r3);
  FUN_020517fc(piVar1,0,0xc);
  piVar2 = (int *)FUN_02033410(s_bin_location_bin_0209f448,0,0);
  if (piVar2[7] == 0) {
    (**(code **)(*piVar2 + 0x10))();
  }
  iVar3 = piVar2[7];
  *piVar1 = iVar3;
  piVar2 = *(int **)(iVar3 + 4);
  piVar2 = (int *)(**(code **)(*piVar2 + 0x2c))(piVar2,0);
  piVar1[2] = *piVar2;
  iVar3 = (**(code **)(**(int **)(*piVar1 + 4) + 0x2c))(*(int **)(*piVar1 + 4),0);
  piVar1[1] = iVar3 + 4;
  return piVar1;
}

