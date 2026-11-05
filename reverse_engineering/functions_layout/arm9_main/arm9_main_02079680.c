
int FUN_02079680(int param_1,int param_2)

{
  int *piVar1;
  
  piVar1 = *(int **)(*(int *)(*(int *)(param_1 + 4) + 100) + param_2 * 4 + 0x20);
  if (piVar1[0xe] == 0) {
    (**(code **)(*piVar1 + 0x14))();
  }
  return piVar1[0xe];
}

