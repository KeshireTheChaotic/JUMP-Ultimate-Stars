
undefined4 FUN_02072840(int param_1,int param_2)

{
  int iVar1;
  
                    /* JUS-TAG source_file_inferred="Record.cpp" */
  iVar1 = FUN_02072a60(0x20b02b8);
  if (*(int *)(&DAT_020b76c8 + iVar1 * 0x28 + param_1 * 4) - param_2 < 0) {
    return 0;
  }
  return 1;
}

