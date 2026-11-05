
int FUN_02172e60(int param_1)

{
  int *piVar1;
  
  piVar1 = *(int **)(*(int *)(param_1 + 4) + 0x34);
  if (piVar1[0x97] == 0) {
    (**(code **)(*piVar1 + 0x14))();
  }
  return piVar1[0x97];
}

