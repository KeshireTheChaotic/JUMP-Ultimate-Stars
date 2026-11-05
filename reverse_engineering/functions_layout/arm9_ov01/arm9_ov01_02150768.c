
void FUN_02150768(int param_1,int param_2,undefined2 *param_3)

{
  int iVar1;
  
                    /* JUS-TAG source_file_inferred="JArenaMissionTry.cpp" */
  iVar1 = *(int *)(param_1 + 4);
  *(undefined1 *)(iVar1 + 0x901) = 1;
  iVar1 = iVar1 + param_2 * 8;
  *(undefined2 *)(iVar1 + 0x8d8) = *param_3;
  *(undefined2 *)(iVar1 + 0x8da) = param_3[1];
  *(undefined2 *)(iVar1 + 0x8dc) = param_3[2];
  *(undefined2 *)(iVar1 + 0x8de) = param_3[3];
  return;
}

