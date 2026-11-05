
/* JUS-GAME RuleData::RuleData_Create [source-string] __FILE__="RuleData.cpp"
   __FUNCTION__="RuleData_Create" lines=[23] passed to 1 source-location call(s) */

int * RuleData::RuleData_Create(void)

{
  int *piVar1;
  int *piVar2;
  int iVar3;
  undefined4 in_r3;
  
  piVar1 = (int *)thunk_FUN_0201a228(8,s_RuleData_cpp_0216d350,s_RuleData_Create_0216d340,0x17,in_r3
                                    );
  FUN_020517fc(piVar1,0,8);
  piVar2 = (int *)FUN_02033410(FUN_0216d360,0,0);
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

