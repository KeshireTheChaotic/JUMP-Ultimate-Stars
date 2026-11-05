
void FUN_021cb2f0(int param_1,int param_2)

{
  int iVar1;
  
                    /* JUS-TAG source_file_inferred="ALFont.cpp" */
  param_2 = param_2 * 8;
  iVar1 = *(int *)(param_1 + 0x40) + 2;
  *(short *)(iVar1 + param_2) = *(short *)(iVar1 + param_2) + -1;
  if (*(short *)(*(int *)(param_1 + 0x40) + param_2 + 2) == 0) {
    FUN_021cb560();
  }
  return;
}

