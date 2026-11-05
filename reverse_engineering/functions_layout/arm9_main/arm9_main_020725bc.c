
undefined4 FUN_020725bc(int param_1,int param_2,undefined4 param_3,undefined4 param_4)

{
  int iVar1;
  
                    /* JUS-TAG source_file_inferred="Record.cpp" */
  iVar1 = thunk_FUN_020024cc(param_1,param_2,0x14,param_4,param_4);
  if (iVar1 != 0) {
    return 0;
  }
  if (*(int *)(param_1 + 0x3c) == *(int *)(param_2 + 0x3c)) {
    return 1;
  }
  return 0;
}

