
int FUN_021ca2a0(int param_1)

{
  int *piVar1;
  
                    /* JUS-TAG source_file_inferred="ALTextDS.cpp" */
  piVar1 = *(int **)(*(int *)(*(int *)(param_1 + 4) + 100) + 0x54);
  if (piVar1 == (int *)0x0) {
    return 0;
  }
  if (piVar1[0x1a] == 0) {
    (**(code **)(*piVar1 + 0x10))();
  }
  return piVar1[0x1a];
}

