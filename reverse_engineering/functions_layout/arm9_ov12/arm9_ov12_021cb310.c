
void FUN_021cb310(int param_1,int param_2)

{
  int iVar1;
  
                    /* JUS-TAG source_file_inferred="ALFont.cpp" */
  iVar1 = *(int *)(param_1 + 0x40) + 2;
  *(short *)(iVar1 + param_2 * 8) = *(short *)(iVar1 + param_2 * 8) + 1;
  return;
}

