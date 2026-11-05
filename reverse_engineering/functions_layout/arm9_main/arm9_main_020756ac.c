
/* JUS-GAME PopularNameData::PopularNameData_Create [source-string] __FILE__="PopularNameData.cpp"
   __FUNCTION__="PopularNameData_Create" lines=[20] passed to 1 source-location call(s) */

int * PopularNameData::PopularNameData_Create(void)

{
  int *piVar1;
  int *piVar2;
  int iVar3;
  undefined4 in_r3;
  
                    /* JUS-TAG
                       strings=["PopularNameData.cpp","PopularNameData_Create","bin/pname.bin"] */
  piVar1 = (int *)jus_AllocDebug(0xc,s_PopularNameData_cpp_0209f474,
                                 s_PopularNameData_Create_0209f45c,0x14,in_r3);
  FUN_020517fc(piVar1,0,0xc);
  piVar2 = (int *)FUN_02033410(s_bin_pname_bin_0209f488,0,0);
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

