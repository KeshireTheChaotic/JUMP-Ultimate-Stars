
/* JUS-GAME DemoData::DemoData_Create [source-string] __FILE__="DemoData.cpp"
   __FUNCTION__="DemoData_Create" lines=[20] passed to 1 source-location call(s) */

int * DemoData::DemoData_Create(void)

{
  int *piVar1;
  int *piVar2;
  int iVar3;
  undefined4 in_r3;
  
  piVar1 = (int *)jus_AllocDebug(0xc,s_DemoData_cpp_02172254,s_DemoData_Create_02172244,0x14,in_r3);
  FUN_020517fc(piVar1,0,0xc);
  piVar2 = (int *)FUN_02033410(s_bin_demo_bin_02172264,0,0);
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

